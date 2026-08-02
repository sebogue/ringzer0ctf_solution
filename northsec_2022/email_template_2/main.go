package main

import (
    "os"
    "log"

    "net/http"
    "io/ioutil"

    "github.com/gin-gonic/gin"
)

type Update struct {
    Template string `json:"template" binding:"required"`
}

func main() {
    r := gin.Default()
    r.LoadHTMLGlob("templates/*")
    r.Static("/assets", "./assets")

    r.GET("/", func(c *gin.Context) {
        f, err := os.Open("templates/preview.html")

        if err != nil {
            log.Fatal(err)
        }

        defer func() {
            if err = f.Close(); err != nil {
                log.Fatal(err)
            }
        }()
        
        content, err := ioutil.ReadAll(f)

        c.HTML(http.StatusOK, "index.html", gin.H{"title":"Test!","template":string(content),"c":c})
    })

    r.POST("/update", func(c *gin.Context) {
        var update Update
        var err error

        err = c.BindJSON(&update)

        if err != nil {
            log.Fatal(err)
        }

        f, err := os.OpenFile("templates/preview.html", os.O_WRONLY|os.O_CREATE|os.O_TRUNC, 0664)

        if err != nil {
            log.Fatal(err)
        }

        defer f.Close()

        if _, err = f.WriteString(update.Template); err != nil {
            log.Fatal(err)
        }

        c.JSON(200, "ok")
    })

    r.Any("/preview", func(c *gin.Context) {
        var title string
        if title = c.Query("title"); c.Query("title") == "" {
            title = "Test Email"
        }
        
        var eventname string
        if eventname = c.Query("eventname"); c.Query("eventname") == "" {
            eventname = "My-Event-Name"
        }
        
        var firstname string
        if firstname = c.Query("firstname"); c.Query("firstname") == "" {
            firstname = "John"
        }
        
        var lastname string
        if lastname = c.Query("lastname"); c.Query("lastname") == "" {
            lastname = "Smith"
        }
        
        var companyname string
        if companyname = c.Query("companyname"); c.Query("companyname") == "" {
            companyname = "Email Templating Inc."
        }
        
        // Fetch all custom tags
        var num string
        var stop bool = false
        var custom string
        var customs = map[string]string{}
        for i := 1; !stop && i < 10; i++ {
            num = "custom"+string(i+48)
            custom = c.Query(num)

            if custom == ""{
                stop = true
                break
            }
            customs[num] = custom
        }

        // Create the response map
        var response map[string]interface{} = gin.H{
                "title":title,
                "eventname":eventname,
                "firstname":firstname,
                "lastname":lastname,
                "companyname":companyname,
                "c":c,
            }

        // Merge the custom tags
        for key, value := range customs {
            response[key] = value
        }

        c.HTML(http.StatusOK, 
            "preview.html", 
            response,
        )
    })

    r.Run("127.0.0.1:8000")
}