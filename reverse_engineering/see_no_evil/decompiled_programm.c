int64_t sub_140001000()
{
    data_140041e90 = 0x58721dbad27579a;
    return 0x58721dbad27579a;
}

int64_t sub_140001020()
{
    data_140041e88 = 0x58721dbad2757da;
    return 0x58721dbad2757da;
}

int64_t sub_14000103c()
{
    sub_140007e28(&data_140041f00, &data_140041f70, 0, 1);
    /* tailcall */
    return atexit(sub_140028a60);
}

int64_t std::fout::()
{
    void* rax = sub_14000eda8(1);
    sub_140007ea4(&data_140041f70);
    data_140041f70 = &std::filebuf::`vftable'{for `std::streambuf'};
    std::basic_filebuf<char,struct std::char_traits<char> >::_Init(&data_140041f70, rax, 0);
    /* tailcall */
    return atexit(sub_140028ac0);
}

int64_t sub_1400010bc()
{
    /* tailcall */
    return sub_140007f54(&data_140041ef1);
}

int64_t std::initlocks::()
{
    std::_Init_locks::_Init_locks(&data_140041ef0);
    /* tailcall */
    return atexit(std::initlocks::);
}

int64_t std::initlocks::()
{
    std::_Init_locks::_Init_locks(&data_140042020);
    /* tailcall */
    return atexit(std::initlocks::);
}

int64_t sub_140001108()
{
    /* tailcall */
    return atexit(sub_140028ae4);
}

int64_t sub_140001114()
{
    /* tailcall */
    return atexit(sub_140028b40);
}

int64_t sub_140001120()
{
    /* tailcall */
    return atexit(sub_140028b80);
}

int64_t std::initlocks::()
{
    std::_Init_locks::_Init_locks(&data_1400423d0);
    /* tailcall */
    return atexit(std::initlocks::);
}

int64_t* sub_140001150(uint64_t arg1)
{
    int64_t* result_1 = sub_14000a804(0x10);
    int64_t* result;
    
    if (!result_1)
        result = nullptr;
    else
    {
        __builtin_memset(result_1, 0, 0x10);
        result = result_1;
    }
    
    *result = j_sub_14000a804(arg1);
    result[1] = arg1;
    return result;
}

int64_t sub_1400011e0(int64_t* arg1)
{
    __builtin_memset(*arg1, 0, arg1[1]);
    j_j_free(*arg1);
    return j_j_free(arg1);
}

int64_t* sub_140001240(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    return sub_140001270(arg2, arg1, arg3, 0);
}

int64_t* sub_140001270(int64_t arg1, int64_t* arg2, int64_t arg3, int32_t arg4)
{
    int64_t var_48 = 0;
    char* rax = j__malloc_base(8);
    void* rax_1 = j__malloc_base(0x110);
    char* rax_2 = j__malloc_base(8);
    int32_t var_88 = 0;
    int64_t var_50 = arg1;
    int64_t i = arg3;
    __builtin_memset(rax_2, 0, 8);
    __builtin_memset(rax, 0, 8);
    __builtin_memset(rax_1, 0, 0x110);
    sub_140001640(*arg2, rax_1);
    int32_t var_58;
    
    var_58 = COMBINE(0, arg3) % 8 ? 0 : 1;
    
    int64_t rax_10 = COMBINE(0, arg3) / 8 + var_58;
    int64_t* result = sub_140001150(rax_10 << 3);
    int64_t* var_80 = *result;
    
    while (i)
    {
        var_48 += 1;
        int64_t count;
        
        count = i >= 8 ? 8 : i;
        
        __builtin_memcpy(rax, var_50, count);
        var_50 += 8;
        int64_t i_1;
        
        i_1 = i >= 8 ? 8 : i;
        
        i -= i_1;
        
        if (var_48 != rax_10)
        {
            sub_140002570(rax, rax_2, rax_1, arg4);
            *var_80 = *rax_2;
            var_80 = &var_80[1];
        }
        else if (arg4 != 1)
        {
            sub_140002570(rax, rax_2, rax_1, arg4);
            uint32_t rax_37 = rax_2[7];
            
            if (rax_37 < 8)
            {
                __builtin_memcpy(var_80, rax_2, 8 - rax_37);
                var_80 = &var_80[1];
            }
        }
        else
        {
            int64_t rcx_10;
            int64_t rdi_6;
            
            if (8 - COMBINE(0, arg3) % 8 < 8)
                rdi_6 = __memfill_u8(&rax[8] - (8 - COMBINE(0, arg3) % 8), 
                    (8 - COMBINE(0, arg3) % 8), 8 - COMBINE(0, arg3) % 8);
            sub_140002570(rax, rax_2, rax_1, arg4);
            *var_80 = *rax_2;
            var_80 = &var_80[1];
            
            if (8 - COMBINE(0, arg3) % 8 == 8)
            {
                int64_t rcx_14;
                int64_t rdi_8;
                rdi_8 = __memfill_u8(rax, (8 - COMBINE(0, arg3) % 8), 8);
                sub_140002570(rax, rax_2, rax_1, arg4);
                *var_80 = *rax_2;
                var_80 = &var_80[1];
            }
        }
        
        __builtin_memset(rax, 0, 8);
    }
    
    __builtin_memset(rax_2, 0, 8);
    __builtin_memset(rax, 0, 8);
    __builtin_memset(rax_1, 0, 0x110);
    free(rax);
    free(rax_2);
    free(rax_1);
    return result;
}

int32_t sub_140001640(char* arg1, void* arg2)
{
    for (int32_t i = 0; i < 8; i += 1)
        *(arg2 + i) = 0;
    
    for (int32_t i_1 = 0; i_1 < 0x38; i_1 += 1)
    {
        int32_t rax_7 = data_140040000[i_1];
        char temp0_1;
        char temp1_1;
        temp0_1 = HIGHD(rax_7 - 1);
        temp1_1 = LOWD(rax_7 - 1);
        char rdx_1 = temp0_1 & 7;
        int32_t var_d4_1 = 0x80;
        int32_t temp2_1;
        int32_t temp3_1;
        temp2_1 = HIGHD(rax_7 - 1);
        temp3_1 = LOWD(rax_7 - 1);
        char temp4_1;
        char temp5_1;
        temp4_1 = HIGHD(rax_7 - 1);
        temp5_1 = LOWD(rax_7 - 1);
        char rdx_5 = temp4_1 & 7;
        int32_t temp6_1;
        int32_t temp7_1;
        temp6_1 = HIGHD(i_1);
        temp7_1 = LOWD(i_1);
        char temp8_1;
        char temp9_1;
        temp8_1 = HIGHD(i_1);
        temp9_1 = LOWD(i_1);
        char rdx_9 = temp8_1 & 7;
        char rax_42 = (0x80 >> (((temp1_1 + rdx_1) & 7) - rdx_1)
            & arg1[(temp3_1 + (temp2_1 & 7)) >> 3]) << (((temp5_1 + rdx_5) & 7) - rdx_5)
            >> (((temp9_1 + rdx_9) & 7) - rdx_9);
        int32_t temp10_1;
        int32_t temp11_1;
        temp10_1 = HIGHD(i_1);
        temp11_1 = LOWD(i_1);
        *(arg2 + ((temp11_1 + (temp10_1 & 7)) >> 3)) =
            *(arg2 + ((temp7_1 + (temp6_1 & 7)) >> 3)) | rax_42;
    }
    
    for (int32_t i_2 = 0; i_2 < 3; i_2 += 1)
        *(arg2 + i_2 + 8) = *(arg2 + i_2);
    
    *(arg2 + 0xb) = *(arg2 + 3) & 0xf0;
    
    for (int32_t i_3 = 0; i_3 < 3; i_3 += 1)
    {
        *(arg2 + i_3 + 0xc) = (*(arg2 + i_3 + 3) & 0xf) << 4;
        *(arg2 + i_3 + 0xc) |= (*(arg2 + i_3 + 4) & 0xf0) >> 4;
    }
    
    int32_t result = (*(arg2 + 6) & 0xf) << 4;
    *(arg2 + 0xf) = result;
    
    for (int32_t i_4 = 1; i_4 < 0x11; i_4 = result)
    {
        for (int32_t j = 0; j < 4; j += 1)
        {
            *(arg2 + i_4 * 0x10 + j + 8) = *(arg2 + (i_4 - 1) * 0x10 + j + 8);
            *(arg2 + i_4 * 0x10 + j + 0xc) = *(arg2 + (i_4 - 1) * 0x10 + j + 0xc);
        }
        
        int32_t rax_84 = *(&data_1400401e0 + (i_4 << 2));
        char var_e8_4;
        
        var_e8_4 = rax_84 != 1 ? 0xc0 : 0x80;
        
        char rax_86 = var_e8_4 & *(arg2 + i_4 * 0x10 + 8);
        char rax_88 = var_e8_4 & *(arg2 + i_4 * 0x10 + 9);
        char rax_90 = var_e8_4 & *(arg2 + i_4 * 0x10 + 0xa);
        char rax_92 = var_e8_4 & *(arg2 + i_4 * 0x10 + 0xb);
        *(arg2 + i_4 * 0x10 + 8) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 8) |= rax_88 >> (8 - rax_84);
        *(arg2 + i_4 * 0x10 + 9) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 9) |= rax_90 >> (8 - rax_84);
        *(arg2 + i_4 * 0x10 + 0xa) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 0xa) |= rax_92 >> (8 - rax_84);
        *(arg2 + i_4 * 0x10 + 0xb) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 0xb) |= rax_86 >> (4 - rax_84);
        char rax_130 = var_e8_4 & *(arg2 + i_4 * 0x10 + 0xc);
        char rax_132 = var_e8_4 & *(arg2 + i_4 * 0x10 + 0xd);
        char rax_134 = var_e8_4 & *(arg2 + i_4 * 0x10 + 0xe);
        char rax_136 = var_e8_4 & *(arg2 + i_4 * 0x10 + 0xf);
        *(arg2 + i_4 * 0x10 + 0xc) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 0xc) |= rax_132 >> (8 - rax_84);
        *(arg2 + i_4 * 0x10 + 0xd) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 0xd) |= rax_134 >> (8 - rax_84);
        *(arg2 + i_4 * 0x10 + 0xe) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 0xe) |= rax_136 >> (8 - rax_84);
        *(arg2 + i_4 * 0x10 + 0xf) <<= rax_84;
        *(arg2 + i_4 * 0x10 + 0xf) |= rax_130 >> (4 - rax_84);
        
        for (int32_t j_1 = 0; j_1 < 0x30; j_1 += 1)
        {
            int32_t rax_176 = *(&data_140040230 + (j_1 << 2));
            char var_e8_7;
            
            if (rax_176 > 0x1c)
            {
                char temp12_1;
                char temp13_1;
                temp12_1 = HIGHD(rax_176 - 0x1d);
                temp13_1 = LOWD(rax_176 - 0x1d);
                char rdx_130 = temp12_1 & 7;
                int32_t var_c4_1 = 0x80;
                int32_t temp14_1;
                int32_t temp15_1;
                temp14_1 = HIGHD(rax_176 - 0x1d);
                temp15_1 = LOWD(rax_176 - 0x1d);
                char temp16_1;
                char temp17_1;
                temp16_1 = HIGHD(rax_176 - 0x1d);
                temp17_1 = LOWD(rax_176 - 0x1d);
                char rdx_134 = temp16_1 & 7;
                char rax_224 = (0x80 >> (((temp13_1 + rdx_130) & 7) - rdx_130)
                    & *(arg2 + i_4 * 0x10 + ((temp15_1 + (temp14_1 & 7)) >> 3) + 0xc))
                    << (((temp17_1 + rdx_134) & 7) - rdx_134);
                var_e8_7 = rax_224;
            }
            else
            {
                char temp18_1;
                char temp19_1;
                temp18_1 = HIGHD(rax_176 - 1);
                temp19_1 = LOWD(rax_176 - 1);
                char rdx_124 = temp18_1 & 7;
                int32_t var_c8_1 = 0x80;
                int32_t temp20_1;
                int32_t temp21_1;
                temp20_1 = HIGHD(rax_176 - 1);
                temp21_1 = LOWD(rax_176 - 1);
                char temp22_1;
                char temp23_1;
                temp22_1 = HIGHD(rax_176 - 1);
                temp23_1 = LOWD(rax_176 - 1);
                char rdx_128 = temp22_1 & 7;
                char rax_200 = (0x80 >> (((temp19_1 + rdx_124) & 7) - rdx_124)
                    & *(arg2 + i_4 * 0x10 + ((temp21_1 + (temp20_1 & 7)) >> 3) + 8))
                    << (((temp23_1 + rdx_128) & 7) - rdx_128);
                var_e8_7 = rax_200;
            }
            
            int32_t temp24_1;
            int32_t temp25_1;
            temp24_1 = HIGHD(j_1);
            temp25_1 = LOWD(j_1);
            char temp26_1;
            char temp27_1;
            temp26_1 = HIGHD(j_1);
            temp27_1 = LOWD(j_1);
            char rdx_138 = temp26_1 & 7;
            int32_t temp28_1;
            int32_t temp29_1;
            temp28_1 = HIGHD(j_1);
            temp29_1 = LOWD(j_1);
            (arg2 + i_4 * 0x10)[(temp29_1 + (temp28_1 & 7)) >> 3] =
                (arg2 + i_4 * 0x10)[(temp25_1 + (temp24_1 & 7)) >> 3]
                | var_e8_7 >> (((temp27_1 + rdx_138) & 7) - rdx_138);
        }
        
        result = i_4 + 1;
    }
    
    return result;
}

int64_t* sub_140002490(uint8_t* arg1, uint32_t arg2)
{
    int64_t* result = sub_140001150(0x10);
    uint64_t var_20 = 0;
    uint64_t hHash = 0;
    int32_t phHash = 0xf0000000;
    CryptAcquireContextA(&var_20, nullptr, nullptr, 1, 0xf0000000);
    phHash = &hHash;
    CryptCreateHash(var_20, 0x8003, 0, 0, phHash);
    CryptHashData(hHash, arg1, arg2, 0);
    CryptGetHashParam(hHash, 2, *result, &result[1], 0);
    CryptReleaseContext(var_20, 0);
    CryptDestroyHash(hHash);
    return result;
}

int64_t sub_140002570(char* arg1, char* arg2, void* arg3, int32_t arg4)
{
    char var_78[0x8];
    __builtin_memset(&var_78, 0, 8);
    int32_t result = 0;
    __builtin_memset(arg2, 0, 8);
    char var_a6;
    
    for (int32_t i = 0; i < 0x40; i = result)
    {
        int32_t rax_2 = data_1400400e0[i];
        char temp0_1;
        char temp1_1;
        temp0_1 = HIGHD(rax_2 - 1);
        temp1_1 = LOWD(rax_2 - 1);
        char rdx_1 = temp0_1 & 7;
        int32_t var_70_1 = 0x80;
        var_a6 = 0x80 >> (((temp1_1 + rdx_1) & 7) - rdx_1);
        int32_t temp2_1;
        int32_t temp3_1;
        temp2_1 = HIGHD(rax_2 - 1);
        temp3_1 = LOWD(rax_2 - 1);
        var_a6 &= arg1[(temp3_1 + (temp2_1 & 7)) >> 3];
        char temp4_1;
        char temp5_1;
        temp4_1 = HIGHD(rax_2 - 1);
        temp5_1 = LOWD(rax_2 - 1);
        char rdx_5 = temp4_1 & 7;
        var_a6 <<= ((temp5_1 + rdx_5) & 7) - rdx_5;
        int32_t temp6_1;
        int32_t temp7_1;
        temp6_1 = HIGHD(i);
        temp7_1 = LOWD(i);
        char temp8_1;
        char temp9_1;
        temp8_1 = HIGHD(i);
        temp9_1 = LOWD(i);
        char rdx_9 = temp8_1 & 7;
        int32_t temp10_1;
        int32_t temp11_1;
        temp10_1 = HIGHD(i);
        temp11_1 = LOWD(i);
        var_78[(temp11_1 + (temp10_1 & 7)) >> 3] =
            var_78[(temp7_1 + (temp6_1 & 7)) >> 3] | var_a6 >> (((temp9_1 + rdx_9) & 7) - rdx_9);
        result = i + 1;
    }
    
    int32_t var_88;
    char var_84[0x4];
    
    for (int32_t i_1 = 0; i_1 < 4; i_1 = result)
    {
        var_84[i_1] = var_78[i_1];
        *(&var_88 + i_1) = var_78[i_1 + 4];
        result = i_1 + 1;
    }
    
    for (int32_t i_2 = 1; i_2 <= 0x10; i_2 = result)
    {
        int32_t var_4c = var_88;
        char var_a0;
        __builtin_memset(&var_a0, 0, 6);
        
        for (int32_t j = 0; j < 0x30; j += 1)
        {
            int32_t rax_55 = *(&data_1400402f0 + (j << 2));
            char temp24_1;
            char temp25_1;
            temp24_1 = HIGHD(rax_55 - 1);
            temp25_1 = LOWD(rax_55 - 1);
            char rdx_13 = temp24_1 & 7;
            int32_t var_64_1 = 0x80;
            var_a6 = 0x80 >> (((temp25_1 + rdx_13) & 7) - rdx_13);
            int32_t temp26_1;
            int32_t temp27_1;
            temp26_1 = HIGHD(rax_55 - 1);
            temp27_1 = LOWD(rax_55 - 1);
            var_a6 &= *(&var_88 + ((temp27_1 + (temp26_1 & 7)) >> 3));
            char temp28_1;
            char temp29_1;
            temp28_1 = HIGHD(rax_55 - 1);
            temp29_1 = LOWD(rax_55 - 1);
            char rdx_17 = temp28_1 & 7;
            var_a6 <<= ((temp29_1 + rdx_17) & 7) - rdx_17;
            int32_t temp30_1;
            int32_t temp31_1;
            temp30_1 = HIGHD(j);
            temp31_1 = LOWD(j);
            char temp32_1;
            char temp33_1;
            temp32_1 = HIGHD(j);
            temp33_1 = LOWD(j);
            char rdx_21 = temp32_1 & 7;
            int32_t temp34_1;
            int32_t temp35_1;
            temp34_1 = HIGHD(j);
            temp35_1 = LOWD(j);
            (&var_a0)[(temp35_1 + (temp34_1 & 7)) >> 3] =
                (&var_a0)[(temp31_1 + (temp30_1 & 7)) >> 3]
                | var_a6 >> (((temp33_1 + rdx_21) & 7) - rdx_21);
        }
        
        int32_t i_5;
        
        i_5 = arg4 ? i_2 : 0x11 - i_2;
        
        for (int32_t j_1 = 0; j_1 < 6; j_1 += 1)
            (&var_a0)[j_1] ^= (arg3 + i_5 * 0x10)[j_1];
        
        char var_98;
        
        for (int32_t j_2 = 0; j_2 < 4; j_2 += 1)
            (&var_98)[j_2] = 0;
        
        char var_a8_1 = 0;
        char var_a7_1 = 0;
        uint32_t rcx_36 = *(&data_1400403b0
            + ((((var_a0 & 0x80) >> 6 | (var_a0 & 4) >> 2) * 0x10 + ((var_a0 & 0x78) >> 3)) << 2));
        var_98 |= rcx_36 << 4;
        char var_a8_4 = 0;
        char var_a7_3 = 0;
        char var_9f;
        int32_t rcx_46 = ((var_a0 & 2) | (var_9f & 0x10) >> 4) * 0x10
            + ((var_a0 & 1) << 3 | (var_9f & 0xe0) >> 5);
        var_98 |= *(&data_1400404b0 + (rcx_46 << 2));
        char var_a8_7 = 0;
        char var_a7_6 = 0;
        char var_9e;
        int32_t rcx_57 = ((var_9f & 8) >> 2 | (var_9e & 0x40) >> 6) * 0x10
            + ((var_9f & 7) << 1 | (var_9e & 0x80) >> 7);
        char var_a8_10 = 0;
        char var_a7_9 = 0;
        char var_97 = var_97 | *(&data_1400405b0 + (rcx_57 << 2)) << 4 | *(&data_1400406b0
            + ((((var_9e & 0x20) >> 4 | (var_9e & 1)) * 0x10 + ((var_9e & 0x1e) >> 1)) << 2));
        char var_a8_13 = 0;
        char var_a7_11 = 0;
        char var_9d;
        uint32_t rcx_78 = *(&data_1400407b0
            + ((((var_9d & 0x80) >> 6 | (var_9d & 4) >> 2) * 0x10 + ((var_9d & 0x78) >> 3)) << 2));
        char var_a8_16 = 0;
        char var_a7_13 = 0;
        char var_9c;
        int32_t rcx_88 = ((var_9d & 2) | (var_9c & 0x10) >> 4) * 0x10
            + ((var_9d & 1) << 3 | (var_9c & 0xe0) >> 5);
        char var_96 = var_96 | rcx_78 << 4 | *(&data_1400408b0 + (rcx_88 << 2));
        char var_a8_19 = 0;
        char var_a7_16 = 0;
        char var_9b;
        int32_t rcx_99 = ((var_9c & 8) >> 2 | (var_9b & 0x40) >> 6) * 0x10
            + ((var_9c & 7) << 1 | (var_9b & 0x80) >> 7);
        char var_a8_22 = 0;
        char var_a7_19 = 0;
        char var_95 = var_95 | *(&data_1400409b0 + (rcx_99 << 2)) << 4 | *(&data_140040ab0
            + ((((var_9b & 0x20) >> 4 | (var_9b & 1)) * 0x10 + ((var_9b & 0x1e) >> 1)) << 2));
        char var_8c[0x4];
        
        for (int32_t j_3 = 0; j_3 < 4; j_3 += 1)
            var_8c[j_3] = 0;
        
        for (int32_t j_4 = 0; j_4 < 0x20; j_4 += 1)
        {
            int32_t rax_236 = *(&data_140040bb0 + (j_4 << 2));
            char temp36_1;
            char temp37_1;
            temp36_1 = HIGHD(rax_236 - 1);
            temp37_1 = LOWD(rax_236 - 1);
            char rdx_36 = temp36_1 & 7;
            int32_t var_58_1 = 0x80;
            var_a6 = 0x80 >> (((temp37_1 + rdx_36) & 7) - rdx_36);
            int32_t temp38_1;
            int32_t temp39_1;
            temp38_1 = HIGHD(rax_236 - 1);
            temp39_1 = LOWD(rax_236 - 1);
            var_a6 &= (&var_98)[(temp39_1 + (temp38_1 & 7)) >> 3];
            char temp40_1;
            char temp41_1;
            temp40_1 = HIGHD(rax_236 - 1);
            temp41_1 = LOWD(rax_236 - 1);
            char rdx_40 = temp40_1 & 7;
            var_a6 <<= ((temp41_1 + rdx_40) & 7) - rdx_40;
            int32_t temp42_1;
            int32_t temp43_1;
            temp42_1 = HIGHD(j_4);
            temp43_1 = LOWD(j_4);
            char temp44_1;
            char temp45_1;
            temp44_1 = HIGHD(j_4);
            temp45_1 = LOWD(j_4);
            char rdx_44 = temp44_1 & 7;
            int32_t temp46_1;
            int32_t temp47_1;
            temp46_1 = HIGHD(j_4);
            temp47_1 = LOWD(j_4);
            var_8c[(temp47_1 + (temp46_1 & 7)) >> 3] = var_8c[(temp43_1 + (temp42_1 & 7)) >> 3]
                | var_a6 >> (((temp45_1 + rdx_44) & 7) - rdx_44);
        }
        
        for (int32_t j_5 = 0; j_5 < 4; j_5 += 1)
            var_8c[j_5] ^= var_84[j_5];
        
        for (int32_t j_6 = 0; j_6 < 4; j_6 += 1)
        {
            var_84[j_6] = *(&var_4c + j_6);
            *(&var_88 + j_6) = var_8c[j_6];
        }
        
        result = i_2 + 1;
    }
    
    char var_38[0x8];
    
    for (int32_t i_3 = 0; i_3 < 4; i_3 = result)
    {
        var_38[i_3] = *(&var_88 + i_3);
        var_38[i_3 + 4] = var_84[i_3];
        result = i_3 + 1;
    }
    
    for (int32_t i_4 = 0; i_4 < 0x40; i_4 = result)
    {
        int32_t rax_295 = *(&data_140040c30 + (i_4 << 2));
        char temp12_1;
        char temp13_1;
        temp12_1 = HIGHD(rax_295 - 1);
        temp13_1 = LOWD(rax_295 - 1);
        char rdx_48 = temp12_1 & 7;
        int32_t var_48_1 = 0x80;
        var_a6 = 0x80 >> (((temp13_1 + rdx_48) & 7) - rdx_48);
        int32_t temp14_1;
        int32_t temp15_1;
        temp14_1 = HIGHD(rax_295 - 1);
        temp15_1 = LOWD(rax_295 - 1);
        var_a6 &= var_38[(temp15_1 + (temp14_1 & 7)) >> 3];
        char temp16_1;
        char temp17_1;
        temp16_1 = HIGHD(rax_295 - 1);
        temp17_1 = LOWD(rax_295 - 1);
        char rdx_52 = temp16_1 & 7;
        var_a6 <<= ((temp17_1 + rdx_52) & 7) - rdx_52;
        int32_t temp18_1;
        int32_t temp19_1;
        temp18_1 = HIGHD(i_4);
        temp19_1 = LOWD(i_4);
        char temp20_1;
        char temp21_1;
        temp20_1 = HIGHD(i_4);
        temp21_1 = LOWD(i_4);
        char rdx_56 = temp20_1 & 7;
        int32_t temp22_1;
        int32_t temp23_1;
        temp22_1 = HIGHD(i_4);
        temp23_1 = LOWD(i_4);
        arg2[(temp23_1 + (temp22_1 & 7)) >> 3] =
            arg2[(temp19_1 + (temp18_1 & 7)) >> 3] | var_a6 >> (((temp21_1 + rdx_56) & 7) - rdx_56);
        result = i_4 + 1;
    }
    
    return result;
}

void* sub_140003180(void* arg1)
{
    char rdx;
    char arg_10 = rdx;
    sub_140003b60(arg1);
    return arg1;
}

void* public: __cdecl std::_Compressed_pair<class std::allocator<char>, class std::_String_val<struct std::_Simple_types<char>>, 1>::_Compressed_pair<class std::allocator<char>, class std::_String_val<struct std::_Simple_types<char>>, 1><class std::allocator<char>>(struct std::_One_then_variadic_args_t, class std::allocator<char> &&)(void* arg1, char arg2, int64_t arg3)
{
    char arg_10 = arg2;
    sub_140003b60(arg1);
    return arg1;
}

int64_t* sub_1400031f0(int64_t* arg1, char* arg2)
{
    int64_t var_10 = -2;
    int32_t var_88 = 0;
    int64_t rax = sub_140005920(arg2);
    int64_t rax_5 = sub_140005e30(arg1 + *(*arg1 + 4));
    int64_t rax_10;
    
    if (rax_5 > 0)
        rax_10 = sub_140005e30(arg1 + *(*arg1 + 4));
    
    int64_t i_1;
    
    if (rax_5 <= 0 || rax_10 <= rax)
        i_1 = 0;
    else
        i_1 = sub_140005e30(arg1 + *(*arg1 + 4)) - rax;
    
    int64_t i = i_1;
    void var_20;
    sub_140004200(&var_20, arg1);
    
    if (sub_1400046d0(&var_20))
    {
        if ((sub_1400057f0(arg1 + *(*arg1 + 4)) & 0x1c0) != 0x40)
        {
            for (; i > 0; i -= 1)
            {
                char rax_33 = sub_140005750(arg1 + *(*arg1 + 4));
                int32_t var_68 = sub_140005cc0(sub_140005c30(arg1 + *(*arg1 + 4)), rax_33);
                int32_t var_64 = 0xffffffff;
                
                if (sub_140005670(&var_64, &var_68))
                {
                    var_88 = 4;
                    break;
                }
            }
        }
        
        if (!var_88 && sub_140005d40(sub_140005c30(arg1 + *(*arg1 + 4)), arg2, rax) != rax)
            var_88 |= 4;
        
        if (!var_88)
        {
            for (; i > 0; i -= 1)
            {
                char rax_58 = sub_140005750(arg1 + *(*arg1 + 4));
                int32_t var_5c = sub_140005cc0(sub_140005c30(arg1 + *(*arg1 + 4)), rax_58);
                int32_t var_58 = 0xffffffff;
                
                if (sub_140005670(&var_58, &var_5c))
                {
                    var_88 |= 4;
                    break;
                }
            }
        }
        
        std::ios_base::width(arg1 + *(*arg1 + 4), 0);
    }
    else
        var_88 = 4;
    
    sub_140005c60(arg1 + *(*arg1 + 4), var_88, 0);
    sub_1400045a0(&var_20);
    return arg1;
}

void* const std::_Allocate<16,struct std::_Default_allocate_traits,0>(uint64_t arg1)
{
    if (arg1 >= 0x1000)
        return sub_1400035e0(arg1);
    
    if (!arg1)
        return nullptr;
    
    return sub_140004a20(arg1);
}

void* sub_1400035e0(int64_t arg1)
{
    uint64_t var_28 = arg1 + 0x27;
    
    if (var_28 <= arg1)
        var_28 = -1;
    
    int64_t rax_3 = sub_140004a20(var_28);
    
    if (!rax_3)
    {
        sub_14000e928();
        /* no return */
    }
    
    void* result = (rax_3 + 0x27) & 0xffffffffffffffe0;
    *(result - 8) = rax_3;
    return result;
}

int64_t sub_140003670(int64_t arg1) __pure
{
    return arg1;
}

int64_t std::_Deallocate<16,0>(int64_t arg1, int64_t arg2)
{
    int64_t arg_10 = arg2;
    int64_t arg_8 = arg1;
    int64_t var_18 = -2;
    
    if (arg_10 >= 0x1000)
        sub_140004980(&arg_8, &arg_10);
    
    return j_j_free(arg_8);
}

int64_t sub_1400036d0()
{
    if (sub_140007b68(&data_140041e68, std::_Immortalize_impl<class std::_Iostream_error_category>, 
            &data_140041e70))
        return &data_140041e70;
    
    sub_140010504();
    /* no return */
}

int64_t std::_Immortalize_impl<class std::_Iostream_error_category>(int64_t arg1, int64_t arg2)
{
    int64_t r8;
    int64_t arg_18 = r8;
    int64_t arg_8 = arg1;
    std::_Iostream_error_category::_Iostream_error_category(sub_140004600(0x10, arg2));
    return 1;
}

int64_t* sub_140003750(int64_t* arg1, int64_t* arg2)
{
    if (*arg1 >= *arg2)
        return arg1;
    
    return arg2;
}

int64_t* sub_1400037a0(int64_t* arg1, int64_t* arg2)
{
    if (*arg2 >= *arg1)
        return arg1;
    
    return arg2;
}

int64_t std::basic_string<class <lambda_66f57f934f28d61049862f64df852ff0>,char const* __ptr64,char,struct std::char_traits<char>,class std::allocator<char> >::_Reallocate_for<class <lambda_66f57f934f28d61049862f64df852ff0>,char const* __ptr64>(int64_t arg1, int64_t arg2, char arg3, int64_t arg4)
{
    char arg_18 = arg3;
    
    if (arg2 >
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::max_size(
        arg1))
    {
        sub_140005100();
        /* no return */
    }
    
    void** rax_1 = sub_140004c60(arg1);
    int64_t rax_3 = rax_1[3];
    int64_t rax_4 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Calculate_growth(
        arg1, arg2);
    int64_t rax_5 = sub_140004c60(arg1);
    void* var_30 = std::allocator<char>::allocate(rax_5, rax_4 + 1);
    rax_1[2] = arg2;
    rax_1[3] = rax_4;
    sub_140004760(&arg_18, sub_140003670(var_30), arg2, arg4);
    
    if (rax_3 < 0x10)
        sub_140003b00(rax_5, sub_140003670(rax_1), &var_30);
    else
    {
        std::allocator<char>::deallocate(rax_5, *rax_1, rax_3 + 1);
        *rax_1 = var_30;
    }
    
    return arg1;
}

int64_t std::basic_string<class <lambda_65e615be2a453ca0576c979606f46740>,char const* __ptr64,uint64_t,char,struct std::char_traits<char>,class std::allocator<char> >::_Reallocate_grow_by<class <lambda_65e615be2a453ca0576c979606f46740>,char const* __ptr64,uint64_t>(int64_t arg1, int64_t arg2, char arg3, int64_t arg4, int64_t arg5)
{
    char arg_18 = arg3;
    int64_t* rax = sub_140004c60(arg1);
    int64_t rax_2 = rax[2];
    
    if (std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::max_size(
        arg1) - rax_2 < arg2)
    {
        sub_140005100();
        /* no return */
    }
    
    int64_t rcx_3 = rax_2 + arg2;
    int64_t rax_8 = rax[3];
    int64_t rax_9 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Calculate_growth(
        arg1, rcx_3);
    int64_t rax_10 = sub_140004c60(arg1);
    void* var_48 = std::allocator<char>::allocate(rax_10, rax_9 + 1);
    rax[2] = rcx_3;
    rax[3] = rax_9;
    void* rax_16 = sub_140003670(var_48);
    
    if (rax_8 < 0x10)
    {
        sub_1400046e0(&arg_18, rax_16, rax, rax_2, arg4, arg5);
        sub_140003b00(rax_10, sub_140003670(rax), &var_48);
    }
    else
    {
        int64_t rax_18 = *rax;
        sub_1400046e0(&arg_18, rax_16, sub_140003670(rax_18), rax_2, arg4, arg5);
        std::allocator<char>::deallocate(rax_10, rax_18, rax_8 + 1);
        *rax = var_48;
    }
    
    return arg1;
}

int64_t sub_140003b00(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t arg_8 = arg1;
    int64_t* rax = sub_140004600(8, arg2);
    int64_t result = *sub_140003670(arg3);
    *rax = result;
    return result;
}

int64_t sub_140003b50() __pure
{
    int64_t rdx;
    int64_t arg_10 = rdx;
    int64_t rcx;
    int64_t arg_8 = rcx;
}

void* sub_140003b60(void* arg1)
{
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x18) = 0;
    return arg1;
}

void* sub_140003ba0(void* arg1, int64_t arg2)
{
    int64_t var_10 = -2;
    char var_17;
    public: __cdecl std::_Compressed_pair<class std::allocator<char>, class std::_String_val<struct std::_Simple_types<char>>, 1>::_Compressed_pair<class std::allocator<char>, class std::_String_val<struct std::_Simple_types<char>>, 1><class std::allocator<char>>(struct std::_One_then_variadic_args_t, class std::allocator<char> &&)(
        arg1, var_17, sub_140003670(sub_140004c60(arg2)));
    sub_140004c60(arg1);
    char var_18;
    __builtin_memset(&var_18, 0, 1);
    sub_140004f50(arg1, arg2);
    return arg1;
}

void* sub_140003c30(void* arg1, int64_t arg2)
{
    int64_t var_18 = -2;
    sub_140004c60(arg2);
    void var_27;
    char var_26;
    public: __cdecl std::_Compressed_pair<class std::allocator<char>, class std::_String_val<struct std::_Simple_types<char>>, 1>::_Compressed_pair<class std::allocator<char>, class std::_String_val<struct std::_Simple_types<char>>, 1><class std::allocator<char>>(struct std::_One_then_variadic_args_t, class std::allocator<char> &&)(
        arg1, var_26, sub_140005c50(&var_27));
    void var_25;
    void* var_20 = &var_25;
    sub_140004c60(arg1);
    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Construct_lv_contents(
        arg1, arg2);
    return arg1;
}

void* sub_140003cc0(void* arg1, char* arg2)
{
    int64_t var_18 = -2;
    sub_140003180(arg1);
    void var_26;
    void* var_20 = &var_26;
    sub_140004c60(arg1);
    std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Tidy_init(
        arg1);
    sub_1400052f0(arg1, arg2);
    return arg1;
}

int64_t sub_140003d40(int64_t arg1) __pure
{
    int64_t r8;
    int64_t arg_18 = r8;
    int64_t rdx;
    int64_t arg_10 = rdx;
    return arg1;
}

struct std::error_category::std::_Generic_error_category::VTable** std::_Generic_error_category::_Generic_error_category(struct std::error_category::std::_Generic_error_category::VTable** arg1)
{
    std::error_category::error_category(arg1);
    *arg1 = &std::_Generic_error_category::`vftable'{for `std::error_category'};
    arg1[1] = 3;
    return arg1;
}

struct std::_Generic_error_category::std::_Iostream_error_category::VTable** std::_Iostream_error_category::_Iostream_error_category(struct std::_Generic_error_category::std::_Iostream_error_category::VTable** arg1)
{
    std::_Generic_error_category::_Generic_error_category(arg1);
    *arg1 = &std::_Iostream_error_category::`vftable'{for `std::_Generic_error_category'};
    arg1[1] = 5;
    return arg1;
}

int64_t* sub_140003de0(int64_t* arg1, int64_t arg2)
{
    *arg1 = arg2;
    int64_t* rax_2 = *arg1;
    
    if (sub_140005c30(rax_2 + *(*rax_2 + 4)))
    {
        int64_t* rax_9 = *arg1;
        int64_t* rax_14 = sub_140005c30(rax_9 + *(*rax_9 + 4));
        (*(*rax_14 + 8))(rax_14);
    }
    
    return arg1;
}

struct std::exception::VTable** sub_140003e80(struct std::exception::VTable** arg1, int64_t arg2, int64_t arg3)
{
    int64_t var_78 = -2;
    void var_38;
    void* rax = sub_140003c30(&var_38, arg3);
    void var_68;
    __builtin_memcpy(&var_68, arg2, 0x10);
    void var_58;
    std::runtime_error::runtime_error(arg1, sub_140004cb0(&var_58, &var_68, rax));
    sub_140004400(&var_58);
    *arg1 = &std::_System_error::`vftable'{for `std::runtime_error'};
    __builtin_memcpy(&arg1[3], arg2, 0x10);
    return arg1;
}

struct std::runtime_error::std::_System_error::VTable** sub_140003f60(struct std::runtime_error::std::_System_error::VTable** arg1, void* arg2)
{
    sub_140004180(arg1, arg2);
    *arg1 = &std::_System_error::`vftable'{for `std::runtime_error'};
    __builtin_memcpy(&arg1[3], arg2 + 0x18, 0x10);
    return arg1;
}

void* std::error_category::error_category(void* arg1)
{
    *(arg1 + 8) = arg1;
    return arg1;
}

int32_t* sub_140003fe0(int32_t* arg1, int32_t arg2, int64_t arg3)
{
    *arg1 = arg2;
    *(arg1 + 8) = arg3;
    return arg1;
}

struct std::exception::VTable** std::exception::exception(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    __builtin_memset(&arg1[1], 0, 0x10);
    __std_exception_copy(arg2 + 8, &arg1[1]);
    return arg1;
}

struct std::exception::VTable** std::exception::exception(struct std::exception::VTable** arg1, int64_t arg2)
{
    *arg1 = &std::exception::`vftable';
    __builtin_memset(&arg1[1], 0, 0x10);
    int64_t var_18 = arg2;
    char var_10 = 1;
    __std_exception_copy(&var_18, &arg1[1]);
    return arg1;
}

struct std::system_error::std::ios_base::failure::VTable** sub_1400040e0(struct std::system_error::std::ios_base::failure::VTable** arg1, void* arg2)
{
    std::system_error::system_error(arg1, arg2);
    *arg1 = &std::ios_base::failure::`vftable'{for `std::system_error'};
    return arg1;
}

struct std::exception::VTable** std::ios_base::failure::failure(struct std::exception::VTable** arg1, char* arg2, int64_t arg3)
{
    void var_28;
    __builtin_memcpy(&var_28, arg3, 0x10);
    sub_140004330(arg1, &var_28, arg2);
    *arg1 = &std::ios_base::failure::`vftable'{for `std::system_error'};
    return arg1;
}

struct std::exception::std::runtime_error::VTable** sub_140004180(struct std::exception::std::runtime_error::VTable** arg1, void* arg2)
{
    std::exception::exception(arg1, arg2);
    *arg1 = &std::runtime_error::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::VTable** std::runtime_error::runtime_error(struct std::exception::VTable** arg1, int64_t arg2)
{
    std::exception::exception(arg1, sub_140005410(arg2));
    *arg1 = &std::runtime_error::`vftable'{for `std::exception'};
    return arg1;
}

int64_t* sub_140004200(int64_t* arg1, int64_t* arg2)
{
    int64_t var_18 = -2;
    sub_140003de0(arg1, arg2);
    
    if (sub_1400058c0(arg2 + *(*arg2 + 4)) && sub_140005d80(arg2 + *(*arg2 + 4))
            && sub_140005d80(arg2 + *(*arg2 + 4)) != arg2)
        sub_140005800(sub_140005d80(arg2 + *(*arg2 + 4)));
    
    arg1[1] = sub_1400058c0(arg2 + *(*arg2 + 4));
    return arg1;
}

struct std::_System_error::std::system_error::VTable** std::system_error::system_error(struct std::_System_error::std::system_error::VTable** arg1, void* arg2)
{
    sub_140003f60(arg1, arg2);
    *arg1 = &std::system_error::`vftable'{for `std::_System_error'};
    return arg1;
}

struct std::exception::VTable** sub_140004330(struct std::exception::VTable** arg1, int64_t arg2, char* arg3)
{
    int64_t var_58 = -2;
    void var_38;
    sub_140003cc0(&var_38, arg3);
    void var_48;
    __builtin_memcpy(&var_48, arg2, 0x10);
    sub_140003e80(arg1, &var_48, &var_38);
    sub_140004400(&var_38);
    *arg1 = &std::system_error::`vftable'{for `std::_System_error'};
    return arg1;
}

int64_t sub_1400043c0(int64_t arg1)
{
    return sub_1400043e0(arg1);
}

int64_t sub_1400043e0(int64_t arg1)
{
    return arg1;
}

int64_t sub_140004400(int64_t arg1)
{
    sub_140004fc0(arg1);
    return sub_1400043c0(arg1);
}

int64_t sub_140004430() __pure
{
    int64_t rcx;
    int64_t arg_8 = rcx;
}

int64_t sub_140004440()
{
    return;
}

int64_t sub_140004460()
{
    sub_140004440();
}

int64_t sub_140004480(int64_t* arg1)
{
    int64_t var_10 = -2;
    int64_t* rax_1 = *arg1;
    int64_t result = sub_140005c30(rax_1 + *(*rax_1 + 4));
    
    if (!result)
        return result;
    
    int64_t* rax_7 = *arg1;
    int64_t* rax_12 = sub_140005c30(rax_7 + *(*rax_7 + 4));
    return (*(*rax_12 + 0x10))(rax_12);
}

int64_t sub_140004510(struct std::exception::VTable** arg1)
{
    return sub_140004580(arg1);
}

int64_t std::exception::~exception(struct std::exception::VTable** arg1)
{
    *arg1 = &std::exception::`vftable';
    return __std_exception_destroy(&arg1[1]);
}

int64_t sub_140004560(struct std::exception::VTable** arg1)
{
    return sub_1400045e0(arg1);
}

int64_t sub_140004580(struct std::exception::VTable** arg1)
{
    return std::exception::~exception(arg1);
}

int64_t sub_1400045a0(int64_t* arg1)
{
    int64_t var_18 = -2;
    
    if (!j___uncaught_exception())
        sub_140004dd0(*arg1);
    
    return sub_140004480(arg1);
}

int64_t sub_1400045e0(struct std::exception::VTable** arg1)
{
    return sub_140004510(arg1);
}

int64_t sub_140004600(int64_t arg1, int64_t arg2) __pure
{
    int64_t arg_8 = arg1;
    return arg2;
}

uint64_t std::error_category::operator==(void* arg1, void* arg2)
{
    char var_18;
    
    if (*(arg1 + 8) != *(arg2 + 8))
        var_18 = 0;
    else
        var_18 = 1;
    
    return var_18;
}

uint64_t sub_140004650(int32_t* arg1, int32_t* arg2)
{
    void* rax = sub_140005440(arg2);
    uint32_t rax_3 = std::error_category::operator==(sub_140005440(arg1), rax);
    int32_t rax_4;
    int32_t rax_5;
    
    if (rax_3)
    {
        rax_4 = sub_140005da0(arg1);
        rax_5 = sub_140005da0(arg2);
    }
    
    char var_18;
    
    var_18 = !rax_3 || rax_4 != rax_5 ? 0 : 1;
    
    return var_18;
}

uint64_t sub_1400046d0(void* arg1)
{
    return *(arg1 + 8);
}

char* sub_1400046e0(int64_t arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6)
{
    int64_t arg_8 = arg1;
    sub_140005590(arg2, arg3, arg4);
    sub_140005590(arg2 + arg4, arg5, arg6);
    char var_18 = 0;
    return sub_1400053f0(arg2 + arg4 + arg6, &var_18);
}

char* sub_140004760(int64_t arg1, void* arg2, int64_t arg3, int64_t arg4)
{
    int64_t arg_8 = arg1;
    sub_140005590(arg2, arg4, arg3);
    char var_18 = 0;
    return sub_1400053f0(arg2 + arg3, &var_18);
}

int64_t sub_1400047c0(int64_t arg1, int32_t arg2)
{
    sub_140004440();
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

int64_t sub_140004800(int64_t arg1, int32_t arg2)
{
    sub_140004460();
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::exception::VTable** sub_140004840(struct std::exception::VTable** arg1, int32_t arg2)
{
    sub_140004510(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::exception::VTable** std::exception::`scalar deleting destructor'(struct std::exception::VTable** arg1, int32_t arg2)
{
    std::exception::~exception(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::exception::VTable** sub_1400048c0(struct std::exception::VTable** arg1, int32_t arg2)
{
    sub_140004560(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::exception::VTable** sub_140004900(struct std::exception::VTable** arg1, int32_t arg2)
{
    sub_140004580(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::exception::VTable** sub_140004940(struct std::exception::VTable** arg1, int32_t arg2)
{
    sub_1400045e0(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

int64_t* sub_140004980(int64_t* arg1, int64_t* arg2)
{
    *arg2 += 0x27;
    int64_t rax_5 = *(*arg1 - 8);
    int64_t var_10 = 8;
    int64_t rax_8 = *arg1 - rax_5;
    
    if (rax_8 >= 8 && rax_8 <= 0x27)
    {
        *arg1 = rax_5;
        return arg1;
    }
    
    sub_14000e928();
    /* no return */
}

int64_t sub_140004a20(uint64_t arg1)
{
    return sub_14000a804(arg1);
}

int64_t std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Calculate_growth(int64_t arg1, int64_t arg2)
{
    int64_t result =
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::max_size(
        arg1);
    void* rax = sub_140004c60(arg1);
    int64_t var_28 = arg2 | 0xf;
    
    if (var_28 > result)
        return result;
    
    int64_t rax_6 = *(rax + 0x18);
    
    if (rax_6 > result - COMBINE(0, rax_6) / 2)
        return result;
    
    int64_t var_18[0x3];
    var_18[0] = rax_6 + COMBINE(0, rax_6) / 2;
    return *sub_140003750(&var_28, &var_18);
}

void* std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Construct_lv_contents(int64_t arg1, int64_t arg2)
{
    void* result_1 = sub_140004c60(arg1);
    int64_t* rax = sub_140004c60(arg2);
    int64_t rax_2 = rax[2];
    int64_t* rax_3 = sub_140004d70(rax);
    void* result;
    
    if (rax_2 >= 0x10)
    {
        int64_t rax_6 = sub_140004c60(arg1);
        int64_t var_20 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::max_size(
            arg1);
        int64_t var_18 = rax_2 | 0xf;
        int64_t rax_11 = *sub_1400037a0(&var_18, &var_20);
        void* var_38 = std::allocator<char>::allocate(rax_6, rax_11 + 1);
        sub_140003b00(rax_6, sub_140003670(result_1), &var_38);
        sub_140005590(sub_140003670(var_38), rax_3, rax_2 + 1);
        *(result_1 + 0x10) = rax_2;
        result = result_1;
        *(result + 0x18) = rax_11;
    }
    else
    {
        sub_140005590(result_1, rax_3, 0x10);
        *(result_1 + 0x10) = rax_2;
        result = result_1;
        *(result + 0x18) = 0xf;
    }
    
    return result;
}

int64_t sub_140004c60(int64_t arg1)
{
    return sub_140003670(arg1);
}

uint64_t std::_String_val<struct std::_Simple_types<char> >::_Large_string_engaged(void* arg1)
{
    char var_18;
    
    if (*(arg1 + 0x18) < 0x10)
        var_18 = 0;
    else
        var_18 = 1;
    
    return var_18;
}

void* sub_140004cb0(void* arg1, int32_t* arg2, int64_t arg3)
{
    int64_t var_30 = -2;
    int32_t var_48 = 0;
    
    if (!sub_140005620(arg3))
        sub_1400051a0(arg3, ": ");
    
    void var_28;
    sub_140005150(arg3, sub_140005b50(arg2, &var_28));
    sub_140004400(&var_28);
    sub_140003ba0(arg1, arg3);
    int32_t var_48_1 = 1;
    sub_140004400(arg3);
    return arg1;
}

int64_t* sub_140004d70(int64_t* arg1)
{
    if (!std::_String_val<struct std::_Simple_types<char> >::_Large_string_engaged(arg1))
        return arg1;
    
    return sub_140003670(*arg1);
}

int64_t sub_140004db0(int64_t arg1)
{
    return sub_140004c60(arg1);
}

uint32_t sub_140004dd0(int64_t* arg1)
{
    int64_t var_10 = -2;
    uint32_t result = sub_1400058c0(arg1 + *(*arg1 + 4));
    
    if (result)
    {
        result = sub_1400057f0(arg1 + *(*arg1 + 4)) & 2;
        
        if (result)
        {
            result = sub_140005c10(sub_140005c30(arg1 + *(*arg1 + 4)));
            
            if (result == 0xffffffff)
                return sub_140005c60(arg1 + *(*arg1 + 4), 4, 0);
        }
    }
    
    return result;
}

int64_t sub_140004eb0(void* arg1)
{
    int32_t var_18;
    
    if (!**(arg1 + 0x40))
        var_18 = 0;
    else
        var_18 = **(arg1 + 0x58);
    
    return var_18;
}

int64_t std::basic_streambuf<char,struct std::char_traits<char> >::_Pninc(void* arg1)
{
    **(arg1 + 0x58) -= 1;
    int64_t result = **(arg1 + 0x40);
    **(arg1 + 0x40) += 1;
    return result;
}

char* sub_140004f50(int64_t arg1, int64_t arg2)
{
    char r8;
    char arg_18 = r8;
    int64_t rax = sub_140004c60(arg2);
    __builtin_memcpy(sub_140003670(sub_140004c60(arg1)), sub_140003670(rax), 0x20);
    return std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Tidy_init(
        arg2);
}

char* sub_140004fc0(int64_t arg1)
{
    int64_t var_18 = -2;
    sub_140004db0(arg1);
    int64_t* rax = sub_140004c60(arg1);
    
    if (std::_String_val<struct std::_Simple_types<char> >::_Large_string_engaged(rax))
        std::allocator<char>::deallocate(sub_140004c60(arg1), *rax, rax[3] + 1);
    
    rax[2] = 0;
    rax[3] = 0xf;
    char var_38 = 0;
    return sub_1400053f0(rax, &var_38);
}

char* std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::_Tidy_init(int64_t arg1)
{
    void* rax = sub_140004c60(arg1);
    *(rax + 0x10) = 0;
    *(rax + 0x18) = 0xf;
    char var_18 = 0;
    return sub_1400053f0(rax, &var_18);
}

void sub_140005100() __noreturn
{
    sub_140007b20("string too long");
    /* no return */
}

int64_t sub_140005110() __pure
{
    return;
}

void* std::allocator<char>::allocate(int64_t arg1, int64_t arg2)
{
    int64_t arg_8 = arg1;
    return std::_Allocate<16,struct std::_Default_allocate_traits,0>(sub_140003670(arg2));
}

int64_t sub_140005150(int64_t arg1, int64_t arg2)
{
    int64_t* rax = sub_140004c60(arg2);
    return 
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::append(
        arg1, sub_140004d70(rax), rax[2]);
}

int64_t sub_1400051a0(int64_t arg1, char* arg2)
{
    return 
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::append(
        arg1, arg2, sub_140003670(sub_140005920(arg2)));
}

int64_t std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::append(int64_t arg1, int128_t* arg2, void* arg3)
{
    int64_t* rax = sub_140004c60(arg1);
    void* rax_2 = rax[2];
    
    if (arg3 > rax[3] - rax_2)
    {
        char var_27;
        __builtin_memset(&var_27, 0, 1);
        return std::basic_string<class <lambda_65e615be2a453ca0576c979606f46740>,char const* __ptr64,uint64_t,char,struct std::char_traits<char>,class std::allocator<char> >::_Reallocate_grow_by<class <lambda_65e615be2a453ca0576c979606f46740>,char const* __ptr64,uint64_t>(
            arg1, arg3, var_27, arg2, arg3);
    }
    
    rax[2] = rax_2 + arg3;
    int64_t* rax_8 = sub_140004d70(rax);
    sub_140005bc0(rax_8 + rax_2, arg2, arg3);
    char var_28 = 0;
    sub_1400053f0(rax_8 + rax_2 + arg3, &var_28);
    return arg1;
}

int64_t sub_1400052f0(int64_t arg1, char* arg2)
{
    return 
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::assign(
        arg1, arg2, sub_140003670(sub_140005920(arg2)));
}

int64_t std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::assign(int64_t arg1, int128_t* arg2, void* arg3)
{
    int64_t* rax = sub_140004c60(arg1);
    
    if (arg3 > rax[3])
    {
        char var_27;
        __builtin_memset(&var_27, 0, 1);
        return std::basic_string<class <lambda_66f57f934f28d61049862f64df852ff0>,char const* __ptr64,char,struct std::char_traits<char>,class std::allocator<char> >::_Reallocate_for<class <lambda_66f57f934f28d61049862f64df852ff0>,char const* __ptr64>(
            arg1, arg3, var_27, arg2);
    }
    
    int64_t* rax_3 = sub_140004d70(rax);
    rax[2] = arg3;
    sub_140005bc0(rax_3, arg2, arg3);
    char var_28 = 0;
    sub_1400053f0(rax_3 + arg3, &var_28);
    return arg1;
}

char* sub_1400053f0(char* arg1, char* arg2)
{
    *arg1 = *arg2;
    return arg1;
}

int64_t* sub_140005410(int64_t arg1)
{
    int64_t var_18 = -2;
    return sub_140004d70(sub_140004c60(arg1));
}

int64_t sub_140005440(void* arg1)
{
    return *(arg1 + 8);
}

int64_t sub_140005450(void* arg1, int32_t arg2, char arg3)
{
    int32_t var_18;
    
    if (*(arg1 + 0x48))
        var_18 = arg2;
    else
        var_18 = arg2 | 4;
    
    return std::ios_base::clear(arg1, var_18, arg3);
}

int64_t std::ios_base::clear(void* arg1, int32_t arg2, char arg3)
{
    int32_t rax_1 = arg2 & 0x17;
    *(arg1 + 0x10) = rax_1;
    int32_t result = rax_1 & *(arg1 + 0x14);
    
    if (!result)
        return result;
    
    if (arg3)
    {
        sub_14000b810(nullptr, nullptr);
        /* no return */
    }
    
    char const* const var_50;
    
    if (result & 4)
        var_50 = "ios_base::badbit set";
    else if (!(result & 2))
        var_50 = "ios_base::eofbit set";
    else
        var_50 = "ios_base::failbit set";
    
    void var_48;
    void var_38;
    std::ios_base::failure::failure(&var_38, var_50, std::make_error_code(&var_48, 1));
    sub_14000b810(&var_38, &data_14003e190);
    /* no return */
}

int64_t sub_140005590(int64_t arg1, int64_t arg2, int64_t arg3)
{
    __builtin_memcpy(arg1, arg2, arg3);
    return arg1;
}

int64_t std::allocator<char>::deallocate(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t arg_8 = arg1;
    return std::_Deallocate<16,0>(arg2, arg3);
}

int32_t* std::error_category::default_error_condition(int64_t arg1, int32_t* arg2, int32_t arg3)
{
    sub_140003fe0(arg2, arg3, arg1);
    return arg2;
}

uint64_t sub_140005620(int64_t arg1)
{
    char var_18;
    
    if (sub_140005ca0(arg1))
        var_18 = 0;
    else
        var_18 = 1;
    
    return var_18;
}

int64_t sub_140005660() __pure
{
    return 0xffffffff;
}

uint64_t sub_140005670(int32_t* arg1, int32_t* arg2)
{
    char var_18;
    
    if (*arg1 != *arg2)
        var_18 = 0;
    else
        var_18 = 1;
    
    return var_18;
}

uint64_t std::error_category::equivalent(void* arg1, int32_t* arg2, int32_t arg3)
{
    uint32_t rax_2 = std::error_category::operator==(arg1, sub_140005440(arg2));
    int32_t rax_3;
    
    if (rax_2)
        rax_3 = sub_140005da0(arg2);
    
    char var_18;
    
    var_18 = !rax_2 || rax_3 != arg3 ? 0 : 1;
    
    return var_18;
}

uint64_t sub_140005710(int64_t* arg1, int32_t arg2, int32_t* arg3)
{
    void var_18;
    return sub_140004650((*(*arg1 + 0x18))(arg1, &var_18, arg2), arg3);
}

uint64_t sub_140005750(void* arg1)
{
    return *(arg1 + 0x58);
}

int64_t sub_140005760(int32_t arg1)
{
    int64_t* rax_4 = sub_140002490(&(&data_140041eb8)[arg1 - 1], 8);
    int64_t* rax_8 = sub_140001240(rax_4, (&data_140040d30)[arg1 - 1], 0x28);
    printf("Your flag is at 0x%016IX\n", *rax_8);
    sub_1400011e0(rax_8);
    return sub_1400011e0(rax_4);
}

uint64_t sub_1400057f0(void* arg1)
{
    return *(arg1 + 0x18);
}

int64_t* sub_140005800(int64_t* arg1)
{
    int64_t var_28 = -2;
    
    if (sub_140005c30(arg1 + *(*arg1 + 4)))
    {
        void var_20;
        sub_140004200(&var_20, arg1);
        
        if (sub_1400046d0(&var_20)
                && sub_140005c10(sub_140005c30(arg1 + *(*arg1 + 4))) == 0xffffffff)
            sub_140005c60(arg1 + *(*arg1 + 4), 4, 0);
        
        sub_1400045a0(&var_20);
    }
    
    return arg1;
}

uint64_t sub_1400058c0(void* arg1)
{
    char var_18;
    
    if (sub_140005c40(arg1))
        var_18 = 0;
    else
        var_18 = 1;
    
    return var_18;
}

int64_t sub_140005900()
{
    int64_t var_18 = -2;
    sub_1400036d0();
    return &data_140041e70;
}

int64_t sub_140005920(char* arg1)
{
    int64_t result = -1;
    
    do
        result += 1;
     while (arg1[result]);
    
    return result;
}

int64_t sub_140005960()
{
    data_140041eb8 = 0x34125632ab3f8522;
    sub_1400031f0(&data_140041f00, "[*] Level 1... ");
    
    if (!IsDebuggerPresent())
        return sub_140005760(1);
    
    OutputDebugStringA("I see you, hacker!\n");
    exit(0x7001a7e);
    /* no return */
}

int32_t* std::make_error_code(int32_t* arg1, int32_t arg2)
{
    sub_140005900();
    sub_140003fe0(arg1, arg2, &data_140041e70);
    return arg1;
}

int64_t sub_140005a00() __pure
{
    return 0x7fffffffffffffff;
}

int64_t sub_140005a10() __pure
{
    int64_t rcx;
    int64_t arg_8 = rcx;
    return -1;
}

int64_t std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::max_size(int64_t arg1)
{
    sub_140004c60(arg1);
    int64_t var_30 = -1;
    int64_t var_38 = 0x10;
    int64_t var_20 = *sub_140003750(&var_30, &var_38) - 1;
    int64_t var_18[0x3];
    var_18[0] = 0x7fffffffffffffff;
    return *sub_1400037a0(&var_18, &var_20);
}

void* std::_Generic_error_category::message(int64_t arg1, void* arg2, int32_t arg3)
{
    int64_t arg_8 = arg1;
    int32_t var_18 = 0;
    sub_140003cc0(arg2, std::_Syserror_map(arg3));
    int32_t var_18_1 = 1;
    return arg2;
}

void* std::_Iostream_error_category::message(int64_t arg1, void* arg2, int32_t arg3)
{
    int32_t var_18 = 0;
    
    if (arg3 != 1)
    {
        std::_Generic_error_category::message(arg1, arg2, arg3);
        int32_t var_18_2 = 1;
        return arg2;
    }
    
    sub_140003cc0(arg2, "iostream stream error");
    int32_t var_18_1 = 1;
    return arg2;
}

int64_t sub_140005b50(int32_t* arg1, int64_t arg2)
{
    int32_t var_28 = 0;
    int64_t* rax = sub_140005440(arg1);
    (*(*rax + 0x10))(rax, arg2, sub_140005da0(arg1));
    int32_t var_28_1 = 1;
    return arg2;
}

int128_t* sub_140005bc0(int128_t* arg1, int128_t* arg2, void* arg3)
{
    return sub_14000bee0(arg1, arg2, arg3);
}

int64_t sub_140005bf0() __pure
{
    int64_t rcx;
    int64_t arg_8 = rcx;
    return "generic";
}

int64_t sub_140005c00() __pure
{
    int64_t rcx;
    int64_t arg_8 = rcx;
    return "iostream";
}

int64_t sub_140005c10(int64_t* arg1)
{
    return (*(*arg1 + 0x68))(arg1);
}

int64_t sub_140005c30(void* arg1)
{
    return *(arg1 + 0x48);
}

uint64_t sub_140005c40(void* arg1)
{
    return *(arg1 + 0x10);
}

int64_t sub_140005c50(int64_t arg1) __pure
{
    int64_t rdx;
    int64_t arg_10 = rdx;
    return arg1;
}

int64_t sub_140005c60(void* arg1, int32_t arg2, char arg3)
{
    return sub_140005450(arg1, sub_140005c40(arg1) | arg2, arg3);
}

int64_t sub_140005ca0(int64_t arg1)
{
    return *(sub_140004c60(arg1) + 0x10);
}

uint64_t sub_140005cc0(int64_t* arg1, char arg2)
{
    char arg_10 = arg2;
    int32_t var_28;
    
    if (sub_140004eb0(arg1) <= 0)
        var_28 = (*(*arg1 + 0x18))(arg1, sub_140005d90(&arg_10));
    else
    {
        char* rax_1 = std::basic_streambuf<char,struct std::char_traits<char> >::_Pninc(arg1);
        *rax_1 = arg_10;
        var_28 = sub_140005d90(rax_1);
    }
    
    return var_28;
}

int64_t sub_140005d40(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    return (*(*arg1 + 0x48))(arg1, arg2, arg3);
}

int64_t sub_140005d80(void* arg1)
{
    return *(arg1 + 0x50);
}

uint64_t sub_140005d90(char* arg1)
{
    return *arg1;
}

uint64_t sub_140005da0(int32_t* arg1)
{
    return *arg1;
}

char const* const sub_140005db0(void* arg1)
{
    if (!*(arg1 + 8))
        return "Unknown exception";
    
    return *(arg1 + 8);
}

int64_t std::ios_base::width(void* arg1, int64_t arg2)
{
    int64_t result = *(arg1 + 0x28);
    *(arg1 + 0x28) = arg2;
    return result;
}

int64_t sub_140005e30(void* arg1)
{
    return *(arg1 + 0x28);
}

int64_t sub_140005e40() __pure
{
    return &data_140041e60;
}

uint64_t sub_140005e50(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    return sub_140010478(data_140041e60, arg1, arg2, arg3, arg4);
}

uint64_t printf(int64_t arg1, int64_t arg2)
{
    int64_t arg_10 = arg2;
    int64_t r8;
    int64_t arg_18 = r8;
    int64_t r9;
    int64_t arg_20 = r9;
    int64_t var_10_1 = 0;
    return sub_140005e50(sub_14000eda8(1), arg1, 0, &arg_10);
}

int64_t sub_140005f00()
{
    sub_1400031f0(&data_140041f00, "[*] Level 2... ");
    CreateThread(nullptr, 0, sub_140005f60, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr);
    WaitForSingleObject(data_140041ea8, 0xffffffff);
    return sub_140005760(2);
}

int64_t sub_140005f60()
{
    int64_t rcx;
    int64_t arg_8 = rcx;
    
    while (true)
    {
        if (*(GetProcessHeap() + 0x74))
        {
            OutputDebugStringA("Heap Corruption Detected.");
            nullptr();
        }
        
        data_140041ec0 = 0x481257362efb5820;
        SetEvent(data_140041ea8);
    }
}

int64_t sub_140005ff0()
{
    int64_t rcx;
    int64_t arg_8 = rcx;
    breakpoint();
}

void sub_140006010() __noreturn
{
    CreateThread(nullptr, 0, sub_140005ff0, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr);
    breakpoint();
}

int64_t sub_140006080()
{
    sub_1400031f0(&data_140041f00, "[*] Level 4... ");
    char var_28 = 0;
    int64_t var_10 = data_140041e88;
    WaitForSingleObject(data_140041eb0, 0xffffffff);
    
    while (!var_28)
    {
        data_140041e88();
        var_28 = 1;
    }
    
    return sub_140005760(4);
}

int64_t sub_1400060d0(char arg1, int64_t arg2)
{
    LRESULT rax_1;
    
    if (data_140041ea0)
        rax_1 = SendMessageA(data_140041ea0, 0x400, 0, data_140041e90);
    
    if (!data_140041ea0 || !rax_1)
        arg1 = 1;
    
    if (data_140041e88 != arg2)
    {
        arg1 = 1;
        data_140041e88();
    }
    
    while (!arg1)
    {
        data_140041e88();
        arg1 = 1;
    }
    
    return sub_140005760(4);
}

uint64_t sub_140006130()
{
    uint64_t result = data_140041e80 + 1;
    data_140041e80 = result;
    
    if (data_140041e80 == 0x67)
    {
        result = data_140041e88 ^ 0x58721daed2736aa;
        data_140041e88 = result;
    }
    
    return result;
}

int64_t sub_140006170()
{
    data_140041ed0 = -0x32074ecc78ed54d2;
    return 0x18;
}

int64_t sub_140006190()
{
    sub_1400031f0(&data_140041f00, "[*] Level 5... ");
    return sub_140005760(5);
}

uint64_t sub_1400061c0()
{
    data_140041e98 =
        CreateNamedPipeA("\\.\pipe\wawawa", 0x80003, 0x6, 0xff, 0x100, 0x100, 0, nullptr);
    enum WIN32_ERROR rax_1 = GetLastError();
    
    if (data_140041e98 == -1 || rax_1 == ERROR_ACCESS_DENIED)
    {
        data_140041e98 = CreateFileA("\\.\pipe\wawawa", 0xc0000000, FILE_SHARE_NONE, nullptr, 
            OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
        int64_t buffer_1 = 0x3afb2372819375f1;
        uint32_t var_1c8;
        uint32_t var_1c0;
        ReadFile(data_140041e98, &var_1c8, 4, &var_1c0, nullptr);
        
        if (DebugActiveProcess(var_1c8))
        {
            DebugSetProcessKillOnExit(0);
            DebugActiveProcessStop(var_1c8);
            buffer_1 = -0x2c74aa85ddb00124;
        }
        
        WriteFile(data_140041e98, &buffer_1, 8, &var_1c0, nullptr);
        CloseHandle(data_140041e98);
        return var_1c8;
    }
    
    if (data_140041e98 == -1)
        return 0xa;
    
    uint8_t var_118[0x118];
    GetModuleFileNameA(nullptr, &var_118, 0x105);
    STARTUPINFOA startupInfo;
    GetStartupInfoA(&startupInfo);
    PROCESS_INFORMATION processInformation;
    CreateProcessA(&var_118, nullptr, nullptr, nullptr, 0, NORMAL_PRIORITY_CLASS, nullptr, nullptr, 
        &startupInfo, &processInformation);
    ConnectNamedPipe(data_140041e98, nullptr);
    uint32_t buffer = GetCurrentProcessId();
    uint32_t var_1b8;
    WriteFile(data_140041e98, &buffer, 4, &var_1b8, nullptr);
    int64_t buffer_2;
    ReadFile(data_140041e98, &buffer_2, 8, &var_1b8, nullptr);
    CloseHandle(data_140041e98);
    data_140041ed8 = buffer_2;
    return 0;
}

void _TLS_Entry_0(int64_t arg1, int32_t arg2)
{
    int64_t r8;
    int64_t arg_18 = r8;
    int64_t arg_8 = arg1;
    
    if (arg2 != 1)
        return;
    
    data_140041eb0 = CreateEventA(nullptr, 0, 1, nullptr);
    HMODULE rax_2 = GetModuleHandleA(nullptr);
    WNDCLASSEXA param0;
    __builtin_memset(&param0, 0, 0x50);
    param0.cbSize = 0x50;
    param0.lpfnWndProc = sub_140007770;
    param0.hInstance = rax_2;
    param0.lpszClassName = "WinPwn";
    
    if (!data_140041ea0 && RegisterClassExA(&param0) && !IsDebuggerPresent())
    {
        HMENU hMenu;
        __builtin_memset(&hMenu, 0, 0x18);
        HWND hWndParent = -fffffffffffffffd;
        int32_t nHeight = 0;
        int32_t nWidth = 0;
        int32_t Y = 0;
        int32_t X = 0;
        HINSTANCE hInstance;
        int64_t lpParam;
        data_140041ea0 = CreateWindowExA(WS_EX_LEFT, "WinPwn", "win_pwn", WS_OVERLAPPED, X, Y, 
            nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
    }
    
    if (sub_1400061c0())
    {
        ExitProcess(3);
        /* no return */
    }
    
    SetEvent(data_140041eb0);
}

int64_t* sub_140006570(int64_t* arg1, char arg2, int64_t arg3)
{
    char arg_10 = arg2;
    *arg1 = *sub_140003670(arg3);
    return arg1;
}

int64_t* sub_1400065b0(int64_t* arg1, int64_t arg2)
{
    int64_t arg_10 = arg2;
    char var_18;
    sub_140006570(arg1, var_18, &arg_10);
    return arg1;
}

int64_t* sub_1400065e0(int64_t* arg1, int64_t arg2)
{
    int64_t var_18 = -2;
    sub_1400065b0(arg1, arg2);
    return arg1;
}

int64_t* sub_140006620(int64_t* arg1)
{
    sub_140007590(arg1, sub_1400076d0(arg1 + *(*arg1 + 4), 0xa));
    sub_140005800(arg1);
    return arg1;
}

int64_t* sub_140006670(void* arg1)
{
    int64_t var_30 = -2;
    void var_50;
    std::_Lockit::_Lockit(&var_50, 0);
    int64_t* result_1 = data_140041ee0;
    int64_t* result = std::locale::_Getfacet(arg1, std::locale::id(&data_140042188));
    
    if (!result)
    {
        if (!result_1)
        {
            std::ctype<char>::_Getcat(&result_1, arg1);
            int64_t* result_2 = result_1;
            void var_48;
            sub_1400065e0(&var_48, result_2);
            std::_Facet_Register(result_2);
            (*(*result_2 + 8))(result_2);
            data_140041ee0 = result_1;
            result = result_1;
            std::unique_ptr<class std::_Facet_base,struct std::default_delete<class std::_Facet_base> >::release(
                &var_48);
            sub_140006b40(&var_48);
        }
        else
            result = result_1;
    }
    
    sub_140009490(&var_50);
    return result;
}

int64_t* std::_Yarn<char>::_Yarn<char>(int64_t* arg1)
{
    *arg1 = 0;
    arg1[1] = 0;
    return arg1;
}

int64_t* std::_Yarn<wchar_t>::_Yarn<wchar_t>(int64_t* arg1)
{
    *arg1 = 0;
    arg1[1] = 0;
    return arg1;
}

struct std::ctype_base::std::ctype<char>::VTable** sub_1400067f0(struct std::ctype_base::std::ctype<char>::VTable** arg1, int64_t arg2, int32_t arg3)
{
    int64_t var_18 = -2;
    sub_1400069c0(arg1, arg3);
    *arg1 = &std::ctype<char>::`vftable'{for `std::ctype_base'};
    std::ctype<char>::_Init(arg1, arg2);
    return arg1;
}

struct std::_Facet_base::VTable** sub_140006850(struct std::_Facet_base::VTable** arg1)
{
    *arg1 = &std::_Facet_base::`vftable';
    return arg1;
}

int32_t* sub_140006870(int32_t* arg1, int128_t* arg2)
{
    int64_t var_18 = -2;
    std::_Lockit::_Lockit(arg1, 0);
    std::_Yarn<char>::_Yarn<char>(&arg1[2]);
    std::_Yarn<char>::_Yarn<char>(&arg1[6]);
    std::_Yarn<wchar_t>::_Yarn<wchar_t>(&arg1[0xa]);
    std::_Yarn<wchar_t>::_Yarn<wchar_t>(&arg1[0xe]);
    std::_Yarn<char>::_Yarn<char>(&arg1[0x12]);
    std::_Yarn<char>::_Yarn<char>(&arg1[0x16]);
    
    if (arg2)
    {
        std::_Locinfo::_Locinfo_ctor(arg1, arg2);
        return arg1;
    }
    
    sub_140007b44("bad locale name");
    /* no return */
}

struct std::exception::std::bad_cast::VTable** sub_140006940(struct std::exception::std::bad_cast::VTable** arg1, void* arg2)
{
    std::exception::exception(arg1, arg2);
    *arg1 = &std::bad_cast::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::std::bad_cast::VTable** sub_140006980(struct std::exception::std::bad_cast::VTable** arg1)
{
    std::exception::exception(arg1, "bad cast");
    *arg1 = &std::bad_cast::`vftable'{for `std::exception'};
    return arg1;
}

struct std::locale::facet::std::ctype_base::VTable** sub_1400069c0(struct std::locale::facet::std::ctype_base::VTable** arg1, int32_t arg2)
{
    std::locale::facet::facet(arg1, arg2);
    *arg1 = &std::ctype_base::`vftable'{for `std::locale::facet'};
    return arg1;
}

struct std::exception::VTable** std::exception::exception(struct std::exception::VTable** arg1, int64_t arg2)
{
    int32_t r8;
    int32_t arg_18 = r8;
    *arg1 = &std::exception::`vftable';
    __builtin_memset(&arg1[1], 0, 0x10);
    arg1[1] = arg2;
    return arg1;
}

struct std::_Facet_base::std::locale::facet::VTable** std::locale::facet::facet(struct std::_Facet_base::std::locale::facet::VTable** arg1, int32_t arg2)
{
    sub_140006850(arg1);
    *arg1 = &std::locale::facet::`vftable'{for `std::_Facet_base'};
    arg1[1] = arg2;
    return arg1;
}

void* sub_140006a90(void* arg1, void* arg2)
{
    *(arg1 + 8) = *(arg2 + 8);
    (*(**(arg1 + 8) + 8))(*(arg1 + 8));
    return arg1;
}

int64_t* sub_140006ae0(int64_t* arg1)
{
    return sub_1400071b0(arg1);
}

struct std::_Facet_base::VTable** sub_140006b00(struct std::ctype_base::std::ctype<char>::VTable** arg1)
{
    *arg1 = &std::ctype<char>::`vftable'{for `std::ctype_base'};
    std::ctype<char>::_Tidy(arg1);
    return std::time_base::~time_base(arg1);
}

int64_t* sub_140006b40(int64_t arg1)
{
    int64_t* result = std::unique_ptr<class std::_Facet_base,struct std::default_delete<class std::_Facet_base> >::get(
        arg1);
    
    if (!result)
        return result;
    
    int64_t* rax = std::unique_ptr<class std::_Facet_base,struct std::default_delete<class std::_Facet_base> >::get(
        arg1);
    return sub_140006da0(sub_140004c60(arg1), rax);
}

struct std::_Facet_base::VTable** sub_140006b90(struct std::_Facet_base::VTable** arg1)
{
    *arg1 = &std::_Facet_base::`vftable';
    return arg1;
}

int64_t std::_Locinfo::~_Locinfo(int32_t* arg1)
{
    int64_t var_18 = -2;
    std::_Locinfo::_Locinfo_dtor(arg1);
    sub_140006ae0(&arg1[0x16]);
    sub_140006ae0(&arg1[0x12]);
    sub_140006ae0(&arg1[0xe]);
    sub_140006ae0(&arg1[0xa]);
    sub_140006ae0(&arg1[6]);
    sub_140006ae0(&arg1[2]);
    return sub_140009490(arg1);
}

struct std::_Facet_base::VTable** std::time_base::~time_base(struct std::locale::facet::std::ctype_base::VTable** arg1)
{
    *arg1 = &std::ctype_base::`vftable'{for `std::locale::facet'};
    return std::locale::facet::~facet(arg1);
}

struct std::_Facet_base::VTable** std::locale::facet::~facet(struct std::_Facet_base::std::locale::facet::VTable** arg1)
{
    *arg1 = &std::locale::facet::`vftable'{for `std::_Facet_base'};
    return sub_140006b90(arg1);
}

int64_t* sub_140006cb0(int64_t* arg1)
{
    int64_t* result = arg1;
    
    if (result[1])
    {
        result = (*(*arg1[1] + 0x10))(arg1[1]);
        
        if (!result)
            int64_t var_18_1 = 0;
        else
        {
            result = (**result)(result, 1);
            int64_t* result_1 = result;
        }
    }
    
    return result;
}

int64_t sub_140006d20(int64_t arg1, int64_t arg2)
{
    return arg2(arg1);
}

int64_t std::locale::id(int64_t* arg1)
{
    if (!*arg1)
    {
        void var_18;
        std::_Lockit::_Lockit(&var_18, 0);
        
        if (!*arg1)
        {
            data_140042170 += 1;
            *arg1 = data_140042170;
        }
        
        sub_140009490(&var_18);
    }
    
    return *arg1;
}

int64_t* sub_140006da0(int64_t arg1, int64_t* arg2)
{
    int64_t arg_8 = arg1;
    int64_t* result = arg2;
    
    if (!result)
        int64_t var_18 = 0;
    else
    {
        result = (**result)(result, 1);
        int64_t* result_1 = result;
    }
    
    return result;
}

struct std::ctype_base::std::ctype<char>::VTable** sub_140006e00(struct std::ctype_base::std::ctype<char>::VTable** arg1, int32_t arg2)
{
    sub_140006b00(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::_Facet_base::VTable** sub_140006e40(struct std::_Facet_base::VTable** arg1, int32_t arg2)
{
    sub_140006b90(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::locale::facet::std::ctype_base::VTable** sub_140006e80(struct std::locale::facet::std::ctype_base::VTable** arg1, int32_t arg2)
{
    std::time_base::~time_base(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::_Facet_base::std::locale::facet::VTable** sub_140006ec0(struct std::_Facet_base::std::locale::facet::VTable** arg1, int32_t arg2)
{
    std::locale::facet::~facet(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

void* const std::locale::facet::_Decref(void* arg1)
{
    int32_t rcx = *(arg1 + 8);
    *(arg1 + 8) -= 1;
    
    if (rcx != 1)
        return nullptr;
    
    return arg1;
}

int64_t std::ctype<char>::_Getcat(int64_t* arg1, void* arg2)
{
    int64_t var_78 = -2;
    int32_t var_a8 = 0;
    
    if (arg1 && !*arg1)
    {
        struct std::ctype_base::std::ctype<char>::VTable** rax_2 = sub_14000a804(0x30);
        struct std::ctype_base::std::ctype<char>::VTable** var_98_1;
        void var_70;
        
        if (!rax_2)
            var_98_1 = nullptr;
        else
        {
            var_a8 = 1;
            var_98_1 = sub_1400067f0(rax_2, sub_140006870(&var_70, std::locale::c_str(arg2)), 0);
        }
        
        *arg1 = var_98_1;
        
        if (var_a8 & 1)
        {
            int32_t var_a8_1 = var_a8 & 0xfffffffe;
            std::_Locinfo::~_Locinfo(&var_70);
        }
    }
    
    return 2;
}

int64_t std::_Locinfo::_Getctype(int64_t arg1, int64_t arg2)
{
    int64_t arg_8 = arg1;
    void var_58;
    void var_38;
    __builtin_memcpy(&var_58, _Getctype(&var_38), 0x20);
    __builtin_memcpy(arg2, &var_58, 0x20);
    return arg2;
}

int64_t std::locale::_Getfacet(void* arg1, int64_t arg2)
{
    int64_t result;
    
    if (arg2 >= *(*(arg1 + 8) + 0x18))
        result = 0;
    else
        result = *(*(*(arg1 + 8) + 0x10) + (arg2 << 3));
    
    if (result || !*(*(arg1 + 8) + 0x24))
        return result;
    
    void* rax_11 = sub_1400095e0();
    
    if (arg2 >= *(rax_11 + 0x18))
        return 0;
    
    return *(*(rax_11 + 0x10) + (arg2 << 3));
}

int32_t* sub_140007150(void* arg1)
{
    *(arg1 + 8) += 1;
    return arg1 + 8;
}

int64_t std::ctype<char>::_Init(int64_t arg1, int64_t arg2)
{
    void var_38;
    int64_t result = std::_Locinfo::_Getctype(arg2, &var_38);
    __builtin_memcpy(arg1 + 0x10, result, 0x20);
    return result;
}

int64_t* sub_1400071b0(int64_t* arg1)
{
    if (*arg1)
        free(*arg1);
    
    *arg1 = 0;
    return arg1;
}

int64_t std::ctype<char>::_Tidy(void* arg1)
{
    if (*(arg1 + 0x20) > 0)
        free(*(arg1 + 0x18));
    else if (*(arg1 + 0x20) < 0)
        j_j_free(*(arg1 + 0x18));
    
    return free(*(arg1 + 0x28));
}

void* sub_140007250(int64_t* arg1)
{
    if (!*arg1)
        return &arg1[1];
    
    return *arg1;
}

void* const std::locale::c_str(void* arg1)
{
    if (*(arg1 + 8))
        return sub_140007250(*(arg1 + 8) + 0x28);
    
    return &data_140029d68;
}

uint64_t sub_1400072e0(int64_t arg1, char arg2) __pure
{
    char r8;
    char arg_18 = r8;
    int64_t arg_8 = arg1;
    return arg2;
}

int64_t sub_140007300(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    char r9;
    char arg_20 = r9;
    int64_t arg_8 = arg1;
    __builtin_memcpy(arg4, arg2, arg3 - arg2);
    return arg3;
}

int64_t std::ctype<char>::do_tolower(void* arg1, char arg2, char arg3)
{
    return _Tolower(arg2, arg1 + 0x10, arg3);
}

char* std::ctype<char>::do_tolower(void* arg1, char* arg2, int64_t arg3)
{
    int64_t arg_18 = arg3;
    char* i = arg2;
    char* i_1 = i;
    
    for (; i != arg_18; i = &i[1])
    {
        char rax_6;
        rax_6 = _Tolower(*i, arg1 + 0x10, arg3);
        *i = rax_6;
    }
    
    return i;
}

int64_t std::ctype<char>::do_toupper(void* arg1, char arg2, char arg3)
{
    return _Toupper(arg2, arg1 + 0x10, arg3);
}

char* std::ctype<char>::do_toupper(void* arg1, char* arg2, int64_t arg3)
{
    int64_t arg_18 = arg3;
    char* i = arg2;
    char* i_1 = i;
    
    for (; i != arg_18; i = &i[1])
    {
        char rax_6;
        rax_6 = _Toupper(*i, arg1 + 0x10, arg3);
        *i = rax_6;
    }
    
    return i;
}

uint64_t sub_1400074c0(int64_t arg1, char arg2) __pure
{
    int64_t arg_8 = arg1;
    return arg2;
}

int64_t sub_1400074d0(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t arg_8 = arg1;
    __builtin_memcpy(arg4, arg2, arg3 - arg2);
    return arg3;
}

int64_t std::unique_ptr<class std::_Facet_base,struct std::default_delete<class std::_Facet_base> >::get(int64_t arg1)
{
    return *sub_140004c60(arg1);
}

void* std::ios_base::getloc(void* arg1, void* arg2)
{
    int32_t var_18 = 0;
    sub_140006a90(arg2, *(arg1 + 0x40));
    int32_t var_18_1 = 1;
    return arg2;
}

int64_t* sub_140007590(int64_t* arg1, char arg2)
{
    int64_t var_28 = -2;
    int32_t var_48 = 0;
    void var_20;
    sub_140004200(&var_20, arg1);
    
    if (sub_1400046d0(&var_20))
    {
        int32_t var_40 = sub_140005cc0(sub_140005c30(arg1 + *(*arg1 + 4)), arg2);
        int32_t var_3c = 0xffffffff;
        
        if (sub_140005670(&var_3c, &var_40))
            var_48 = 4;
    }
    else
        var_48 = 4;
    
    sub_140005c60(arg1 + *(*arg1 + 4), var_48, 0);
    sub_1400045a0(&var_20);
    return arg1;
}

int64_t std::unique_ptr<class std::_Facet_base,struct std::default_delete<class std::_Facet_base> >::release(int64_t arg1)
{
    int64_t result = std::unique_ptr<class std::_Facet_base,struct std::default_delete<class std::_Facet_base> >::get(
        arg1);
    *sub_140004c60(arg1) = 0;
    return result;
}

uint64_t sub_1400076d0(void* arg1, char arg2)
{
    int64_t var_20 = -2;
    void var_18;
    char rax_3 = sub_140007740(sub_140006670(std::ios_base::getloc(arg1, &var_18)), arg2);
    sub_140006cb0(&var_18);
    return rax_3;
}

int64_t sub_140007740(int64_t* arg1, char arg2)
{
    return (*(*arg1 + 0x40))(arg1, arg2);
}

LRESULT sub_140007770(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    if (arg2 != 0x400)
        return DefWindowProcA(arg1, arg2, arg3, arg4);
    
    int64_t rcx_1 = arg4 ^ 0x58721daed2736aa;
    rcx_1(rcx_1);
    return 1;
}

int64_t main()
{
    int64_t* rax_10 = sub_1400031f0(
        sub_140006d20(
            sub_1400031f0(
                sub_140006d20(
                    sub_1400031f0(
                        sub_140006d20(
                            sub_1400031f0(
                                sub_140006d20(
                                    sub_1400031f0(
                                        sub_140006d20(
                                            sub_1400031f0(&data_140041f00, 
                                                "                 _   _     _ _           "), 
                                            sub_140006620), 
                                        "     /\         | | (_)   | | |          "), 
                                    sub_140006620), 
                                "    /  \   _ __ | |_ _  __| | |__   __ _ "), 
                            sub_140006620), 
                        "   / /\ \ | '_ \| __| |/ _` | '_ \ / _` |"), 
                    sub_140006620), 
                "  / ____ \| | | | |_| | (_| | |_) | (_| |"), 
            sub_140006620), 
        " /_/    \_\_| |_|\__|_|\__,_|_.__/ \__, |");
    sub_140006d20(
        sub_1400031f0(
            sub_140006d20(
                sub_140006d20(
                    sub_1400031f0(
                        sub_140006d20(
                            sub_1400031f0(sub_140006d20(rax_10, sub_140006620), 
                                "                                    __/ |"), 
                            sub_140006620), 
                        "                                   |___/ "), 
                    sub_140006620), 
                sub_140006620), 
            "       ... Debug me if you can ...       "), 
        sub_140006620);
    data_140041ea8 = CreateEventA(nullptr, 0, 0, nullptr);
    int32_t var_14 = 5;
    
    for (int32_t i = 0; i < 5; i += 1)
        (&data_140040d58)[i](&data_140040d58);
    
    return 0;
}

int64_t j___uncaught_exception()
{
    /* tailcall */
    return __uncaught_exception();
}

struct std::exception::VTable** sub_140007964(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::std::bad_alloc::VTable** sub_1400079a0(struct std::exception::std::bad_alloc::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad allocation";
    *arg1 = &std::bad_alloc::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::VTable** sub_1400079c0(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::length_error::`vftable'{for `std::logic_error'};
    return arg1;
}

struct std::exception::VTable** sub_1400079fc(struct std::exception::VTable** arg1, int64_t arg2)
{
    char var_10 = 1;
    int64_t var_18 = arg2;
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(&var_18, &arg1[1]);
    *arg1 = &std::length_error::`vftable'{for `std::logic_error'};
    return arg1;
}

struct std::exception::VTable** sub_140007a44(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::logic_error::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::VTable** sub_140007a80(struct std::exception::VTable** arg1, int64_t arg2)
{
    char var_10 = 1;
    int64_t var_18 = arg2;
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(&var_18, &arg1[1]);
    *arg1 = &std::runtime_error::`vftable'{for `std::exception'};
    return arg1;
}

int64_t sub_140007ac8(struct std::exception::VTable** arg1)
{
    *arg1 = &std::exception::`vftable';
    /* tailcall */
    return __std_exception_destroy(&arg1[1]);
}

struct std::exception::VTable** sub_140007adc(struct std::exception::VTable** arg1, char arg2)
{
    *arg1 = &std::exception::`vftable';
    __std_exception_destroy(&arg1[1]);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

void sub_140007b20(int64_t arg1) __noreturn
{
    void var_28;
    sub_1400079fc(&var_28, arg1);
    sub_14000b810(&var_28, &data_14003e390);
    /* no return */
}

void sub_140007b44(int64_t arg1) __noreturn
{
    void var_28;
    sub_140007a80(&var_28, arg1);
    sub_14000b810(&var_28, &data_14003e3f8);
    /* no return */
}

int64_t sub_140007b68(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    /* tailcall */
    return sub_14000a0ac(arg1, arg2, arg3, 0);
}

int64_t std::_Syserror_map(int32_t arg1)
{
    for (int32_t* i = &data_14002a140; i != "address family not supported"; i = &i[4])
    {
        if (*i == arg1)
            return *(i + 8);
    }
    
    return "unknown error";
}

int64_t* sub_140007b98(int64_t* arg1, int64_t arg2, int64_t arg3, char arg4)
{
    void* r14 = arg1[2];
    int64_t rdi = 0x7fffffffffffffff;
    int64_t r12;
    r12 = arg4;
    
    if (0x7fffffffffffffff - r14 < arg2)
    {
        sub_140005100();
        /* no return */
    }
    
    int64_t rbp = arg1[3];
    void* r15 = r14 + arg2;
    int64_t rcx_1 = r15 | 0xf;
    
    if (rcx_1 <= 0x7fffffffffffffff)
    {
        uint64_t rdx_1 = rbp >> 1;
        
        if (rbp <= 0x7fffffffffffffff - rdx_1)
        {
            int64_t rax_2 = rdx_1 + rbp;
            rdi = rcx_1;
            
            if (rcx_1 < rax_2)
                rdi = rax_2;
        }
    }
    
    char* rbx_2;
    
    if (rdi + 1 < 0x1000)
    {
        if (rdi == -1)
            rbx_2 = nullptr;
        else
            rbx_2 = sub_14000a804(rdi + 1);
        
        goto label_140007c56;
    }
    
    uint64_t rcx_2 = rdi + 0x28;
    
    if (rcx_2 <= rdi + 1)
        rcx_2 = -1;
    
    int64_t rax_4 = sub_14000a804(rcx_2);
    
    if (rax_4)
    {
        rbx_2 = (rax_4 + 0x27) & 0xffffffffffffffe0;
        *(rbx_2 - 8) = rax_4;
    label_140007c56:
        arg1[2] = r15;
        arg1[3] = rdi;
        int128_t* rcx_4 = rbx_2;
        
        if (rbp < 0x10)
        {
            sub_14000bee0(rcx_4, arg1, r14);
            *(rbx_2 + r14) = r12;
            *(rbx_2 + r14 + 1) = 0;
            *arg1 = rbx_2;
            return arg1;
        }
        
        int128_t* rdi_1 = *arg1;
        sub_14000bee0(rcx_4, rdi_1, r14);
        *(rbx_2 + r14) = r12;
        *(rbx_2 + r14 + 1) = 0;
        
        if (rbp + 1 < 0x1000)
            goto label_140007ca7;
        
        int128_t* rcx_5 = *(rdi_1 - 8);
        
        if (rdi_1 - rcx_5 - 8 <= 0x1f)
        {
            rdi_1 = rcx_5;
        label_140007ca7:
            j_j_free(rdi_1);
            *arg1 = rbx_2;
            return arg1;
        }
    }
    
    sub_14000e928();
    /* no return */
}

int64_t* sub_140007cf4(void* arg1)
{
    int64_t var_38 = -2;
    void arg_10;
    std::_Lockit::_Lockit(&arg_10, 0);
    int64_t* result_3 = data_140042018;
    int64_t* result_2 = result_3;
    int64_t rdi = data_140042008;
    int64_t* result_1;
    
    if (!rdi)
    {
        std::_Lockit::_Lockit(&result_1, 0);
        
        if (data_140042008 == rdi)
        {
            int32_t rax_2 = data_140042170 + 1;
            data_140042170 = rax_2;
            data_140042008 = rax_2;
        }
        
        sub_140009490(&result_1);
        rdi = data_140042008;
    }
    
    void* rcx_3 = *(arg1 + 8);
    int64_t* result;
    
    if (rdi >= *(rcx_3 + 0x18))
        result = nullptr;
    else
        result = *(*(rcx_3 + 0x10) + (rdi << 3));
    
    if (!result)
    {
        if (*(rcx_3 + 0x24) != result)
        {
            void* rax_5 = sub_1400095e0();
            
            if (rdi >= *(rax_5 + 0x18))
                result = nullptr;
            else
                result = *(*(rax_5 + 0x10) + (rdi << 3));
        }
        
        if (!result)
        {
            if (!result_3)
            {
                std::codecvt<char,char,struct _Mbstatet>::_Getcat(&result_2, arg1);
                result = result_2;
                result_1 = result;
                std::_Facet_Register(result);
                (*(*result + 8))(result);
                data_140042018 = result;
            }
            else
                result = result_3;
        }
    }
    
    sub_140009490(&arg_10);
    return result;
}

void** sub_140007e28(void** arg1, int64_t arg2, char arg3, int32_t arg4)
{
    void** arg_8 = arg1;
    int64_t var_18 = -2;
    int32_t arg_20 = 0;
    
    if (arg4)
    {
        *arg1 = &data_14002afe0;
        arg1[2] = &std::ios::`vftable'{for `std::ios_base'};
        arg_20 = 1;
    }
    
    *(*(*arg1 + 4) + arg1) = &std::ostream::`vftable';
    int64_t rcx_1 = *(*arg1 + 4);
    *(rcx_1 + arg1 - 4) = rcx_1 - 0x10;
    sub_14000876c(*(*arg1 + 4) + arg1, arg2, arg3);
    return arg1;
}

struct std::streambuf::VTable** sub_140007ea4(struct std::streambuf::VTable** arg1)
{
    int64_t var_18 = -2;
    *arg1 = &std::streambuf::`vftable';
    void* rax = sub_14000a804(0x10);
    void* const rdi = rax;
    
    if (!rax)
        rdi = nullptr;
    else
        *(rdi + 8) = sub_1400095e8(1);
    
    arg1[0xc] = rdi;
    arg1[3] = &arg1[1];
    arg1[4] = &arg1[2];
    arg1[7] = &arg1[5];
    arg1[8] = &arg1[6];
    arg1[0xa] = &arg1[9];
    arg1[0xb] = arg1 + 0x4c;
    arg1[2] = 0;
    arg1[8]->vFunc_0 = 0;
    arg1[0xb]->vFunc_0 = 0;
    arg1[3]->vFunc_0 = 0;
    arg1[7]->vFunc_0 = 0;
    arg1[0xa]->vFunc_0 = 0;
    return arg1;
}

int64_t sub_140007f54(int64_t arg1)
{
    int64_t* r9 = data_140042390;
    int64_t* r8 = &data_140041f00;
    data_140042398 = &data_140041f00;
    
    if (r9)
    {
        *(*(*r9 + 4) + r9 + 0x50) = &data_140041f00;
        r8 = data_140042398;
    }
    
    int64_t* rdx_2 = data_1400423a0;
    
    if (rdx_2)
    {
        *(*(*rdx_2 + 4) + rdx_2 + 0x50) = r8;
        r8 = data_140042398;
    }
    
    int64_t* rdx_3 = data_1400423a8;
    
    if (rdx_3)
        *(*(*rdx_3 + 4) + rdx_3 + 0x50) = r8;
    
    return arg1;
}

struct std::streambuf::VTable* const sub_140007fc0(struct std::streambuf::std::filebuf::VTable** arg1, int512_t arg2 @ zmm0)
{
    int64_t var_18 = -2;
    int64_t* rbx = arg1;
    *arg1 = &std::filebuf::`vftable'{for `std::streambuf'};
    
    if (arg1[0x10])
    {
        int64_t* r8_1 = arg1[3];
        
        if (*r8_1 == &arg1[0xe])
        {
            int32_t rdx_1 = arg1[0x12];
            int64_t rcx = arg1[0x11];
            *r8_1 = rcx;
            *rbx[7] = rcx;
            *rbx[0xa] = rdx_1 - rcx;
        }
    }
    
    if (*(rbx + 0x7c))
    {
        if (rbx[0x10])
        {
            sub_1400082c4(rbx, arg2);
            fclose(rbx[0x10]);
        }
        
        std::basic_filebuf<char,struct std::char_traits<char> >::_Init(rbx, 0, 2);
    }
    
    *rbx = &std::streambuf::`vftable';
    void* rbx_1 = rbx[0xc];
    
    if (!rbx_1)
        return &std::streambuf::`vftable';
    
    int64_t* rcx_4 = *(rbx_1 + 8);
    
    if (rcx_4)
    {
        int64_t* rax_6 = (*(*rcx_4 + 0x10))();
        
        if (rax_6)
            (**rax_6)(rax_6, 1);
    }
    
    return j_j_free(rbx_1);
}

int64_t sub_1400080a0(struct std::ios_base::VTable** arg1)
{
    int64_t var_18 = -2;
    *arg1 = &std::ios_base::`vftable';
    return sub_14000a220(arg1);
}

int64_t sub_1400080c4(void* arg1, char arg2)
{
    /* tailcall */
    return sub_140008150(arg1 - *(arg1 - 4), arg2);
}

struct std::streambuf::std::filebuf::VTable** sub_1400080d0(struct std::streambuf::std::filebuf::VTable** arg1, char arg2, int512_t arg3 @ zmm0)
{
    sub_140007fc0(arg1, arg3);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::ios_base::VTable** sub_140008104(struct std::ios_base::VTable** arg1, char arg2)
{
    int64_t var_18 = -2;
    *arg1 = &std::ios_base::`vftable';
    sub_14000a220(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

int64_t* sub_140008150(struct std::ios_base::VTable** arg1, char arg2)
{
    int64_t var_18 = -2;
    *(*(&arg1[-2]->vFunc_0 + 4) + arg1 - 0x10) = &std::ostream::`vftable';
    int64_t r8_1 = *(&arg1[-2]->vFunc_0 + 4);
    *(r8_1 + arg1 - 0x14) = r8_1 - 0x10;
    *arg1 = &std::ios_base::`vftable';
    sub_14000a220(arg1);
    
    if (arg2 & 1)
        j_j_free(&arg1[-2]);
    
    return &arg1[-2];
}

struct std::streambuf::VTable** sub_1400081c0(struct std::streambuf::VTable** arg1, char arg2)
{
    void* rdi = arg1[0xc];
    *arg1 = &std::streambuf::`vftable';
    
    if (rdi)
    {
        int64_t* rcx = *(rdi + 8);
        
        if (rcx)
        {
            int64_t* rax_3 = (*(*rcx + 0x10))();
            
            if (rax_3)
                (**rax_3)(rax_3, 1);
        }
        
        j_j_free(rdi);
    }
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::_Facet_base::VTable** sub_14000824c(struct std::_Facet_base::VTable** arg1, char arg2)
{
    *arg1 = &std::_Facet_base::`vftable';
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

struct std::ios_base::VTable** std::ios_base::`scalar deleting destructor'(struct std::ios_base::VTable** arg1, char arg2)
{
    int64_t var_18 = -2;
    *arg1 = &std::ios_base::`vftable';
    sub_14000a220(arg1);
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

uint64_t sub_1400082c4(int64_t* arg1, int512_t arg2 @ zmm0)
{
    void var_68;
    uint64_t var_10 = __security_cookie ^ &var_68;
    uint64_t result;
    
    if (!arg1[0xd] || !*(arg1 + 0x71))
        result = 1;
    else if ((*(*arg1 + 0x18))(arg2, 0xffffffff) == 0xffffffff)
        result = 0;
    else
    {
        int64_t* rcx = arg1[0xd];
        int64_t var_38;
        void var_30;
        int32_t rax_5 = (*(*rcx + 0x40))(rcx, arg1 + 0x74, &var_30, &var_10, &var_38);
        
        if (!rax_5)
        {
            *(arg1 + 0x71) = 0;
        label_14000835f:
            int64_t rdi_1 = var_38;
            void* rdi_2 = rdi_1 - &var_30;
            
            if (rdi_1 == &var_30)
                result = !*(arg1 + 0x71);
            else if (rdi_2 != fwrite(&var_30, 1, rdi_2, arg1[0x10]))
                result = 0;
            else
                result = !*(arg1 + 0x71);
        }
        else
        {
            if (rax_5 == 1)
                goto label_14000835f;
            
            if (rax_5 != 3)
                result = 0;
            else
            {
                *(arg1 + 0x71) = 0;
                result = 1;
            }
        }
    }
    
    __security_check_cookie(var_10 ^ &var_68);
    return result;
}

int64_t std::codecvt<char,char,struct _Mbstatet>::_Getcat(int64_t* arg1, void* arg2)
{
    int64_t var_78 = -2;
    char rsi = 0;
    int32_t arg_8 = 0;
    
    if (arg1 && !*arg1)
    {
        struct std::codecvt_base::std::codecvt<char, char, struct _Mbstatet>::VTable** rax_1 =
            sub_14000a804(0x10);
        struct std::codecvt_base::std::codecvt<char, char, struct _Mbstatet>::VTable** rbx_1 =
            rax_1;
        arg_8 = rax_1;
        void var_70;
        
        if (!rax_1)
            rbx_1 = nullptr;
        else
        {
            void* rax_2 = *(arg2 + 8);
            int128_t* rdx;
            
            if (rax_2)
            {
                rdx = *(rax_2 + 0x28);
                
                if (!rdx)
                    rdx = rax_2 + 0x30;
            }
            else
                rdx = &data_140029d68;
            
            sub_140006870(&var_70, rdx);
            rsi = 1;
            rbx_1[1] = 0;
            *rbx_1 =
                &std::codecvt<char, char, struct _Mbstatet>::`vftable'{for `std::codecvt_base'};
        }
        
        *arg1 = rbx_1;
        
        if (rsi & 1)
            std::_Locinfo::~_Locinfo(&var_70);
    }
    
    return 2;
}

int64_t std::basic_filebuf<char,struct std::char_traits<char> >::_Init(void* arg1, int64_t arg2, int32_t arg3)
{
    *(arg1 + 0x71) = 0;
    *(arg1 + 0x20) = arg1 + 0x10;
    *(arg1 + 0x7c) = arg3 == 1;
    *(arg1 + 0x18) = arg1 + 8;
    *(arg1 + 0x38) = arg1 + 0x28;
    *(arg1 + 0x40) = arg1 + 0x30;
    *(arg1 + 0x50) = arg1 + 0x48;
    *(arg1 + 0x58) = arg1 + 0x4c;
    *(arg1 + 0x10) = 0;
    **(arg1 + 0x40) = 0;
    **(arg1 + 0x58) = 0;
    **(arg1 + 0x18) = 0;
    **(arg1 + 0x38) = 0;
    **(arg1 + 0x50) = 0;
    
    if (arg2)
    {
        int64_t arg_8 = 0;
        int64_t arg_10 = 0;
        int64_t arg_20 = 0;
        _get_stream_buffer_pointers(arg2, &arg_8, &arg_10, &arg_20);
        int64_t rax_11 = arg_8;
        *(arg1 + 0x18) = rax_11;
        *(arg1 + 0x20) = rax_11;
        int64_t rax_12 = arg_10;
        *(arg1 + 0x38) = rax_12;
        *(arg1 + 0x40) = rax_12;
        int64_t rax_13 = arg_20;
        *(arg1 + 0x50) = rax_13;
        *(arg1 + 0x58) = rax_13;
    }
    
    *(arg1 + 0x80) = arg2;
    int64_t result = data_140042010;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0x74) = result;
    return result;
}

int64_t* std::ios_base::_Init(void* arg1)
{
    int64_t var_18 = -2;
    *(arg1 + 8) = 0;
    *(arg1 + 0x14) = 0;
    *(arg1 + 0x18) = 0x201;
    *(arg1 + 0x20) = 6;
    __builtin_memset(arg1 + 0x28, 0, 0x20);
    sub_140008694(arg1, 0);
    int64_t* result = sub_14000a804(0x10);
    int64_t* result_1 = result;
    
    if (!result)
        result_1 = nullptr;
    else
    {
        result = sub_1400095e8(1);
        result_1[1] = result;
    }
    
    *(arg1 + 0x40) = result_1;
    return result;
}

int32_t* sub_1400085c8(void* arg1, int64_t* arg2)
{
    int32_t* result = (*(*arg2 + 0x18))(arg2);
    
    if (!result)
    {
        *(arg1 + 0x68) = arg2;
        *(arg1 + 0x18) = arg1 + 8;
        *(arg1 + 0x20) = arg1 + 0x10;
        *(arg1 + 0x38) = arg1 + 0x28;
        *(arg1 + 0x40) = arg1 + 0x30;
        *(arg1 + 0x50) = arg1 + 0x48;
        *(arg1 + 0x58) = arg1 + 0x4c;
        *(arg1 + 0x10) = 0;
        **(arg1 + 0x40) = 0;
        **(arg1 + 0x58) = 0;
        **(arg1 + 0x18) = 0;
        **(arg1 + 0x38) = 0;
        result = *(arg1 + 0x50);
        *result = 0;
    }
    else
        *(arg1 + 0x68) = 0;
    
    return result;
}

void sub_140008658(void* arg1)
{
    void* rcx = *(arg1 + 0x80);
    
    if (rcx)
        sub_14000ee60(rcx);
}

void _guard_check_icall(void (* arg1)()) __pure
{
    return;
}

void sub_140008678(void* arg1)
{
    void* rcx = *(arg1 + 0x80);
    
    if (rcx)
        sub_14000ee6c(rcx);
}

int64_t sub_140008694(void* arg1, int32_t arg2)
{
    int32_t rax = *(arg1 + 0x14);
    int32_t rdx = arg2 & 0x17;
    *(arg1 + 0x10) = rdx;
    int32_t result = rax & rdx;
    
    if (!result)
        return result;
    
    char const* const rbx;
    
    if (!(result & 4))
    {
        rbx = "ios_base::failbit set";
        
        if (!(result & 2))
            rbx = "ios_base::eofbit set";
    }
    else
        rbx = "ios_base::badbit set";
    
    void var_48;
    void var_38;
    std::ios_base::failure::failure(&var_38, rbx, std::make_error_code(&var_48, 1));
    sub_14000b810(&var_38, &data_14003e190);
    /* no return */
}

int64_t sub_140008700() __pure
{
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_140008704() __pure
{
    return 1;
}

int64_t sub_14000870c(int64_t arg1, int64_t, int64_t arg3, int64_t* arg4, int64_t arg5, int64_t* arg6)
{
    *arg4 = arg3;
    *arg6 = arg5;
    return 3;
}

uint64_t sub_140008728(int64_t, int64_t, int64_t arg3, int64_t arg4, uint64_t arg5) __pure
{
    int64_t r9 = arg4 - arg3;
    
    if (r9 < arg5)
        return r9;
    
    return arg5;
}

int64_t sub_140008738(int64_t, int64_t, int64_t arg3, int64_t* arg4)
{
    *arg4 = arg3;
    return 3;
}

int64_t sub_140008748(void* arg1, void* arg2)
{
    /* tailcall */
    return sub_1400085c8(arg1, sub_140007cf4(arg2));
}

int64_t sub_14000876c(void* arg1, int64_t arg2, char arg3)
{
    int64_t rsi;
    rsi = arg3;
    std::ios_base::_Init(arg1);
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x48) = arg2;
    int32_t result = sub_1400076d0(arg1, 0x20);
    bool cond:0 = *(arg1 + 0x48);
    *(arg1 + 0x58) = result;
    
    if (!cond:0)
    {
        int32_t rcx_1 = *(arg1 + 0x14);
        result = (*(arg1 + 0x10) & 0x13) | 4;
        *(arg1 + 0x10) = result;
        int32_t rcx_2 = rcx_1 & result;
        
        if (rcx_2)
        {
            char const* const rbx_1;
            
            if (!(rcx_2 & 4))
            {
                rbx_1 = "ios_base::failbit set";
                
                if (!(rcx_2 & 2))
                    rbx_1 = "ios_base::eofbit set";
            }
            else
                rbx_1 = "ios_base::badbit set";
            
            void var_48;
            void var_38;
            std::ios_base::failure::failure(&var_38, rbx_1, std::make_error_code(&var_48, 1));
            sub_14000b810(&var_38, &data_14003e190);
            /* no return */
        }
    }
    
    if (!rsi)
        return result;
    
    return sub_14000a1a8(arg1);
}

uint64_t sub_14000882c(void* arg1, int32_t arg2)
{
    void var_a8;
    int64_t var_20 = __security_cookie ^ &var_a8;
    int32_t result_1 = -1;
    uint64_t result;
    
    if (arg2 != 0xffffffff)
    {
        int64_t* rax_2 = *(arg1 + 0x40);
        int32_t* rdx;
        int64_t r8_1;
        
        if (*rax_2)
        {
            rdx = *(arg1 + 0x58);
            r8_1 = *rdx;
        }
        
        if (*rax_2 && *rax_2 < r8_1 + *rax_2)
        {
            result = arg2;
            *rdx = r8_1 - 1;
            int64_t* rdx_1 = *(arg1 + 0x40);
            char* r8_2 = *rdx_1;
            *rdx_1 = &r8_2[1];
            *r8_2 = arg2;
        }
        else if (!*(arg1 + 0x80))
            result = result_1;
        else
        {
            int64_t* r8_3 = *(arg1 + 0x18);
            
            if (*r8_3 == arg1 + 0x70)
            {
                int64_t rcx_4 = *(arg1 + 0x88);
                int32_t rdx_2 = *(arg1 + 0x90);
                *r8_3 = rcx_4;
                **(arg1 + 0x38) = rcx_4;
                **(arg1 + 0x50) = rdx_2 - rcx_4;
            }
            
            int64_t* rcx_5 = *(arg1 + 0x68);
            char rcx_6;
            
            if (rcx_5)
            {
                char var_58 = arg2;
                void var_57;
                int64_t var_50;
                int64_t var_48;
                void var_40;
                int32_t rax_9 = (*(*rcx_5 + 0x38))(rcx_5, arg1 + 0x74, &var_58, &var_57, &var_48, 
                    &var_40, &var_20, &var_50);
                
                if (rax_9 < 0)
                    result = result_1;
                else if (rax_9 <= 1)
                {
                    int64_t r14_1 = var_50;
                    void* r14_2 = r14_1 - &var_40;
                    
                    if (r14_1 == &var_40)
                    {
                    label_140008982:
                        *(arg1 + 0x71) = 1;
                        result = arg2;
                        
                        if (var_48 == &var_58)
                            result = result_1;
                    }
                    else
                    {
                        if (r14_2 == fwrite(&var_40, 1, r14_2, *(arg1 + 0x80)))
                            goto label_140008982;
                        
                        result = result_1;
                    }
                }
                else
                {
                    if (rax_9 == 3)
                    {
                        rcx_6 = var_58;
                        goto label_1400088f0;
                    }
                    
                    result = result_1;
                }
            }
            else
            {
                rcx_6 = arg2;
            label_1400088f0:
                
                if (fputc(rcx_6, *(arg1 + 0x80)) != 0xffffffff)
                    result_1 = arg2;
                
                result = result_1;
            }
        }
    }
    else
        result = 0;
    
    __security_check_cookie(var_20 ^ &var_a8);
    return result;
}

int64_t sub_1400089b4() __pure
{
    return 0xffffffff;
}

uint64_t std::basic_filebuf<char,struct std::char_traits<char> >::pbackfail(void* arg1, int32_t arg2)
{
    int32_t rdi = arg2;
    void* rcx = **(arg1 + 0x38);
    
    if (!rcx || **(arg1 + 0x18) >= rcx || (arg2 != 0xffffffff && *(rcx - 1) != arg2))
    {
        int64_t* rdx = *(arg1 + 0x80);
        
        if (!rdx || rdi == 0xffffffff)
            return 0xffffffff;
        
        int32_t rax_5;
        
        if (!*(arg1 + 0x68))
            rax_5 = ungetc(rdi, rdx);
        
        if (*(arg1 + 0x68) || rax_5 == 0xffffffff)
        {
            int64_t* r8_1 = *(arg1 + 0x38);
            
            if (*r8_1 == arg1 + 0x70)
                return 0xffffffff;
            
            void** r9_1 = *(arg1 + 0x18);
            *(arg1 + 0x70) = rdi;
            void* rax_6 = *r9_1;
            
            if (rax_6 != arg1 + 0x70)
            {
                *(arg1 + 0x88) = rax_6;
                *(arg1 + 0x90) = **(arg1 + 0x50) + *r8_1;
            }
            
            *r9_1 = arg1 + 0x70;
            **(arg1 + 0x38) = arg1 + 0x70;
            **(arg1 + 0x50) = arg1 - (arg1 + 0x70) + 0x71;
        }
    }
    else
    {
        int32_t* rax_3 = *(arg1 + 0x50);
        *rax_3 += 1;
        int64_t* rax_4 = *(arg1 + 0x38);
        *rax_4 -= 1;
        
        if (rdi == 0xffffffff)
            rdi = 0;
    }
    
    return rdi;
}

int64_t* std::basic_filebuf<char,struct std::char_traits<char> >::seekoff(int64_t* arg1, int64_t* arg2, int64_t arg3, enum SET_FILE_POINTER_MOVE_METHOD arg4, int512_t arg5 @ zmm0)
{
    int64_t rsi = arg3;
    
    if (*arg1[7] == &arg1[0xe] && arg4 == FILE_CURRENT && !arg1[0xd])
        rsi -= 1;
    
    int64_t rax_7;
    
    if (!arg1[0x10])
    {
    label_140008b43:
        *arg2 = -1;
        arg2[1] = 0;
        rax_7 = 0;
    }
    else
    {
        if (!sub_1400082c4(arg1, arg5))
            goto label_140008b43;
        
        int32_t rax_2;
        
        if (rsi || arg4 != FILE_CURRENT)
            rax_2 = j_common_fseek(arg1[0x10], rsi, arg4);
        
        if ((rsi || arg4 != FILE_CURRENT) && rax_2)
            goto label_140008b43;
        
        int64_t arg_8;
        
        if (fgetpos(arg1[0x10], &arg_8))
            goto label_140008b43;
        
        int64_t* rax_4 = arg1[3];
        
        if (*rax_4 == &arg1[0xe])
        {
            int64_t rcx_2 = arg1[0x11];
            int32_t rdx_2 = arg1[0x12];
            *rax_4 = rcx_2;
            *arg1[7] = rcx_2;
            *arg1[0xa] = rdx_2 - rcx_2;
        }
        
        rax_7 = *(arg1 + 0x74);
        int64_t rcx_3 = arg_8;
        arg2[1] = 0;
        *arg2 = rcx_3;
    }
    
    arg2[2] = rax_7;
    return arg2;
}

int64_t* sub_140008b68(int64_t, int64_t* arg2)
{
    *arg2 = -1;
    arg2[1] = 0;
    arg2[2] = 0;
    return arg2;
}

int64_t* std::basic_filebuf<char,struct std::char_traits<char> >::seekpos(int64_t* arg1, int64_t* arg2, void* arg3, int512_t arg4 @ zmm0)
{
    bool cond:0 = !arg1[0x10];
    int64_t arg_8 = *(arg3 + 8) + *arg3;
    
    if (cond:0)
    {
    label_140008c14:
        *arg2 = -1;
        arg2[1] = 0;
        arg2[2] = 0;
    }
    else
    {
        if (!sub_1400082c4(arg1, arg4))
            goto label_140008c14;
        
        if (fsetpos(arg1[0x10], &arg_8))
            goto label_140008c14;
        
        int64_t* r8 = arg1[3];
        int64_t rcx_1 = *(arg3 + 0x10);
        *(arg1 + 0x74) = rcx_1;
        
        if (*r8 == &arg1[0xe])
        {
            int64_t rcx_2 = arg1[0x11];
            int32_t rdx_1 = arg1[0x12];
            *r8 = rcx_2;
            *arg1[7] = rcx_2;
            *arg1[0xa] = rdx_1 - rcx_2;
            rcx_1 = *(arg1 + 0x74);
        }
        
        int64_t rax_7 = arg_8;
        arg2[1] = 0;
        *arg2 = rax_7;
        arg2[2] = rcx_1;
    }
    
    return arg2;
}

void* const std::basic_filebuf<char,struct std::char_traits<char> >::setbuf(void* arg1, int64_t arg2, int64_t arg3)
{
    int64_t rcx = *(arg1 + 0x80);
    
    if (rcx)
    {
        int32_t r8;
        
        r8 = arg2 || arg3 ? 0 : arg3 + 4;
        
        int32_t rax_1 = setvbuf(rcx, arg2, r8, arg3);
        
        if (!rax_1)
        {
            std::basic_filebuf<char,struct std::char_traits<char> >::_Init(arg1, *(arg1 + 0x80), 
                rax_1 + 1);
            return arg1;
        }
    }
    
    return nullptr;
}

int64_t sub_140008c8c(int64_t arg1) __pure
{
    return arg1;
}

int64_t sub_140008c90() __pure
{
    return 0;
}

uint64_t sub_140008c94(int64_t* arg1, int512_t arg2 @ zmm0)
{
    int32_t rdi_1;
    
    if (!arg1[0x10])
        rdi_1 = 0;
    else
    {
        rdi_1 = -1;
        
        if ((*(*arg1 + 0x18))(arg2, 0xffffffff) == 0xffffffff)
            rdi_1 = 0;
        else if (fflush(arg1[0x10]) >= 0)
            rdi_1 = 0;
    }
    
    return rdi_1;
}

uint64_t sub_140008ce0(void* arg1)
{
    int64_t var_40 = -2;
    void var_a8;
    int64_t rax_1 = __security_cookie ^ &var_a8;
    int64_t rcx = **(arg1 + 0x38);
    int32_t* rdx_1;
    int64_t r8_1;
    
    if (rcx)
    {
        rdx_1 = *(arg1 + 0x50);
        r8_1 = *rdx_1;
    }
    
    uint64_t result;
    
    if (rcx && rcx < rcx + r8_1)
    {
        *rdx_1 = r8_1 - 1;
        int64_t* rcx_1 = *(arg1 + 0x38);
        char* rdx_2 = *rcx_1;
        *rcx_1 = &rdx_2[1];
        result = *rdx_2;
    }
    else if (*(arg1 + 0x80))
    {
        int64_t* r8_2 = *(arg1 + 0x18);
        
        if (*r8_2 == arg1 + 0x70)
        {
            int32_t rdx_3 = *(arg1 + 0x90);
            int64_t rcx_2 = *(arg1 + 0x88);
            *r8_2 = rcx_2;
            **(arg1 + 0x38) = rcx_2;
            **(arg1 + 0x50) = rdx_3 - rcx_2;
        }
        
        int64_t* rcx_3 = *(arg1 + 0x80);
        uint32_t result_1;
        
        if (*(arg1 + 0x68))
        {
            void* var_28_1 = nullptr;
            int64_t var_20_1 = 0xf;
            char var_38 = 0;
            int32_t rax_10 = fgetc(rcx_3);
            result_1 = -1;
            
            while (true)
            {
                char rdx_9 = rax_10;
                
                if (rax_10 == 0xffffffff)
                    break;
                
                void* rcx_4 = var_28_1;
                
                if (rcx_4 >= var_20_1)
                    sub_140007b98(&var_38, 1, 0, rdx_9);
                else
                {
                    var_28_1 = rcx_4 + 1;
                    char* rax_12 = &var_38;
                    
                    if (var_20_1 >= 0x10)
                        rax_12 = var_38;
                    
                    *(rax_12 + rcx_4) = rdx_9;
                    *(rax_12 + rcx_4 + 1) = 0;
                }
                
                int64_t* r10_1 = *(arg1 + 0x68);
                char* rcx_6 = &var_38;
                
                if (var_20_1 >= 0x10)
                    rcx_6 = var_38;
                
                char* r8_3 = &var_38;
                
                if (var_20_1 >= 0x10)
                    r8_3 = var_38;
                
                char result_2;
                void var_57;
                int64_t var_50;
                int64_t var_48;
                int32_t rax_15 = (*(*r10_1 + 0x30))(r10_1, arg1 + 0x74, r8_3, var_28_1 + rcx_6, 
                    &var_50, &result_2, &var_57, &var_48);
                
                if (rax_15 < 0)
                    break;
                
                if (rax_15 > 1)
                {
                    if (rax_15 == 3)
                    {
                        char* rax_17 = &var_38;
                        
                        if (var_20_1 >= 0x10)
                            rax_17 = var_38;
                        
                        result_1 = *rax_17;
                    }
                    
                    break;
                }
                
                char* rax_16 = &var_38;
                
                if (var_48 != &result_2)
                {
                    if (var_20_1 >= 0x10)
                        rax_16 = var_38;
                    
                    int64_t rcx_10 = var_50;
                    void* rdi_3 = var_28_1 - rcx_10 + rax_16;
                    
                    if (rdi_3 > 0)
                    {
                        while (true)
                        {
                            rdi_3 -= 1;
                            ungetc(*(rdi_3 + rcx_10), *(arg1 + 0x80));
                            
                            if (rdi_3 <= 0)
                                break;
                            
                            rcx_10 = var_50;
                        }
                    }
                    
                    result_1 = result_2;
                    break;
                }
                
                if (var_20_1 >= 0x10)
                    rax_16 = var_38;
                
                void* rdx_7 = var_50 - rax_16;
                
                if (var_28_1 < rdx_7)
                    rdx_7 = var_28_1;
                
                int128_t* rcx_8 = &var_38;
                
                if (var_20_1 >= 0x10)
                    rcx_8 = var_38;
                
                void* r8_5 = var_28_1 - rdx_7;
                var_28_1 = r8_5;
                sub_14000bee0(rcx_8, rdx_7 + rcx_8, r8_5 + 1);
                rax_10 = fgetc(*(arg1 + 0x80));
            }
            
            if (var_20_1 >= 0x10)
            {
                void* rcx_12 = var_38;
                void* rax_18 = rcx_12;
                
                if (var_20_1 + 1 >= 0x1000)
                {
                    rcx_12 = *(rcx_12 - 8);
                    
                    if (rax_18 - rcx_12 - 8 > 0x1f)
                    {
                        sub_14000e928();
                        /* no return */
                    }
                }
                
                j_j_free(rcx_12);
            }
        }
        else
        {
            int32_t rax_9 = fgetc(rcx_3);
            result_1 = -1;
            
            if (rax_9 != 0xffffffff)
                result_1 = rax_9;
        }
        
        result = result_1;
    }
    else
        result = 0xffffffff;
    
    __security_check_cookie(rax_1 ^ &var_a8);
    return result;
}

uint64_t sub_140008f9c(int64_t* arg1)
{
    uint32_t rdx = -1;
    
    if ((*(*arg1 + 0x30))() != 0xffffffff)
    {
        int32_t* rax_3 = arg1[0xa];
        *rax_3 -= 1;
        int64_t* rcx = arg1[7];
        char* rdx_1 = *rcx;
        *rcx = &rdx_1[1];
        rdx = *rdx_1;
    }
    
    return rdx;
}

uint64_t sub_140008fd8(int64_t* arg1, void* arg2, int512_t arg3 @ zmm0)
{
    char* r8 = *arg1[7];
    
    if (r8)
    {
        arg2 = &r8[*arg1[0xa]];
        
        if (r8 < arg2)
            return *r8;
    }
    
    int32_t rax_5 = (*(*arg1 + 0x38))(arg3, arg2, r8);
    
    if (rax_5 == 0xffffffff)
        return 0xffffffff;
    
    (*(*arg1 + 0x20))(arg1, rax_5);
    return rax_5;
}

int64_t std::basic_filebuf<char,struct std::char_traits<char> >::xsgetn(int64_t* arg1, int128_t* arg2, int64_t arg3)
{
    int64_t i_2 = arg3;
    uint128_t* r14 = arg2;
    
    if (arg3 <= 0)
        return 0;
    
    if (arg1[0xd])
        return sub_140009184(arg1, arg2, arg3);
    
    int64_t i = i_2;
    int128_t* rdx = *arg1[7];
    int32_t i_5;
    
    if (!rdx)
        i_5 = 0;
    else
        i_5 = *arg1[0xa];
    
    int64_t i_4 = i_5;
    
    if (i_5)
    {
        int64_t i_3 = i_2;
        
        if (i_4 < i_2)
            i_3 = i_4;
        
        sub_14000bee0(r14, rdx, i_3);
        int32_t* rax_3 = arg1[0xa];
        i -= i_3;
        r14 += i_3;
        arg3 = i;
        *rax_3 -= i_3;
        int64_t* rcx_1 = arg1[7];
        *rcx_1 += i_3;
    }
    
    if (arg1[0x10])
    {
        int64_t* r9_1 = arg1[3];
        
        if (*r9_1 == &arg1[0xe])
        {
            int64_t rcx_2 = arg1[0x11];
            int32_t rdx_1 = arg1[0x12];
            *r9_1 = rcx_2;
            *arg1[7] = rcx_2;
            *arg1[0xa] = rdx_1 - rcx_2;
        }
        
        int64_t i_1 = arg3;
        
        if (arg3 > 0xfff)
        {
            do
            {
                uint64_t rax_8 = fread(r14, 1, 0xfff, arg1[0x10]);
                i -= rax_8;
                r14 += rax_8;
                i_1 = i;
                
                if (rax_8 != 0xfff)
                    return i_2 - i;
            } while (i > 0xfff);
        }
        
        arg3 = i_1;
        
        if (i_1)
            arg3 = i_1 - fread(r14, 1, i, arg1[0x10]);
    }
    
    return i_2 - arg3;
}

int64_t sub_140009184(int64_t* arg1, int128_t* arg2, int64_t arg3)
{
    int64_t i = arg3;
    int128_t* r14 = arg2;
    
    if (arg3 > 0)
    {
        do
        {
            int128_t* rdx = *arg1[7];
            int32_t i_3;
            
            if (!rdx)
                i_3 = 0;
            else
                i_3 = *arg1[0xa];
            
            int64_t i_2 = i_3;
            int64_t i_1;
            
            if (i_3 <= 0)
            {
                int32_t rax_7 = (*(*arg1 + 0x38))(arg1);
                
                if (rax_7 == 0xffffffff)
                    break;
                
                *r14 = rax_7;
                i -= 1;
                i_1 = 1;
            }
            else
            {
                i_1 = i;
                
                if (i >= i_2)
                    i_1 = i_2;
                
                sub_14000bee0(r14, rdx, i_1);
                int32_t* rax_3 = arg1[0xa];
                i -= i_1;
                *rax_3 -= i_1;
                int64_t* rcx_1 = arg1[7];
                *rcx_1 += i_1;
            }
            
            r14 += i_1;
        } while (i > 0);
    }
    
    return arg3 - i;
}

int64_t std::basic_filebuf<char,struct std::char_traits<char> >::xsputn(int64_t* arg1, int128_t* arg2, int64_t arg3)
{
    int64_t rbx = arg3;
    int128_t* r14 = arg2;
    
    if (arg1[0xd])
        return sub_140009304(arg1, arg2, arg3);
    
    int64_t rsi_1 = rbx;
    int128_t* r9_1 = *arg1[8];
    int32_t rcx;
    
    if (!r9_1)
        rcx = 0;
    else
        rcx = *arg1[0xb];
    
    int64_t rbp_1 = rcx;
    
    if (rbx > 0)
    {
        if (rcx > 0)
        {
            if (rbx < rbp_1)
                rbp_1 = rbx;
            
            sub_14000bee0(r9_1, arg2, rbp_1);
            int32_t* rax_3 = arg1[0xb];
            r14 += rbp_1;
            rbx -= rbp_1;
            *rax_3 -= rbp_1;
            int64_t* rcx_2 = arg1[8];
            *rcx_2 += rbp_1;
        }
        
        if (rbx > 0)
        {
            int64_t r9_2 = arg1[0x10];
            
            if (r9_2)
                rbx -= fwrite(r14, 1, rbx, r9_2);
        }
    }
    
    return rsi_1 - rbx;
}

int64_t sub_140009304(int64_t* arg1, int128_t* arg2, int64_t arg3)
{
    int64_t i = arg3;
    int128_t* r14 = arg2;
    
    if (arg3 > 0)
    {
        do
        {
            int128_t* r9_1 = *arg1[8];
            int32_t i_3;
            
            if (!r9_1)
                i_3 = 0;
            else
                i_3 = *arg1[0xb];
            
            int64_t i_2 = i_3;
            int64_t i_1;
            
            if (i_3 <= 0)
            {
                if ((*(*arg1 + 0x18))(arg1, *r14) == 0xffffffff)
                    break;
                
                i -= 1;
                i_1 = 1;
            }
            else
            {
                i_1 = i;
                
                if (i >= i_2)
                    i_1 = i_2;
                
                sub_14000bee0(r9_1, r14, i_1);
                int32_t* rax_3 = arg1[0xb];
                i -= i_1;
                *rax_3 -= i_1;
                int64_t* rcx_1 = arg1[8];
                *rcx_1 += i_1;
            }
            
            r14 += i_1;
        } while (i > 0);
    }
    
    return arg3 - i;
}

int64_t std::_Init_locks::_Init_locks(int64_t arg1)
{
    int32_t temp0 = data_140040d80;
    data_140040d80 += 1;
    
    if (temp0 == 0xffffffff)
    {
        CRITICAL_SECTION* rbx_1 = &data_140042030;
        int64_t i_1 = 8;
        int64_t i;
        
        do
        {
            sub_14000a368(rbx_1);
            rbx_1 = &rbx_1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
    
    return arg1;
}

int32_t* std::_Lockit::_Lockit(int32_t* arg1, int32_t arg2)
{
    *arg1 = arg2;
    
    if (!arg2)
        _lock_locales();
    else if (arg2 < 8)
        EnterCriticalSection(&data_140042030 + arg2 * 0x28);
    
    return arg1;
}

int64_t sub_14000944c()
{
    int32_t result = data_140040d80;
    data_140040d80 -= 1;
    
    if (result - 1 < 0)
    {
        CRITICAL_SECTION* lpCriticalSection = &data_140042030;
        int64_t i_1 = 8;
        int64_t i;
        
        do
        {
            result = DeleteCriticalSection(lpCriticalSection);
            lpCriticalSection = &lpCriticalSection[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
    
    return result;
}

int64_t sub_140009490(int32_t* arg1)
{
    int64_t result = *arg1;
    
    if (!result)
        /* tailcall */
        return sub_1400118b8();
    
    if (result >= 8)
        return result;
    
    return LeaveCriticalSection(&data_140042030 + result * 0x28);
}

int64_t* std::_Yarn<char>::operator=(int64_t* arg1, int128_t* arg2)
{
    int64_t rcx = *arg1;
    
    if (rcx != arg2)
    {
        if (rcx)
            free(rcx);
        
        *arg1 = 0;
        
        if (arg2)
        {
            char* rbx_1 = arg2;
            
            if (*arg2)
            {
                do
                    rbx_1 = &rbx_1[1];
                 while (*rbx_1);
            }
            
            void* rbx_2 = rbx_1 - arg2;
            int128_t* rax_1 = j__malloc_base(rbx_2 + 1);
            *arg1 = rax_1;
            
            if (rax_1)
                sub_14000bee0(rax_1, arg2, rbx_2 + 1);
        }
    }
    
    return arg1;
}

struct std::_Facet_base::VTable** std::locale::_Locimp::`scalar deleting destructor'(struct std::locale::facet::std::locale::_Locimp::VTable** arg1, char arg2)
{
    int64_t var_18 = -2;
    struct std::_Facet_base::VTable** result = arg1;
    *arg1 = &std::locale::_Locimp::`vftable'{for `std::locale::facet'};
    sub_140009694(arg1);
    int64_t rcx = result[5];
    
    if (rcx)
        free(rcx);
    
    result[5] = 0;
    *result = &std::_Facet_base::`vftable';
    
    if (arg2 & 1)
        j_j_free(result);
    
    return result;
}

int64_t* std::_Facet_Register(int64_t arg1)
{
    int64_t* result = sub_14000a804(0x10);
    int64_t* result_1 = result;
    
    if (result)
    {
        *result = data_1400421c0;
        result[1] = arg1;
    }
    
    data_1400421c0 = result;
    return result;
}

int64_t sub_1400095e0()
{
    return data_1400421c8;
}

int64_t* sub_1400095e8(char arg1)
{
    int64_t var_18 = -2;
    int64_t rdi;
    rdi = arg1;
    void arg_8;
    std::_Lockit::_Lockit(&arg_8, 0);
    int64_t* result = data_1400421c8;
    
    if (result)
    {
        if (rdi)
            (*(*result + 8))(result);
        
        sub_140009490(&arg_8);
        return result;
    }
    
    struct std::locale::facet::std::locale::_Locimp::VTable** rax_1 =
        std::locale::_Locimp::_New_Locimp(0);
    std::locale::_Setgloballocale(rax_1);
    rax_1[4] = 0x3f;
    std::_Yarn<char>::operator=(&rax_1[5], &data_14002b0b4);
    data_140042178 = rax_1;
    (*rax_1)->vFunc_1(rax_1);
    /* no return */
}

int64_t sub_140009694(void* arg1)
{
    void arg_8;
    std::_Lockit::_Lockit(&arg_8, 0);
    int64_t i = *(arg1 + 0x18);
    
    while (i)
    {
        i -= 1;
        int64_t* rcx_1 = *(*(arg1 + 0x10) + (i << 3));
        
        if (rcx_1)
        {
            int64_t* rax_4 = (*(*rcx_1 + 0x10))();
            
            if (rax_4)
                (**rax_4)(rax_4, 1, rax_4);
        }
    }
    
    free(*(arg1 + 0x10));
    return sub_140009490(&arg_8);
}

int64_t std::_Locinfo::_Locinfo_ctor(void* arg1, int128_t* arg2)
{
    int128_t* rbx = arg2;
    char* rax = setlocale(0, 0);
    
    if (!rax)
        rax = &data_140029d68;
    
    std::_Yarn<char>::operator=(arg1 + 0x48, rax);
    
    if (rbx)
        rbx = setlocale(0, rbx);
    
    if (!rbx)
        rbx = &data_14002b0b0;
    
    /* tailcall */
    return std::_Yarn<char>::operator=(arg1 + 0x58, rbx);
}

void std::_Locinfo::_Locinfo_dtor(void* arg1)
{
    int64_t rdx = *(arg1 + 0x48);
    
    if (rdx)
        setlocale(0, rdx);
}

struct std::locale::facet::std::locale::_Locimp::VTable** std::locale::_Locimp::_New_Locimp(char arg1)
{
    int64_t rdi;
    rdi = arg1;
    struct std::locale::facet::std::locale::_Locimp::VTable** result = sub_14000a804(0x38);
    struct std::locale::facet::std::locale::_Locimp::VTable** result_1 = result;
    
    if (!result)
        return nullptr;
    
    result[1] = 1;
    __builtin_memset(&result[2], 0, 0x14);
    *result = &std::locale::_Locimp::`vftable'{for `std::locale::facet'};
    *(result + 0x24) = rdi;
    result[5] = 0;
    result[6] = 0;
    std::_Yarn<char>::operator=(&result[5], &data_14002b0b0);
    return result;
}

void std::locale::_Setgloballocale(int64_t arg1)
{
    if (!data_1400421d0)
    {
        data_1400421d0 = 1;
        _Atexit(tidy_global);
    }
    
    data_1400421c8 = arg1;
}

void sub_14000983c(int64_t* arg1)
{
    int64_t* rcx = *arg1;
    
    if (!rcx)
        return;
    
    int64_t* rax = (*(*rcx + 0x10))();
    
    if (rax)
        (**rax)(rax, 1, rax);
}

int64_t tidy_global()
{
    void arg_8;
    std::_Lockit::_Lockit(&arg_8, 0);
    sub_14000983c(&data_1400421c8);
    data_1400421c8 = 0;
    return sub_140009490(&arg_8);
}

int32_t* _Getctype(int32_t* arg1)
{
    *arg1 = ___lc_codepage_func();
    int64_t rax_1 = j__calloc_base(0x100, 2);
    *(arg1 + 8) = rax_1;
    
    if (!rax_1)
    {
        int64_t rax_3 = __pctype_func();
        arg1[4] = 0;
        *(arg1 + 8) = rax_3;
    }
    else
    {
        int128_t* rax_2 = __pctype_func();
        int128_t* rcx = *(arg1 + 8);
        int64_t i_1 = 4;
        int64_t i;
        
        do
        {
            *rcx = *rax_2;
            rcx[1] = rax_2[1];
            rcx[2] = rax_2[2];
            rcx[3] = rax_2[3];
            rcx[4] = rax_2[4];
            rcx[5] = rax_2[5];
            rcx[6] = rax_2[6];
            rcx = &rcx[8];
            int128_t zmm1 = rax_2[7];
            rax_2 = &rax_2[8];
            rcx[-1] = zmm1;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        arg1[4] = 1;
    }
    
    int64_t rcx_1 = *(___lc_locale_name_func() + 8);
    *(arg1 + 0x18) = rcx_1;
    
    if (rcx_1)
        *(arg1 + 0x18) = sub_140011de0(rcx_1);
    
    return arg1;
}

uint32_t _Tolower(int32_t arg1, uint32_t* arg2, char arg3)
{
    int64_t rbx = arg1;
    uint32_t rbp;
    int64_t rsi;
    
    if (arg2)
    {
        rsi = *(arg2 + 0x18);
        rbp = *arg2;
    }
    else
    {
        rsi = *(___lc_locale_name_func() + 0x10);
        rbp = ___lc_codepage_func();
    }
    
    if (rsi)
    {
        int64_t rcx_1;
        
        if (rbx >= 0x100)
        {
            rcx_1 = rbx;
        label_1400099e1:
            int32_t rdx_1;
            char rdi_2;
            
            if (arg2)
            {
                rdx_1 = *(*(arg2 + 8) + (rcx_1 >> 8 << 1)) >> 0xf & 1;
                rdi_2 = rbx >> 8;
            }
            else
            {
            label_1400099e5:
                rdi_2 = rbx >> 8;
                rdx_1 = *(__pctype_func() + (rdi_2 << 1)) & 0x8000;
            }
            
            char arg_10;
            int32_t r9_1;
            char arg_11;
            
            if (!rdx_1)
            {
                arg_10 = rbx;
                r9_1 = 1;
                arg_11 = 0;
            }
            else
            {
                arg_10 = rdi_2;
                r9_1 = 2;
                arg_11 = rbx;
                char arg_12 = 0;
            }
            char result_1;
            int32_t rax_8 = __crtLCMapStringA(rsi, 0x100, &arg_10, r9_1, &result_1, 3, rbp, 1);
            
            if (rax_8)
            {
                uint32_t result = result_1;
                
                if (rax_8 == 1)
                    return result;
                
                return result << 8 | arg3;
            }
        }
        else if (arg2)
        {
            rcx_1 = rbx;
            
            if (*(*(arg2 + 8) + (rbx << 1)) & 1)
                goto label_1400099e1;
        }
        else if (isupper(rbx))
            goto label_1400099e5;
    }
    else if (rbx - 0x41 <= 0x19)
        rbx = rbx + 0x20;
    
    return rbx;
}

uint32_t _Toupper(int32_t arg1, uint32_t* arg2, char arg3)
{
    int64_t rbx = arg1;
    int64_t rsi;
    uint32_t r14;
    
    if (arg2)
    {
        rsi = *(arg2 + 0x18);
        r14 = *arg2;
    }
    else
    {
        rsi = *(___lc_locale_name_func() + 0x10);
        r14 = ___lc_codepage_func();
    }
    
    if (rsi)
    {
        int32_t rbp_1 = 2;
        int64_t rcx_1;
        
        if (rbx >= 0x100)
        {
            rcx_1 = rbx;
        label_140009b1e:
            int32_t rdx_1;
            char rdi_2;
            
            if (arg2)
            {
                rdx_1 = *(*(arg2 + 8) + (rcx_1 >> 8 << 1)) >> 0xf & 1;
                rdi_2 = rbx >> 8;
            }
            else
            {
            label_140009b22:
                rdi_2 = rbx >> 8;
                rdx_1 = *(__pctype_func() + (rdi_2 << 1)) & 0x8000;
            }
            
            char arg_10;
            char arg_11;
            
            if (!rdx_1)
            {
                arg_10 = rbx;
                rbp_1 = 1;
                arg_11 = 0;
            }
            else
            {
                arg_10 = rdi_2;
                arg_11 = rbx;
                char arg_12 = 0;
            }
            char result_1;
            int32_t rax_8 = __crtLCMapStringA(rsi, 0x200, &arg_10, rbp_1, &result_1, 3, r14, 1);
            
            if (rax_8)
            {
                uint32_t result = result_1;
                
                if (rax_8 == 1)
                    return result;
                
                return result << 8 | arg3;
            }
        }
        else if (arg2)
        {
            rcx_1 = rbx;
            
            if (*(*(arg2 + 8) + (rbx << 1)) & 2)
                goto label_140009b1e;
        }
        else if (islower(rbx))
            goto label_140009b22;
    }
    else if (rbx - 0x61 <= 0x19)
        rbx = rbx - 0x20;
    
    return rbx;
}

int64_t initialize_pointers()
{
    HMODULE hModule = GetModuleHandleW(u"kernel32.dll");
    data_1400421e0 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie;
    data_1400421e8 = GetProcAddress(hModule, "FlsFree") ^ __security_cookie;
    data_1400421f0 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie;
    data_1400421f8 = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie;
    data_140042200 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie;
    data_140042208 = GetProcAddress(hModule, "InitOnceExecuteOnce") ^ __security_cookie;
    data_140042210 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie;
    data_140042218 = GetProcAddress(hModule, "CreateSemaphoreW") ^ __security_cookie;
    data_140042220 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie;
    data_140042228 = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie;
    data_140042230 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie;
    data_140042238 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie;
    data_140042240 = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie;
    data_140042248 = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie;
    data_140042250 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie;
    data_140042258 = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie;
    data_140042260 = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie;
    data_140042268 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie;
    data_140042270 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie;
    data_140042278 = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie;
    data_140042280 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie;
    data_140042288 = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie;
    data_140042290 = GetProcAddress(hModule, "GetFileInformationByHandleEx") ^ __security_cookie;
    data_140042298 = GetProcAddress(hModule, "SetFileInformationByHandle") ^ __security_cookie;
    data_1400422a0 = GetProcAddress(hModule, "GetSystemTimePreciseAsFileTime") ^ __security_cookie;
    data_1400422a8 = GetProcAddress(hModule, "InitializeConditionVariable") ^ __security_cookie;
    data_1400422b0 = GetProcAddress(hModule, "WakeConditionVariable") ^ __security_cookie;
    data_1400422b8 = GetProcAddress(hModule, "WakeAllConditionVariable") ^ __security_cookie;
    data_1400422c0 = GetProcAddress(hModule, "SleepConditionVariableCS") ^ __security_cookie;
    data_1400422c8 = GetProcAddress(hModule, "InitializeSRWLock") ^ __security_cookie;
    data_1400422d0 = GetProcAddress(hModule, "AcquireSRWLockExclusive") ^ __security_cookie;
    data_1400422d8 = GetProcAddress(hModule, "TryAcquireSRWLockExclusive") ^ __security_cookie;
    data_1400422e0 = GetProcAddress(hModule, "ReleaseSRWLockExclusive") ^ __security_cookie;
    data_1400422e8 = GetProcAddress(hModule, "SleepConditionVariableSRW") ^ __security_cookie;
    data_1400422f0 = GetProcAddress(hModule, "CreateThreadpoolWork") ^ __security_cookie;
    data_1400422f8 = GetProcAddress(hModule, "SubmitThreadpoolWork") ^ __security_cookie;
    data_140042300 = GetProcAddress(hModule, "CloseThreadpoolWork") ^ __security_cookie;
    data_140042308 = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie;
    data_140042310 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie;
    data_140042318 = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie;
    return 0;
}

uint64_t sub_14000a0ac(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t rax_1 = data_140042208 ^ __security_cookie;
    
    if (rax_1)
        return rax_1();
    
    int64_t i = 0;
    
    if (0 == *arg1)
        *arg1 = 1;
    else
        i = *arg1;
    
    int64_t rdi_1 = 2;
    
    while (i != 2)
    {
        if (!i)
        {
            int32_t rsi_1 = 1;
            
            if (!arg2(arg1, arg3, arg4))
            {
                rdi_1 = 0;
                rsi_1 = 0;
            }
            
            int64_t temp0_1 = *arg1;
            *arg1 = rdi_1;
            
            if (temp0_1 == 1)
                return rsi_1;
            
            SetLastError(ERROR_INVALID_DATA);
            return 0;
        }
        
        if (i != 1)
        {
            SetLastError(ERROR_INVALID_DATA);
            return 0;
        }
        
        SwitchToThread();
        i = 0;
        
        if (0 == *arg1)
            *arg1 = 1;
        else
            i = *arg1;
    }
    
    return 1;
}

int64_t sub_14000a178(CRITICAL_SECTION* arg1, uint32_t arg2)
{
    int64_t rax_1 = data_140042200 ^ __security_cookie;
    
    if (rax_1)
        /* tailcall */
        return rax_1();
    
    InitializeCriticalSectionAndSpinCount(arg1, arg2);
    return 1;
}

int64_t sub_14000a1a8(void* arg1)
{
    void arg_8;
    std::_Lockit::_Lockit(&arg_8, 2);
    *(arg1 + 8) = 1;
    int64_t i_2 = 1;
    int64_t i_1;
    int64_t i;
    
    do
    {
        int64_t rax_1 = *((i_2 << 3) + 0x140042330);
        i_1 = i_2;
        
        if (!rax_1)
            break;
        
        if (rax_1 == arg1)
            break;
        
        i = i_2 + 1;
        *(arg1 + 8) = i;
        i_2 = i;
        i_1 = i;
    } while (i < 8);
    *(i_1 + &data_140042380) += 1;
    *((i_1 << 3) + 0x140042330) = arg1;
    return sub_140009490(&arg_8);
}

int64_t sub_14000a220(void* arg1)
{
    int64_t result = *(arg1 + 8);
    
    if (result)
        *(result + &data_140042380) -= 1;
    
    if (!result || *(result + &data_140042380) <= 0)
    {
        result = sub_14000a298(arg1);
        void* rbx_1 = *(arg1 + 0x40);
        
        if (rbx_1)
        {
            int64_t* rcx_1 = *(rbx_1 + 8);
            
            if (rcx_1)
            {
                int64_t* rax_2 = (*(*rcx_1 + 0x10))();
                
                if (rax_2)
                    (**rax_2)(rax_2, 1);
            }
            
            return j_j_free(rbx_1);
        }
    }
    
    return result;
}

void sub_14000a298(void* arg1)
{
    int64_t var_18 = -2;
    
    for (void** i = *(arg1 + 0x38); i; i = *i)
        i[2](0, arg1, i[1]);
    
    int64_t* i_3 = *(arg1 + 0x30);
    
    if (i_3)
    {
        int64_t* i_1;
        
        do
        {
            i_1 = *i_3;
            j_j_free(i_3);
            i_3 = i_1;
        } while (i_1);
    }
    
    *(arg1 + 0x30) = 0;
    int64_t* i_4 = *(arg1 + 0x38);
    
    if (i_4)
    {
        int64_t* i_2;
        
        do
        {
            i_2 = *i_4;
            j_j_free(i_4);
            i_4 = i_2;
        } while (i_2);
    }
    
    *(arg1 + 0x38) = 0;
}

int64_t _Atexit(int64_t arg1)
{
    if (!data_140040de8)
    {
        abort();
        /* no return */
    }
    
    int64_t result = EncodePointer(arg1);
    int64_t rcx_1 = data_140040de8 - 1;
    data_140040de8 = rcx_1;
    *(&data_1400423e0 + (rcx_1 << 3)) = result;
    return result;
}

void DeleteCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return DeleteCriticalSection(lpCriticalSection);
}

int64_t sub_14000a368(CRITICAL_SECTION* arg1)
{
    /* tailcall */
    return sub_14000a178(arg1, 0xfa0);
}

void EnterCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return EnterCriticalSection(lpCriticalSection);
}

void LeaveCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return LeaveCriticalSection(lpCriticalSection);
}

int32_t __crtLCMapStringA(int64_t arg1, int64_t arg2, char* arg3, int32_t arg4, int64_t arg5, int32_t arg6, uint32_t arg7, int32_t arg8)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    void var_68;
    void* rsp_1 = &var_68;
    int64_t __saved_rbx_1;
    int64_t __saved_rbx = __saved_rbx_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_r13_1;
    int64_t __saved_r13 = __saved_r13_1;
    int64_t var_28 = __security_cookie ^ &var_28;
    int64_t rbx = arg4;
    int32_t r15 = arg2;
    
    if (arg4 > 0)
    {
        arg2 = rbx;
        int32_t rax_2 = __strncnt(arg3, arg2);
        bool cond:0_1 = rax_2 < rbx;
        rbx = rax_2 + 1;
        
        if (!cond:0_1)
            rbx = rax_2;
    }
    
    int32_t temp0 = arg8;
    arg8 = -(arg8);
    int32_t result;
    int64_t rdx_3;
    result = MultiByteToWideChar(arg7, ((arg2 - arg2) & 8) + 1, arg3, rbx, nullptr, 0);
    int64_t result_1 = result;
    
    if (result)
    {
        int64_t rax_4 = result_1 * 2;
        uint64_t rdx_5 = (rdx_3 - rdx_3) & (rax_4 + 0x10);
        int64_t rbx_1;
        int32_t* rsi;
        
        if (!rdx_5)
        {
            rsi = nullptr;
        label_14000a47d:
            
            if (!rsi)
                rbx_1 = 0;
            else
            {
                *(rsp_1 + 0x28) = result_1;
                *(rsp_1 + 0x20) = rsi;
                
                if (!MultiByteToWideChar(/* nop */))
                    rbx_1 = 0;
                else
                {
                    *(rsp_1 + 0x28) = 0;
                    *(rsp_1 + 0x20) = 0;
                    int512_t zmm1;
                    int32_t rax_9 = sub_14000a700(arg1, r15, rsi, result_1, zmm1);
                    rbx_1 = rax_9;
                    
                    if (!rax_9)
                        rbx_1 = 0;
                    else if (!(0x400 & r15))
                    {
                        int64_t rcx_8 = rbx_1 * 2;
                        uint64_t rcx_10 = (rcx_8 - rcx_8) & (rcx_8 + 0x10);
                        int32_t* rdi_1;
                        
                        if (!rcx_10)
                        {
                            rdi_1 = nullptr;
                        label_14000a57d:
                            
                            if (rdi_1)
                            {
                                *(rsp_1 + 0x28) = rbx_1;
                                *(rsp_1 + 0x20) = rdi_1;
                                
                                if (sub_14000a700(arg1, r15, rsi, result_1, zmm1))
                                {
                                    *(rsp_1 + 0x38) = 0;
                                    *(rsp_1 + 0x30) = 0;
                                    
                                    if (arg6)
                                    {
                                        *(rsp_1 + 0x28) = arg6;
                                        *(rsp_1 + 0x20) = arg5;
                                    }
                                    else
                                    {
                                        *(rsp_1 + 0x28) = 0;
                                        *(rsp_1 + 0x20) = 0;
                                    }
                                    
                                    int32_t rax_19 = WideCharToMultiByte();
                                    rbx_1 = rax_19;
                                    
                                    if (rax_19 || rdi_1)
                                        goto label_14000a5ea;
                                }
                                else if (rdi_1)
                                {
                                label_14000a5ea:
                                    
                                    if (rdi_1[-4] == 0xdddd)
                                        free(&rdi_1[-4]);
                                }
                            }
                        }
                        else
                        {
                            if (rcx_10 > 0x400)
                            {
                                int32_t* rax_15 = j__malloc_base(rcx_10);
                                rdi_1 = rax_15;
                                
                                if (!rax_15)
                                    goto label_14000a57d;
                                
                                *rax_15 = 0xdddd;
                            label_14000a575:
                                rdi_1 = &rdi_1[4];
                                goto label_14000a57d;
                            }
                            
                            int64_t rax_13 = rcx_10 + 0xf;
                            
                            if (rax_13 <= rcx_10)
                                rax_13 = 0xffffffffffffff0;
                            
                            int64_t rax_14 = rax_13 & 0xfffffffffffffff0;
                            __chkstk(rax_14);
                            rsp_1 -= rax_14;
                            rdi_1 = rsp_1 + 0x40;
                            
                            if (rdi_1)
                            {
                                *rdi_1 = 0xcccc;
                                goto label_14000a575;
                            }
                        }
                    }
                    else if (arg6 && rbx_1 <= arg6)
                    {
                        *(rsp_1 + 0x28) = arg6;
                        *(rsp_1 + 0x20) = arg5;
                        sub_14000a700(arg1, r15, rsi, result_1, zmm1);
                    }
                }
            }
        }
        else
        {
            if (rdx_5 > 0x400)
            {
                int32_t* rax_7;
                int512_t zmm0;
                rax_7 = j__malloc_base(rdx_5);
                rsi = rax_7;
                
                if (!rax_7)
                    goto label_14000a47d;
                
                *rax_7 = 0xdddd;
            label_14000a475:
                rsi = &rsi[4];
                goto label_14000a47d;
            }
            
            int64_t rax_5 = rdx_5 + 0xf;
            
            if (rax_5 <= rdx_5)
                rax_5 = 0xffffffffffffff0;
            
            int64_t rax_6 = rax_5 & 0xfffffffffffffff0;
            __chkstk(rax_6);
            rsp_1 = &var_68 - rax_6;
            rsi = rsp_1 + 0x40;
            
            if (rsi)
            {
                *rsi = 0xcccc;
                goto label_14000a475;
            }
            
            rbx_1 = 0;
        }
        
        if (rsi && rsi[-4] == 0xdddd)
            free(&rsi[-4]);
        
        result = rbx_1;
    }
    
    __security_check_cookie(var_28 ^ &var_28);
    return result;
}

uint64_t GetTableIndexFromLocaleName(int64_t arg1)
{
    int32_t rdi = 0;
    int32_t rsi = 0xe3;
    
    do
    {
        int32_t temp0_1;
        int32_t temp1_1;
        temp0_1 = HIGHD(rsi + rdi);
        temp1_1 = LOWD(rsi + rdi);
        int64_t r14_1 = (temp1_1 - temp0_1) >> 1;
        int32_t rax_5 = sub_14000a79c(arg1, (&data_14002c3f0)[r14_1 * 2], 0x55);
        
        if (!rax_5)
            return *(r14_1 * 0x10 + 0x14002c3f8);
        
        int32_t rcx_1 = r14_1 - 1;
        
        if (rax_5 >= 0)
            rcx_1 = rsi;
        
        rsi = rcx_1;
        
        if (rax_5 >= 0)
            rdi = r14_1 + 1;
    } while (rdi <= rsi);
    
    return 0xffffffff;
}

uint64_t __crtDownlevelLocaleNameToLCID(int64_t arg1)
{
    if (arg1)
    {
        int32_t rax_1 = GetTableIndexFromLocaleName(arg1);
        
        if (rax_1 >= 0 && rax_1 < 0xe4)
            return *(&data_14002b5b0 + rax_1 * 0x10);
    }
    
    return 0;
}

int64_t sub_14000a700(int64_t arg1, uint32_t arg2, wchar16* arg3, int32_t arg4, int512_t arg5 @ zmm1, PWSTR arg6, int32_t arg7)
{
    int64_t rax_1 = data_140042318 ^ __security_cookie;
    
    if (!rax_1)
        return LCMapStringW(__crtDownlevelLocaleNameToLCID(arg1), arg2, arg3, arg4, arg6, arg7);
    
    int64_t var_28;
    __builtin_memset(&var_28, 0, 0x18);
    int32_t var_30 = arg7;
    PWSTR var_38 = arg6;
    return rax_1(arg1, arg5, arg3);
}

uint64_t sub_14000a79c(int64_t arg1, int16_t* arg2, int64_t arg3)
{
    uint32_t r9_1 = 0;
    int16_t* r11 = arg2;
    
    if (arg3)
    {
        int16_t* r10_1 = arg1 - arg2;
        int16_t rcx;
        int16_t rdx;
        
        do
        {
            rcx = *(r10_1 + r11) + 0x20;
            
            if (*(r10_1 + r11) - 0x41 > 0x19)
                rcx = *(r10_1 + r11);
            
            rdx = *r11 + 0x20;
            
            if (*r11 - 0x41 > 0x19)
                rdx = *r11;
            
            r11 = &r11[1];
            int64_t temp0_1 = arg3;
            arg3 -= 1;
            
            if (temp0_1 == 1)
                break;
            
            if (!rcx)
                break;
        } while (rcx == rdx);
        
        r9_1 = rcx - rdx;
    }
    
    return r9_1;
}

int64_t sub_14000a804(uint64_t arg1)
{
    uint64_t rbx = arg1;
    
    while (true)
    {
        int64_t result = j__malloc_base(arg1);
        
        if (result)
            return result;
        
        if (!sub_140015880(rbx))
            break;
        
        arg1 = rbx;
    }
    
    if (rbx == -1)
    {
        sub_14000af90();
        /* no return */
    }
    
    sub_14000af70();
    /* no return */
}

int64_t j_j_free(int64_t arg1)
{
    /* tailcall */
    return j_free(arg1);
}

int64_t j_sub_14000a804(uint64_t arg1)
{
    /* tailcall */
    return sub_14000a804(arg1);
}

struct type_info::VTable** type_info::`scalar deleting destructor'(struct type_info::VTable** arg1, char arg2)
{
    *arg1 = &type_info::`vftable';
    
    if (arg2 & 1)
        j_j_free(arg1);
    
    return arg1;
}

int64_t pre_c_initialization()
{
    sub_140015a70(1);
    _set_fmode(0x4000);
    data_140043090 = 0;
    
    if (sub_14000acac(1))
    {
        sub_14000b2b4();
        atexit(sub_14000b2f0);
        
        if (!_configure_narrow_argv(1))
        {
            sub_14000b06c();
            
            if (sub_14000b0a0())
                __setusermatherr(sub_140008c90);
            
            _configthreadlocale(0);
            
            if (sub_140008700())
                j_common_initialize_environment_nolock<char>();
            
            j_sub_140008c90();
            return 0;
        }
    }
    
    __scrt_fastfail(7);
    breakpoint();
}

int64_t post_pgo_initialization()
{
    __scrt_initialize_default_local_stdio_options();
    return 0;
}

int64_t pre_cpp_initialization()
{
    sub_14000b26c();
    /* tailcall */
    return _set_new_mode(0);
}

int64_t sub_14000a960(int64_t arg1 @ rbx)
{
    int64_t arg_8 = arg1;
    
    if (!__scrt_initialize_crt(1))
    {
        __scrt_fastfail(7);
        __scrt_fastfail(7);
    }
    else
    {
        int64_t rsi;
        rsi = 0;
        char var_18_1 = 0;
        arg1 = __scrt_acquire_startup_lock();
        int32_t rcx_1 = data_140042540;
        
        if (rcx_1 == 1)
            __scrt_fastfail(7);
        else
        {
            if (rcx_1)
            {
                rsi = 1;
                char var_18_2 = 1;
            }
            else
            {
                data_140042540 = 1;
                
                if (sub_140016298(&data_1400293d8, &data_140029418))
                    return 0xff;
                
                sub_140016234(&data_140029368, &data_1400293d0);
                data_140042540 = 2;
            }
            
            rcx_1 = arg1;
            __scrt_release_startup_lock(rcx_1);
            
            if (data_140043810 && sub_14000ad5c(&data_140043810))
                data_140043810(0, 2, 0);
            
            if (data_140043808 && sub_14000ad5c(&data_140043808))
                _register_thread_local_exe_atexit_callback(data_140043808);
            
            _get_initial_narrow_environment();
            data_140043068;
            data_140043060;
            main();
            arg1 = 0;
            
            if (sub_14000b218())
            {
                if (!rsi)
                    _cexit();
                
                __scrt_uninitialize_crt(1, 0);
                return 0;
            }
        }
    }
    
    exit(arg1);
    /* no return */
}

int64_t _start()
{
    __security_init_cookie();
    int64_t rbx;
    /* tailcall */
    return sub_14000a960(rbx);
}

int64_t __GSHandlerCheck(int64_t arg1, int64_t arg2, int64_t arg3, void* arg4)
{
    __GSHandlerCheckCommon(arg2, arg4, *(arg4 + 0x38));
    return 1;
}

int64_t __GSHandlerCheckCommon(int64_t arg1, void* arg2, int32_t* arg3)
{
    int64_t r9 = arg1;
    int64_t r10 = arg1;
    
    if (*arg3 & 4)
        r10 = (arg3[1] + arg1) & -(arg3[2]);
    
    uint64_t rcx_1 = *(*(arg2 + 0x10) + 8);
    int64_t rax_5 = *(arg2 + 8);
    
    if (*(rcx_1 + rax_5 + 3) & 0xf)
        r9 += *(rcx_1 + rax_5 + 3) & 0xfffffff0;
    
    /* tailcall */
    return __security_check_cookie(r9 ^ *((*arg3 & 0xfffffff8) + r10));
}

int64_t sub_14000ab6c(int32_t* arg1, int64_t arg2, void* arg3, int64_t* arg4)
{
    void* rbx = arg4[7];
    __GSHandlerCheckCommon(arg2, arg4, rbx + 4);
    
    if (!(*(rbx + 4) & (-(((rbx + 4) - (rbx + 4))) + 1)))
        return 1;
    
    return sub_14000be20(arg1, arg2, arg3, arg4);
}

int64_t __security_check_cookie(int64_t arg1)
{
    if (arg1 == __security_cookie)
    {
        int64_t rcx = ROLQ(arg1, 0x10);
        
        if (!(rcx & 0xffff))
            return;
        
        arg1 = RORQ(rcx, 0x10);
    }
    
    /* tailcall */
    return __report_gsfailure(arg1);
}

int64_t __scrt_acquire_startup_lock()
{
    int64_t result;
    
    if (!sub_14000b74c())
    {
    label_14000ac52:
        result = 0;
    }
    else
    {
        TEB* gsbase;
        void* StackBase = gsbase->NtTib.Self->NtTib.StackBase;
        
        do
        {
            result = 0;
            bool z_1;
            
            if (0 == data_140042548)
            {
                data_140042548 = StackBase;
                z_1 = true;
            }
            else
            {
                result = data_140042548;
                z_1 = false;
            }
            
            if (z_1)
                goto label_14000ac52;
        } while (StackBase != result);
        
        result = 1;
    }
    
    return result;
}

int64_t __scrt_initialize_crt(int32_t arg1)
{
    char rax = data_140042550;
    
    if (!arg1)
        rax = 1;
    
    data_140042550 = rax;
    int64_t xcr0;
    
    if (__vcrt_initialize(__isa_available_init(xcr0)))
    {
        if (sub_140017bec())
            return 1;
        
        __vcrt_uninitialize(0);
    }
    
    return 0;
}

int64_t sub_14000acac(int32_t arg1)
{
    int64_t result;
    
    if (data_140042551)
        result = 1;
    else
    {
        if (arg1 > 1)
        {
            __scrt_fastfail(5);
            breakpoint();
        }
        
        if (!sub_14000b74c() || arg1)
        {
            uint64_t __security_cookie_1 = __security_cookie;
            result = RORQ(-1, 0x40 - (__security_cookie_1 & 0x3f)) ^ __security_cookie_1;
            data_140042558 = result;
            data_140042560 = result;
            data_140042568 = result;
            data_140042570 = result;
            data_140042578 = result;
            data_140042580 = result;
            data_140042551 = 1;
            result = 1;
        }
        else if (_initialize_onexit_table(&data_140042558))
            result = 0;
        else if (!_initialize_onexit_table(&data_140042570))
        {
            data_140042551 = 1;
            result = 1;
        }
        else
            result = 0;
    }
    
    return result;
}

uint64_t sub_14000ad5c(int64_t arg1)
{
    struct Section_Header* const rdx_1 = &__section_headers;
    
    while (true)
    {
        struct Section_Header* const var_18_1 = rdx_1;
        
        if (rdx_1 == &data_140000320)
        {
            rdx_1 = nullptr;
            break;
        }
        
        uint64_t virtualAddress = rdx_1->virtualAddress;
        
        if (arg1 - &__dos_header >= virtualAddress
                && arg1 - &__dos_header < rdx_1->virtualSize + virtualAddress)
            break;
        
        rdx_1 = &rdx_1[1];
    }
    
    uint64_t result;
    
    if (!rdx_1)
        result = 0;
    else if (rdx_1->characteristics >= 0)
        result = 1;
    else
        result = 0;
    
    return result;
}

int64_t __scrt_release_startup_lock(char arg1)
{
    int64_t rbx;
    rbx = arg1;
    int32_t result = sub_14000b74c();
    
    if (result && !rbx)
    {
        data_140042548;
        data_140042548 = 0;
    }
    
    return result;
}

int64_t __scrt_uninitialize_crt(char arg1, char arg2)
{
    int64_t rbx;
    rbx = arg1;
    
    if (!data_140042550 || !arg2)
    {
        __acrt_uninitialize(arg1);
        __vcrt_uninitialize(rbx);
    }
    
    int64_t result;
    result = 1;
    return result;
}

int64_t _onexit(int64_t arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    int32_t rax;
    
    if (RORQ(__security_cookie_1 ^ data_140042558, __security_cookie_1 & 0x3f) != -1)
        rax = _register_onexit_function(&data_140042558, arg1);
    else
        rax = sub_140017a04(arg1);
    
    if (!rax)
        return arg1;
    
    return 0;
}

uint64_t atexit(int64_t arg1)
{
    int64_t rax = _onexit(arg1);
    int32_t rax_1 = -(rax);
    return -((rax_1 - rax_1)) - 1;
}

void __chkstk(int64_t arg1 @ rax)
{
    void arg_8;
    void* r10 = &arg_8 - arg1;
    
    if (&arg_8 < arg1)
        r10 = nullptr;
    
    TEB* gsbase;
    void* StackLimit = gsbase->NtTib.StackLimit;
    
    if (r10 >= StackLimit)
        return;
    
    r10 &= 0xf000;
    
    do
    {
        StackLimit -= 0x1000;
        *StackLimit = 0;
    } while (r10 != StackLimit);
}

struct std::exception::VTable** sub_14000af14(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
    return arg1;
}

struct std::bad_alloc::std::bad_array_new_length::VTable** sub_14000af50(struct std::bad_alloc::std::bad_array_new_length::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad array new length";
    *arg1 = &std::bad_array_new_length::`vftable'{for `std::bad_alloc'};
    return arg1;
}

void sub_14000af70() __noreturn
{
    void var_28;
    sub_1400079a0(&var_28);
    sub_14000b810(&var_28, &data_14003e308);
    /* no return */
}

void sub_14000af90() __noreturn
{
    void var_28;
    sub_14000af50(&var_28);
    sub_14000b810(&var_28, &data_14003e430);
    /* no return */
}

int64_t j_free(int64_t arg1)
{
    /* tailcall */
    return free(arg1);
}

uint64_t __security_init_cookie()
{
    uint64_t __security_cookie_1 = __security_cookie;
    
    if (__security_cookie_1 == 0x2b992ddfa232)
    {
        FILETIME systemTimeAsFileTime;
        __builtin_memset(&systemTimeAsFileTime, 0, 8);
        GetSystemTimeAsFileTime(&systemTimeAsFileTime);
        int64_t rax;
        rax = systemTimeAsFileTime.dwLowDateTime;
        *(&rax + 4) = systemTimeAsFileTime.dwHighDateTime;
        int64_t arg_8 = rax;
        uint64_t rax_2 = GetCurrentThreadId();
        arg_8 ^= rax_2;
        uint64_t rax_4 = GetCurrentProcessId();
        arg_8 ^= rax_4;
        int64_t performanceCount;
        QueryPerformanceCounter(&performanceCount);
        __security_cookie_1 =
            (performanceCount << 0x20 ^ performanceCount ^ arg_8 ^ &arg_8) & 0xffffffffffff;
        
        if (__security_cookie_1 == 0x2b992ddfa232)
            __security_cookie_1 = 0x2b992ddfa233;
        
        __security_cookie = __security_cookie_1;
    }
    
    uint64_t result = ~__security_cookie_1;
    data_140040df0 = result;
    return result;
}

int64_t sub_14000b064() __pure
{
    return 0x4000;
}

int64_t sub_14000b06c()
{
    /* tailcall */
    return InitializeSListHead(&data_140042590);
}

int64_t sub_14000b07c() __pure
{
    return &data_1400425a0;
}

int64_t __scrt_initialize_default_local_stdio_options()
{
    data_140041e60 |= 4;
    data_1400425a0 |= 2;
    return &data_1400425a0;
}

int64_t sub_14000b0a0()
{
    int64_t result;
    result = !data_140040e10;
    return result;
}

int64_t sub_14000b0ac() __pure
{
    return &data_140043810;
}

int64_t sub_14000b0b4() __pure
{
    return &data_140043808;
}

int64_t sub_14000b0bc()
{
    data_1400425a8 = 0;
}

int32_t __scrt_fastfail(int32_t arg1)
{
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);
    
    sub_14000b0bc();
    void ContextRecord;
    sub_14000c550(&ContextRecord, 0, 0x4d0);
    RtlCaptureContext(&ContextRecord);
    uint64_t ControlPc;
    uint64_t ImageBase;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry =
        RtlLookupFunctionEntry(ControlPc, &ImageBase, nullptr);
    uint64_t EstablisherFrame;
    void HandlerData;
    
    if (FunctionEntry)
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, ControlPc, FunctionEntry, &ContextRecord, 
            &HandlerData, &EstablisherFrame, nullptr);
    void* const __return_addr_2 = __return_addr;
    int64_t __saved_rbx;
    int64_t* var_440 = &__saved_rbx;
    int32_t var_578;
    sub_14000c550(&var_578, 0, 0x98);
    void* const __return_addr_1 = __return_addr;
    var_578 = 0x40000015;
    int32_t var_574 = 1;
    bool cond:0 = IsDebuggerPresent() == 1;
    EXCEPTION_POINTERS ExceptionInfo;
    ExceptionInfo.ExceptionRecord = &var_578;
    uint64_t rbx_1;
    rbx_1 = cond:0;
    ExceptionInfo.ContextRecord = &ContextRecord;
    SetUnhandledExceptionFilter(nullptr);
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo);
    
    if (!result && !rbx_1)
        sub_14000b0bc();
    
    return result;
}

int64_t j_sub_140008c90()
{
    /* tailcall */
    return sub_140008c90();
}

HMODULE sub_14000b218()
{
    HMODULE result = GetModuleHandleW(nullptr);
    int32_t* rcx_2;
    
    if (result && result->unused == 0x5a4d)
        rcx_2 = *(result + 0x3c) + result;
    
    if (!result || result->unused != 0x5a4d || *rcx_2 != 0x4550 || rcx_2[6] != 0x20b
            || rcx_2[0x21] <= 0xe || !rcx_2[0x3e])
        result = 0;
    else
        result = 1;
    
    return result;
}

int64_t sub_14000b26c()
{
    /* tailcall */
    return SetUnhandledExceptionFilter(sub_14000b27c);
}

int64_t sub_14000b27c(int64_t* arg1)
{
    int32_t* rax = *arg1;
    
    if (*rax == 0xe06d7363 && rax[6] == 4)
    {
        int32_t rcx = rax[8];
        
        if (rcx - 0x19930520 <= 2 || rcx == 0x1994000)
        {
            sub_140010504();
            /* no return */
        }
    }
    
    return 0;
}

void sub_14000b2b4()
{
    for (int64_t* i = &data_14003c140; i < &data_14003c140; i = &i[1])
    {
        int64_t rax = *i;
        
        if (rax)
            rax();
    }
}

void sub_14000b2f0()
{
    for (int64_t* i = &data_14003c150; i < &data_14003c150; i = &i[1])
    {
        int64_t rax = *i;
        
        if (rax)
            rax();
    }
}

void __raise_securityfailure(EXCEPTION_POINTERS* arg1) __noreturn
{
    SetUnhandledExceptionFilter(nullptr);
    UnhandledExceptionFilter(arg1);
    /* tailcall */
    return TerminateProcess(GetCurrentProcess(), 0xc0000409);
}

void __report_gsfailure(uint64_t stack_cookie) __noreturn
{
    uint64_t stack_cookie_1 = stack_cookie;
    
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);
    
    capture_previous_context(&data_140042650);
    data_140042748 = __return_addr;
    data_1400426e8 = &stack_cookie_1;
    data_1400425c0 = data_140042748;
    data_1400426d0 = stack_cookie_1;
    data_1400425b0 = 0xc0000409;
    data_1400425b4 = 1;
    data_1400425c8 = 1;
    data_1400425d0 = 2;
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t var_10 = data_140040df0;
    __raise_securityfailure(&data_14002e930);
    /* no return */
}

int64_t sub_14000b42c() __pure
{
    return;
}

void __report_rangecheckfailure() __noreturn
{
    __report_securityfailure(8);
    /* no return */
}

int64_t sub_14000b442() __pure
{
    return;
}

void __report_securityfailure(int32_t arg1) __noreturn
{
    int32_t arg_8 = arg1;
    
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
        trap(0xd);
    
    sub_14000b4e4(&data_140042650);
    data_140042748 = __return_addr;
    data_1400426e8 = &arg_8;
    data_1400425c0 = data_140042748;
    data_1400425b0 = 0xc0000409;
    data_1400425b4 = 1;
    data_1400425c8 = 1;
    data_1400425d0 = arg_8;
    __raise_securityfailure(&data_14002e930);
    /* no return */
}

int64_t sub_14000b4de() __pure
{
    return;
}

IMAGE_RUNTIME_FUNCTION_ENTRY* sub_14000b4e4(CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    uint64_t ImageBase;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
    
    if (!FunctionEntry)
        return FunctionEntry;
    
    uint64_t EstablisherFrame;
    void HandlerData;
    return RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, &HandlerData, 
        &EstablisherFrame, nullptr);
}

IMAGE_RUNTIME_FUNCTION_ENTRY* capture_previous_context(CONTEXT* arg1)
{
    RtlCaptureContext(arg1);
    uint64_t Rip = arg1->Rip;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
    
    for (int32_t i = 0; i < 2; i += 1)
    {
        uint64_t ImageBase;
        FunctionEntry = RtlLookupFunctionEntry(Rip, &ImageBase, nullptr);
        
        if (!FunctionEntry)
            break;
        
        uint64_t EstablisherFrame;
        void HandlerData;
        FunctionEntry = RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, Rip, FunctionEntry, arg1, 
            &HandlerData, &EstablisherFrame, nullptr);
    }
    
    return FunctionEntry;
}

int64_t __isa_available_init(int64_t arg1 @ xcr0)
{
    data_140040e24 = 2;
    data_140040e20 = 1;
    int32_t temp0;
    int32_t temp1;
    int32_t temp2;
    int32_t temp3;
    temp0 = __cpuid(0, 0);
    char rdi = 0;
    int32_t temp0_1;
    int32_t temp1_1;
    int32_t temp2_1;
    int32_t temp3_1;
    temp0_1 = __cpuid(1, 0);
    int32_t var_18 = temp0_1;
    int32_t var_14 = temp1_1;
    int32_t var_10 = temp2_1;
    int32_t var_c = temp3_1;
    int32_t rax_2;
    uint64_t rax_3;
    
    if (!((temp1 ^ 0x756e6547) | (temp2 ^ 0x6c65746e) | (temp3 ^ 0x49656e69)))
    {
        data_140040e28 = -1;
        rax_2 = temp0_1 & 0xfff3ff0;
        
        if (rax_2 != 0x106c0 && rax_2 != 0x20660 && rax_2 != 0x20670)
            rax_3 = rax_2 - 0x30650;
    }
    
    int32_t r8_3;
    
    if ((temp1 ^ 0x756e6547) | (temp2 ^ 0x6c65746e) | (temp3 ^ 0x49656e69) || (rax_2 != 0x106c0
            && rax_2 != 0x20660 && rax_2 != 0x20670
            && (rax_3 > 0x20 || !TEST_BITQ(0x100010001, rax_3))))
        r8_3 = data_140042b20;
    else
    {
        r8_3 = data_140042b20 | 1;
        data_140042b20 = r8_3;
    }
    
    if (temp0 >= 7)
    {
        int32_t temp0_2;
        int32_t temp1_2;
        int32_t temp2_2;
        int32_t temp3_2;
        temp0_2 = __cpuid(7, 0);
        int32_t var_18_1 = temp0_2;
        rdi = temp1_2;
        int32_t var_14_1 = temp1_2;
        int32_t var_10_1 = temp2_2;
        int32_t var_c_1 = temp3_2;
        
        if (TEST_BITD(temp1_2, 9))
            data_140042b20 = r8_3 | 2;
    }
    
    if (TEST_BITD(temp2_1, 0x14))
    {
        data_140040e20 = 2;
        data_140040e24 = 6;
        
        if (TEST_BITD(temp2_1, 0x1b) && TEST_BITD(temp2_1, 0x1c))
        {
            int32_t temp0_3;
            char temp1_3;
            temp0_3 = _xgetbv(0, arg1);
            
            if (((temp0_3 << 0x20 | temp1_3) & 6) == 6)
            {
                int32_t rax_8 = data_140040e24 | 8;
                data_140040e20 = 3;
                data_140040e24 = rax_8;
                
                if (rdi & 0x20)
                {
                    data_140040e20 = 5;
                    data_140040e24 = rax_8 | 0x20;
                }
            }
        }
    }
    
    return 0;
}

int64_t sub_14000b74c()
{
    int64_t result;
    result = data_140043800;
    return result;
}

int64_t __std_exception_copy(int64_t* arg1, int64_t* arg2)
{
    if (arg1[1])
    {
        char* rax_1 = *arg1;
        
        if (rax_1)
        {
            int64_t rdi_1 = -1;
            
            do
                rdi_1 += 1;
             while (rax_1[rdi_1]);
            
            char* rax_2 = j__malloc_base(rdi_1 + 1);
            char* rbx_1 = rax_2;
            
            if (rax_2)
            {
                strcpy_s(rax_2, rdi_1 + 1, *arg1);
                arg2[1] = 1;
                *arg2 = rbx_1;
                rbx_1 = nullptr;
            }
            
            return free(rbx_1);
        }
    }
    
    int64_t result = *arg1;
    *arg2 = result;
    arg2[1] = 0;
    return result;
}

void __std_exception_destroy(int64_t* arg1)
{
    if (arg1[1])
        free(*arg1);
    
    *arg1 = 0;
    arg1[1] = 0;
}

void sub_14000b810(int64_t* arg1, char* arg2) __noreturn
{
    char* PcValue = arg2;
    int64_t var_48 = data_14002e940;
    int96_t var_38 = data_14002e950;
    int128_t zmm1 = data_14002e970;
    int128_t arguments = data_14002e960;
    int128_t var_18 = zmm1;
    
    if (arg2 && *arg2 & 0x10)
    {
        void* rax_1 = *(*arg1 - 8);
        PcValue = *(rax_1 + 0x30);
        (*(rax_1 + 0x40))();
    }
    
    *(&arguments + 8) = arg1;
    var_18 = PcValue;
    int64_t BaseOfImage;
    int64_t BaseOfImage_1 = RtlPcToFileHeader(PcValue, &BaseOfImage);
    BaseOfImage = BaseOfImage_1;
    *(&var_18 + 8) = BaseOfImage_1;
    
    if (PcValue && (*PcValue & 8 || !BaseOfImage_1))
        arguments = 0x1994000;
    
    RaiseException(var_48, *(&var_48 + 4), *(&var_38 + 8), &arguments);
    /* no return */
}

int64_t sub_14000b8d0(int32_t* arg1)
{
    int64_t r9;
    int64_t arg_20 = r9;
    int64_t r8;
    int64_t arg_18 = r8;
    int64_t rdx;
    int64_t arg_10 = rdx;
    int32_t* arg_8 = arg1;
    int32_t var_38 = 0;
    int32_t* var_20 = arg1;
    int64_t var_18 = r8;
    void* rax = __vcrt_getptd();
    (*(rax + 0x10))(*arg1, &var_20);
    int32_t var_38_1 = 0;
    return 0;
}

void* const sub_14000b924(void* arg1, int32_t arg2)
{
    uint64_t rbx = *(arg1 + 0xc);
    void* const result;
    
    while (true)
    {
        if (!rbx)
            return nullptr;
        
        rbx = rbx - 1;
        int64_t rdx = *(__vcrt_getptd() + 0x60) + rbx * 0x14;
        result = *(arg1 + 0x10) + rdx;
        
        if (arg2 > *(result + 4))
        {
            if (arg2 <= *(result + 8))
                break;
        }
    }
    
    return result;
}

void* __FrameHandler3::ExecutionInCatch(int64_t* arg1, void* arg2)
{
    void* result;
    result = sub_14000b924(arg2, sub_14000cc38(arg2, arg1));
    return result;
}

int64_t __FrameHandler3::FrameUnwindToEmptyState(int64_t* arg1, int64_t* arg2, void* arg3)
{
    void arg_20;
    int64_t* rax = __FrameHandler3::GetEstablisherFrame(arg1, arg2, arg3, &arg_20);
    void* rax_2 = sub_14000b924(arg3, sub_14000cc38(arg3, arg2));
    int32_t r9_1;
    
    if (rax_2)
        r9_1 = *(rax_2 + 4);
    else
        r9_1 = -1;
    
    return sub_14000dd88(rax, arg2, arg3, r9_1);
}

int64_t* __FrameHandler3::GetEstablisherFrame(int64_t* arg1, int64_t* arg2, void* arg3, int64_t* arg4)
{
    uint64_t rdi = *(arg3 + 0xc);
    int32_t rax = sub_14000cc38(arg3, arg2);
    *arg4 = *arg1;
    
    while (rdi)
    {
        rdi = rdi - 1;
        void* rbx_2 = *(arg3 + 0x10) + rdi * 0x14 + arg2[1];
        
        if (rax > *(rbx_2 + 4) && rax <= *(rbx_2 + 8))
        {
            uint64_t ImageBase;
            IMAGE_RUNTIME_FUNCTION_ENTRY* rax_2 =
                RtlLookupFunctionEntry(*arg2, &ImageBase, nullptr);
            uint64_t rcx_2 = 0;
            int64_t r8_1 = *(rbx_2 + 0x10) + ImageBase;
            int32_t r9 = *(rbx_2 + 0xc);
            
            if (r9)
            {
                int32_t* rdx_2 = r8_1 + 0xc;
                
                while (*rdx_2 != rax_2->BeginAddress)
                {
                    rcx_2 = rcx_2 + 1;
                    rdx_2 = &rdx_2[5];
                    
                    if (rcx_2 >= r9)
                        break;
                }
            }
            
            if (rcx_2 < r9)
            {
                *arg4 = *(*(r8_1 + rcx_2 * 0x14 + 0x10) + *arg1);
                break;
            }
        }
    }
    
    return arg4;
}

int128_t* sub_14000bad4(int128_t* arg1, int64_t arg2, int32_t arg3, int64_t* arg4, void* arg5)
{
    int32_t rbx = 0;
    void* rdi = nullptr;
    int32_t r12 = *(arg5 + 0xc);
    int32_t rax = sub_14000cc38(arg5, arg4);
    
    if (!r12)
    {
        sub_140010504();
        /* no return */
    }
    
    void* r9 = arg4[1];
    int64_t r10 = *(arg5 + 0x10);
    int32_t r8 = -1;
    int32_t rdx_1 = r12;
    uint64_t r11_1;
    
    do
    {
        r11_1 = rdx_1 - 1;
        void* rax_1 = r9 + r11_1 * 0x14;
        
        if (rax > *(rax_1 + r10 + 4) && rax <= *(rax_1 + r10 + 8))
            break;
        
        rdx_1 = r11_1;
    } while (r11_1);
    
    if (rdx_1)
        rdi = r10 + (rdx_1 - 1) * 0x14 + r9;
    
    int32_t* rcx_2 = r9 + r10;
    int32_t rdx_2 = 0;
    int32_t r15 = -1;
    
    do
    {
        if (!rdi)
        {
        label_14000bb85:
            
            if (arg3 >= *rcx_2 && arg3 <= rcx_2[1])
            {
                int32_t rax_6 = rdx_2;
                r15 = rdx_2;
                
                if (r8 != 0xffffffff)
                    rax_6 = r8;
                
                r8 = rax_6;
            }
        }
        else if (*rcx_2 > *(rdi + 4) && rcx_2[1] <= *(rdi + 8))
            goto label_14000bb85;
        
        rdx_2 += 1;
        rcx_2 = &rcx_2[5];
    } while (rdx_2 < r12);
    
    int32_t rax_7 = 0;
    
    if (r8 != 0xffffffff)
        rax_7 = r8;
    
    int32_t var_50 = rax_7;
    
    if (r8 != 0xffffffff)
        rbx = r15 + 1;
    
    int32_t var_40 = rbx;
    *arg1 = arg2;
    arg1[1] = arg2;
    return arg1;
}

int64_t __FrameHandler3::UnwindNestedFrames(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int32_t arg7, int64_t* arg8, char arg9)
{
    void var_5b8;
    int64_t rax_1 = __security_cookie ^ &var_5b8;
    int128_t zmm0 = data_14002e980;
    int128_t zmm1 = data_14002e990;
    EXCEPTION_RECORD ExceptionRecord;
    ExceptionRecord.ExceptionCode = zmm0;
    ExceptionRecord.ExceptionFlags = *(&zmm0 + 4);
    ExceptionRecord.ExceptionRecord = *(&zmm0 + 8);
    zmm0 = data_14002e9a0;
    ExceptionRecord.ExceptionAddress = zmm1;
    ExceptionRecord.NumberParameters = *(&zmm1 + 8);
    zmm1 = data_14002e9b0;
    ExceptionRecord.ExceptionInformation[0] = zmm0;
    ExceptionRecord.ExceptionInformation[1] = *(&zmm0 + 8);
    zmm0 = data_14002e9c0;
    ExceptionRecord.ExceptionInformation[2] = zmm1;
    ExceptionRecord.ExceptionInformation[3] = *(&zmm1 + 8);
    zmm1 = data_14002e9d0;
    ExceptionRecord.ExceptionInformation[4] = zmm0;
    ExceptionRecord.ExceptionInformation[5] = *(&zmm0 + 8);
    zmm0 = data_14002e9e0;
    ExceptionRecord.ExceptionInformation[6] = zmm1;
    ExceptionRecord.ExceptionInformation[7] = *(&zmm1 + 8);
    zmm1 = data_14002ea00;
    ExceptionRecord.ExceptionInformation[8] = zmm0;
    ExceptionRecord.ExceptionInformation[9] = *(&zmm0 + 8);
    zmm0 = data_14002e9f0;
    ExceptionRecord.ExceptionInformation[0xa] = zmm0;
    ExceptionRecord.ExceptionInformation[0xb] = *(&zmm0 + 8);
    ExceptionRecord.ExceptionInformation[0xc] = zmm1;
    ExceptionRecord.ExceptionInformation[0xd] = *(&zmm1 + 8);
    ExceptionRecord.ExceptionInformation[0xe] = 0;
    int64_t TargetFrame = *arg1;
    ExceptionRecord.ExceptionInformation[0] = __FrameHandler3::CxxCallCatchBlock;
    ExceptionRecord.ExceptionInformation[2] = arg5;
    ExceptionRecord.ExceptionInformation[3] = arg7;
    ExceptionRecord.ExceptionInformation[5] = arg6;
    ExceptionRecord.ExceptionInformation[7] = arg9;
    UNWIND_HISTORY_TABLE* HistoryTable = arg8[8];
    ExceptionRecord.ExceptionInformation[1] = arg4;
    ExceptionRecord.ExceptionInformation[4] = arg3;
    ExceptionRecord.ExceptionInformation[6] = arg2;
    int64_t TargetIp = *arg8;
    CONTEXT var_4e8;
    CONTEXT* ContextRecord = &var_4e8;
    ExceptionRecord.ExceptionInformation[8] = 0x19930520;
    int64_t result =
        RtlUnwindEx(TargetFrame, TargetIp, &ExceptionRecord, nullptr, ContextRecord, HistoryTable);
    __security_check_cookie(rax_1 ^ &var_5b8);
    return result;
}

int64_t* _CreateFrameInfo(int64_t* arg1, int64_t arg2)
{
    *arg1 = arg2;
    int64_t rcx;
    
    if (arg1 >= *(__vcrt_getptd() + 0x58))
        rcx = 0;
    else
        rcx = *(__vcrt_getptd() + 0x58);
    
    arg1[1] = rcx;
    *(__vcrt_getptd() + 0x58) = arg1;
    return arg1;
}

void* sub_14000bd74(int64_t arg1)
{
    if (arg1 == *(__vcrt_getptd() + 0x58))
    {
        void* i_1 = *(__vcrt_getptd() + 0x58);
        
        if (i_1)
        {
            void* i;
            
            do
            {
                i = *(i_1 + 8);
                
                if (arg1 == i_1)
                {
                    void* result = __vcrt_getptd();
                    *(result + 0x58) = i;
                    return result;
                }
                
                i_1 = i;
            } while (i);
        }
    }
    
    sub_140010504();
    /* no return */
}

int64_t _GetImageBase()
{
    return *(__vcrt_getptd() + 0x60);
}

int64_t _GetThrowImageBase()
{
    return *(__vcrt_getptd() + 0x68);
}

void* _SetImageBase(int64_t arg1)
{
    void* result = __vcrt_getptd();
    *(result + 0x60) = arg1;
    return result;
}

void* _SetThrowImageBase(int64_t arg1)
{
    void* result = __vcrt_getptd();
    *(result + 0x68) = arg1;
    return result;
}

int64_t sub_14000be20(int32_t* arg1, int64_t arg2, void* arg3, int64_t* arg4)
{
    int64_t rbx = arg4[1];
    int64_t arg_8 = arg2;
    *(__vcrt_getptd() + 0x60) = rbx;
    *(__vcrt_getptd() + 0x68) = *(arg1 + 0x38);
    void* rax_2 = __vcrt_getptd();
    return sub_14000d870(arg1, &arg_8, arg3, arg4, *arg4[7] + *(rax_2 + 0x60), 0, 0, 0);
}

int64_t memcpy_repmovs(int64_t arg1, int64_t, int64_t arg3, int64_t arg4 @ r10, int64_t arg5 @ r11)
{
    __builtin_memcpy(arg1, arg4, arg3);
    return arg5;
}

int128_t* sub_14000bee0(int128_t* arg1, int128_t* arg2, void* arg3)
{
    if (arg3 > 0x10)
    {
        int128_t zmm1;
        
        if (arg3 <= 0x20)
        {
            zmm1 = *(arg2 + arg3 - 0x10);
            *arg1 = *arg2;
            *(arg1 + arg3 - 0x10) = zmm1;
            return arg1;
        }
        
        int64_t rdx = arg2 - arg1;
        int128_t zmm0;
        
        if (arg2 < arg1 && arg1 < arg3 + arg2)
        {
            int64_t rcx_20 = arg1 + arg3;
            zmm0 = *(rcx_20 + rdx - 0x10);
            int128_t* rcx_21 = rcx_20 - 0x10;
            void* r8_14 = arg3 - 0x10;
            
            if (rcx_21 & 0xf)
            {
                int128_t* rax_7 = rcx_21;
                rcx_21 &= 0xfffffffffffffff0;
                zmm1 = zmm0;
                zmm0 = *(rcx_21 + rdx);
                *rax_7 = zmm1;
                r8_14 = rcx_21 - arg1;
            }
            
            uint64_t r9_10 = r8_14 >> 7;
            
            if (r9_10)
            {
                *rcx_21 = zmm0;
                
                while (true)
                {
                    zmm0 = *(rcx_21 + rdx - 0x10);
                    zmm1 = *(rcx_21 + rdx - 0x20);
                    rcx_21 -= 0x80;
                    rcx_21[7] = zmm0;
                    rcx_21[6] = zmm1;
                    zmm1 = *(rcx_21 + rdx + 0x40);
                    uint64_t temp2_1 = r9_10;
                    r9_10 -= 1;
                    rcx_21[5] = *(rcx_21 + rdx + 0x50);
                    rcx_21[4] = zmm1;
                    zmm1 = *(rcx_21 + rdx + 0x20);
                    rcx_21[3] = *(rcx_21 + rdx + 0x30);
                    rcx_21[2] = zmm1;
                    zmm0 = *(rcx_21 + rdx + 0x10);
                    zmm1 = *(rcx_21 + rdx);
                    
                    if (temp2_1 == 1)
                        break;
                    
                    rcx_21[1] = zmm0;
                    *rcx_21 = zmm1;
                }
                
                rcx_21[1] = zmm0;
                r8_14 &= 0x7f;
                zmm0 = zmm1;
            }
            
            uint64_t i_3 = r8_14 >> 4;
            
            if (i_3)
            {
                uint64_t i;
                
                do
                {
                    *rcx_21 = zmm0;
                    rcx_21 -= 0x10;
                    zmm0 = *(rcx_21 + rdx);
                    i = i_3;
                    i_3 -= 1;
                } while (i != 1);
            }
            
            if (r8_14 & 0xf)
                *arg1 = *arg2;
            
            *rcx_21 = zmm0;
            return arg1;
        }
        
        int128_t* rcx_18;
        void* r8_12;
        
        if (arg3 <= 0x80)
        {
            zmm0 = *(arg1 + rdx);
            rcx_18 = &arg1[1];
            r8_12 = arg3 - 0x10;
        }
        else
        {
            if (*data_140042b20 & 2)
                /* tailcall */
                return memcpy_repmovs(arg1, rdx, arg3, arg2, arg1);
            
            zmm0 = *(arg1 + rdx);
            rcx_18 = &arg1[1];
            
            if (arg1 & 0xf)
            {
                zmm1 = zmm0;
                int128_t* rcx_19 = rcx_18 & 0xfffffffffffffff0;
                zmm0 = *(rcx_19 + rdx);
                rcx_18 = &rcx_19[1];
                *arg1 = zmm1;
            }
            
            r8_12 = arg3 + arg1 - rcx_18;
            uint64_t r9_7 = r8_12 >> 7;
            
            if (r9_7)
            {
                rcx_18[-1] = zmm0;
                
                if (r9_7 <= data_140040e28)
                {
                    while (true)
                    {
                        zmm0 = *(rcx_18 + rdx);
                        zmm1 = *(rcx_18 + rdx + 0x10);
                        rcx_18 = &rcx_18[8];
                        rcx_18[-8] = zmm0;
                        rcx_18[-7] = zmm1;
                        zmm1 = *(rcx_18 + rdx - 0x50);
                        uint64_t temp3_1 = r9_7;
                        r9_7 -= 1;
                        rcx_18[-6] = *(rcx_18 + rdx - 0x60);
                        rcx_18[-5] = zmm1;
                        zmm1 = *(rcx_18 + rdx - 0x30);
                        rcx_18[-4] = *(rcx_18 + rdx - 0x40);
                        rcx_18[-3] = zmm1;
                        zmm0 = *(rcx_18 + rdx - 0x20);
                        zmm1 = *(rcx_18 + rdx - 0x10);
                        
                        if (temp3_1 == 1)
                            break;
                        
                        rcx_18[-2] = zmm0;
                        rcx_18[-1] = zmm1;
                    }
                }
                else
                {
                    while (true)
                    {
                        zmm0 = *(rcx_18 + rdx);
                        zmm1 = *(rcx_18 + rdx + 0x10);
                        rcx_18 = &rcx_18[8];
                        rcx_18[-8] = zmm0;
                        rcx_18[-7] = zmm1;
                        zmm1 = *(rcx_18 + rdx - 0x50);
                        uint64_t temp5_1 = r9_7;
                        r9_7 -= 1;
                        rcx_18[-6] = *(rcx_18 + rdx - 0x60);
                        rcx_18[-5] = zmm1;
                        zmm1 = *(rcx_18 + rdx - 0x30);
                        rcx_18[-4] = *(rcx_18 + rdx - 0x40);
                        rcx_18[-3] = zmm1;
                        zmm0 = *(rcx_18 + rdx - 0x20);
                        zmm1 = *(rcx_18 + rdx - 0x10);
                        
                        if (temp5_1 == 1)
                            break;
                        
                        rcx_18[-2] = zmm0;
                        rcx_18[-1] = zmm1;
                    }
                }
                
                rcx_18[-2] = zmm0;
                r8_12 &= 0x7f;
                zmm0 = zmm1;
            }
        }
        
        uint64_t i_2 = r8_12 >> 4;
        
        if (i_2)
        {
            uint64_t i_1;
            
            do
            {
                rcx_18[-1] = zmm0;
                zmm0 = *(rcx_18 + rdx);
                rcx_18 = &rcx_18[1];
                i_1 = i_2;
                i_2 -= 1;
            } while (i_1 != 1);
        }
        
        void* r8_13 = r8_12 & 0xf;
        
        if (r8_13)
        {
            void* rax_5 = rcx_18 + r8_13;
            *(rax_5 - 0x10) = *(rax_5 + rdx - 0x10);
        }
        
        rcx_18[-1] = zmm0;
        return arg1;
    }
    
    switch (arg3)
    {
        case nullptr:
        {
            return arg1;
            break;
        }
        case 1:
        {
            *arg1 = *arg2;
            return arg1;
            break;
        }
        case 2:
        {
            *arg1 = *arg2;
            return arg1;
            break;
        }
        case 3:
        {
            char r8 = *(arg2 + 2);
            *arg1 = *arg2;
            *(arg1 + 2) = r8;
            return arg1;
            break;
        }
        case 4:
        {
            *arg1 = *arg2;
            return arg1;
            break;
        }
        case 5:
        {
            char r8_2 = *(arg2 + 4);
            *arg1 = *arg2;
            *(arg1 + 4) = r8_2;
            return arg1;
            break;
        }
        case 6:
        {
            int16_t r8_3 = *(arg2 + 4);
            *arg1 = *arg2;
            *(arg1 + 4) = r8_3;
            return arg1;
            break;
        }
        case 7:
        {
            int16_t r8_4 = *(arg2 + 4);
            char r9_2 = *(arg2 + 6);
            *arg1 = *arg2;
            *(arg1 + 4) = r8_4;
            *(arg1 + 6) = r9_2;
            return arg1;
            break;
        }
        case 8:
        {
            *arg1 = *arg2;
            return arg1;
            break;
        }
        case 9:
        {
            char rcx_13 = *(arg2 + 8);
            *arg1 = *arg2;
            *(arg1 + 8) = rcx_13;
            return arg1;
            break;
        }
        case 0xa:
        {
            int16_t rcx_14 = *(arg2 + 8);
            *arg1 = *arg2;
            *(arg1 + 8) = rcx_14;
            return arg1;
            break;
        }
        case 0xb:
        {
            int16_t rcx_7 = *(arg2 + 8);
            char r9_1 = *(arg2 + 0xa);
            *arg1 = *arg2;
            *(arg1 + 8) = rcx_7;
            *(arg1 + 0xa) = r9_1;
            return arg1;
            break;
        }
        case 0xc:
        {
            int32_t rcx_15 = *(arg2 + 8);
            *arg1 = *arg2;
            *(arg1 + 8) = rcx_15;
            return arg1;
            break;
        }
        case 0xd:
        {
            int32_t rcx_12 = *(arg2 + 8);
            char r9_3 = *(arg2 + 0xc);
            *arg1 = *arg2;
            *(arg1 + 8) = rcx_12;
            *(arg1 + 0xc) = r9_3;
            return arg1;
            break;
        }
        case 0xe:
        {
            int32_t rcx_16 = *(arg2 + 8);
            int16_t r9_4 = *(arg2 + 0xc);
            *arg1 = *arg2;
            *(arg1 + 8) = rcx_16;
            *(arg1 + 0xc) = r9_4;
            return arg1;
            break;
        }
        case 0xf:
        {
            int32_t rcx_17 = *(arg2 + 8);
            int16_t r9_5 = *(arg2 + 0xc);
            char r10_1 = *(arg2 + 0xe);
            *arg1 = *arg2;
            *(arg1 + 8) = rcx_17;
            *(arg1 + 0xc) = r9_5;
            *(arg1 + 0xe) = r10_1;
            return arg1;
            break;
        }
        case 0x10:
        {
            *arg1 = *arg2;
            return arg1;
            break;
        }
    }
}

int64_t __C_specific_handler(int32_t* arg1, int64_t arg2, void* arg3, int64_t* arg4)
{
    __except_validate_context_record(arg3);
    int64_t r12 = arg4[1];
    int32_t* rbx = arg4[7];
    int64_t r14_1 = *arg4 - r12;
    int32_t i = arg4[9];
    
    if (arg1[1] & 0x66)
    {
        int32_t r9_1 = *rbx;
        int64_t rdi_4 = arg4[4] - r12;
        
        if (i < r9_1)
        {
            int32_t r8_2 = r9_1;
            int32_t rcx_6;
            
            do
            {
                rcx_6 = r8_2;
                uint64_t rdx_5 = i * 2;
                
                if (r14_1 >= rbx[rdx_5 * 2 + 1] && r14_1 < rbx[rdx_5 * 2 + 2])
                {
                    int32_t r11_2 = arg1[1] & 0x20;
                    
                    if (r11_2)
                    {
                        int32_t r10_1 = 0;
                        
                        if (r8_2)
                        {
                            do
                            {
                                uint64_t rcx_8 = r10_1 * 2;
                                
                                if (rdi_4 >= rbx[rcx_8 * 2 + 1] && rdi_4 < rbx[rcx_8 * 2 + 2]
                                        && rbx[rcx_8 * 2 + 4] == rbx[rdx_5 * 2 + 4]
                                        && rbx[rcx_8 * 2 + 3] == rbx[rdx_5 * 2 + 3])
                                    break;
                                
                                r10_1 += 1;
                            } while (r10_1 < r8_2);
                        }
                        
                        rcx_6 = r9_1;
                        
                        if (r10_1 != r9_1)
                            break;
                    }
                    
                    uint64_t rax_16 = rbx[rdx_5 * 2 + 4];
                    
                    if (!rax_16)
                    {
                        rcx_6 = 1;
                        arg4[9] = i + 1;
                        (rbx[rdx_5 * 2 + 3] + r12)(rcx_6, arg2);
                        r9_1 = *rbx;
                        rcx_6 = r9_1;
                    }
                    else if (rdi_4 == rax_16 && r11_2)
                        break;
                }
                
                i += 1;
                r8_2 = rcx_6;
            } while (i < rcx_6);
        }
    }
    else
    {
        int32_t* var_38 = arg1;
        void* var_30_1 = arg3;
        
        for (; i < *rbx; i += 1)
        {
            uint64_t rdi_2 = i * 2;
            
            if (r14_1 >= rbx[rdi_2 * 2 + 1] && r14_1 < rbx[rdi_2 * 2 + 2] && rbx[rdi_2 * 2 + 4])
            {
                if (rbx[rdi_2 * 2 + 3] == 1)
                {
                label_14000c365:
                    
                    if (*arg1 == 0xe06d7363 && _IsNonwritableInCurrentImage(&data_14002ea18))
                        sub_14000c6e0(arg1);
                    
                    rbx[rdi_2 * 2 + 4];
                    _NLG_Notify();
                    RtlUnwindEx(arg2, rbx[rdi_2 * 2 + 4] + r12, arg1, *arg1, arg4[5], arg4[8]);
                }
                else
                {
                    int32_t rax_5 = (rbx[rdi_2 * 2 + 3] + r12)(&var_38, arg2);
                    
                    if (rax_5 < 0)
                        return 0;
                    
                    if (rax_5 > 0)
                        goto label_14000c365;
                }
            }
        }
    }
    
    return 1;
}

void sub_14000c4c4() __noreturn
{
    uint64_t __security_cookie_1 = __security_cookie;
    char rcx_1 = __security_cookie_1 & 0x3f;
    int64_t rax_1 = RORQ(__security_cookie_1 ^ data_140042bb0, rcx_1);
    
    if (rax_1)
        rax_1(rcx_1);
    
    abort();
    /* no return */
}

int64_t __uncaught_exception()
{
    void* rax = __vcrt_getptd_noinit();
    int64_t result = 0;
    
    if (rax)
        result = *(rax + 0x30) > 0;
    
    return result;
}

int64_t sub_14000c530(int64_t arg1, char arg2, int64_t arg3, int64_t arg4 @ r11)
{
    int64_t rcx_1;
    int64_t rdi_1;
    rdi_1 = __memfill_u8(arg1, arg2, arg3);
    return arg4;
}

int64_t* sub_14000c550(uint128_t* arg1, char arg2, void* arg3)
{
    int64_t* result = arg1;
    uint64_t rdx = arg2;
    int64_t r9 = 0x101010101010101 * rdx;
    
    if (arg3 > 0x10)
    {
        uint128_t zmm0 = r9;
        zmm0 = _mm_unpacklo_epi8(zmm0, zmm0);
        
        if (arg3 > 0x80)
        {
            if (*data_140042b20 & 2)
                /* tailcall */
                return sub_14000c530(arg1, rdx, arg3, result);
            
            *arg1 = zmm0;
            void* r8 = arg3 + arg1;
            arg1 = &arg1[1] & 0xfffffffffffffff0;
            arg3 = r8 - arg1;
            uint64_t i_3 = arg3 >> 7;
            
            if (i_3)
            {
                if (i_3 > data_140040e30)
                {
                    uint64_t i;
                    
                    do
                    {
                        *arg1 = zmm0;
                        arg1[1] = zmm0;
                        arg1 = &arg1[8];
                        arg1[-6] = zmm0;
                        arg1[-5] = zmm0;
                        i = i_3;
                        i_3 -= 1;
                        arg1[-4] = zmm0;
                        arg1[-3] = zmm0;
                        arg1[-2] = zmm0;
                        arg1[-1] = zmm0;
                    } while (i != 1);
                    arg3 &= 0x7f;
                }
                else
                {
                    uint64_t i_1;
                    
                    do
                    {
                        *arg1 = zmm0;
                        arg1[1] = zmm0;
                        arg1 = &arg1[8];
                        arg1[-6] = zmm0;
                        arg1[-5] = zmm0;
                        i_1 = i_3;
                        i_3 -= 1;
                        arg1[-4] = zmm0;
                        arg1[-3] = zmm0;
                        arg1[-2] = zmm0;
                        arg1[-1] = zmm0;
                    } while (i_1 != 1);
                    arg3 &= 0x7f;
                }
            }
        }
        
        uint64_t i_4 = arg3 >> 4;
        
        if (i_4)
        {
            uint64_t i_2;
            
            do
            {
                *arg1 = zmm0;
                arg1 = &arg1[1];
                i_2 = i_4;
                i_4 -= 1;
            } while (i_2 != 1);
        }
        
        void* r8_1 = arg3 & 0xf;
        
        if (r8_1)
            *(arg1 + r8_1 - 0x10) = zmm0;
        
        return result;
    }
    
    void* rcx_2 = arg1 + arg3;
    
    switch (arg3)
    {
        case nullptr:
        {
            return result;
            break;
        }
        case 1:
        {
            *(rcx_2 - 1) = r9;
            return result;
            break;
        }
        case 2:
        {
            *(rcx_2 - 2) = r9;
            return result;
            break;
        }
        case 3:
        {
            goto label_14000c687;
        }
        case 4:
        {
            *(rcx_2 - 4) = r9;
            return result;
            break;
        }
        case 5:
        {
            goto label_14000c6a4;
        }
        case 6:
        {
            goto label_14000c6b4;
        }
        case 7:
        {
            goto label_14000c684;
        }
        case 8:
        {
            *result = r9;
            return result;
            break;
        }
        case 9:
        {
            *(rcx_2 - 9) = r9;
            *(rcx_2 - 1) = r9;
            return result;
            break;
        }
        case 0xa:
        {
            *result = r9;
            result[1] = r9;
            return result;
            break;
        }
        case 0xb:
        {
            *result = r9;
            result[1] = r9;
            *(result + 0xa) = r9;
            return result;
            break;
        }
        case 0xc:
        {
            *(rcx_2 - 0xc) = r9;
            *(rcx_2 - 4) = r9;
            return result;
            break;
        }
        case 0xd:
        {
            *(rcx_2 - 0xd) = r9;
        label_14000c6a4:
            *(rcx_2 - 5) = r9;
            *(rcx_2 - 1) = r9;
            return result;
            break;
        }
        case 0xe:
        {
            *(rcx_2 - 0xe) = r9;
        label_14000c6b4:
            *(rcx_2 - 6) = r9;
            *(rcx_2 - 2) = r9;
            return result;
            break;
        }
        case 0xf:
        {
            *(rcx_2 - 0xf) = r9;
        label_14000c684:
            *(rcx_2 - 7) = r9;
        label_14000c687:
            *(rcx_2 - 3) = r9;
            *(rcx_2 - 1) = r9;
            return result;
            break;
        }
        case 0x10:
        {
            *result = r9;
            result[1] = r9;
            return result;
            break;
        }
    }
}

void sub_14000c6e0(int32_t* arg1)
{
    if (!arg1)
        return;
    
    char rdx;
    char arg_10 = rdx;
    
    if (*arg1 != 0xe06d7363 || arg1[6] != 4 || arg1[8] - 0x19930520 > 2)
        return;
    
    uint64_t rax = *(arg1 + 0x30);
    
    if (!rax)
        return;
    
    int64_t rdx_1 = *(rax + 4);
    
    if (rdx_1)
        sub_14000c754(*(arg1 + 0x28), rdx_1 + *(arg1 + 0x38));
    else if (*rax & 0x10)
    {
        int64_t* rcx_1 = **(arg1 + 0x28);
        
        if (rcx_1)
            (*(*rcx_1 + 0x10))();
    }
}

void sub_14000c74b() __noreturn
{
    sub_140010504();
    /* no return */
}

int64_t sub_14000c754(int64_t, int64_t arg2)
{
    /* jump -> arg2 */
}

uint64_t _IsExceptionObjectToBeDestroyed(int64_t arg1)
{
    int64_t* rdx = *(__vcrt_getptd() + 0x58);
    
    while (true)
    {
        if (!rdx)
            return rdx + 1;
        
        if (*rdx == arg1)
            break;
        
        rdx = rdx[1];
    }
    
    return 0;
}

int64_t __AdjustPointer(int64_t arg1, int32_t* arg2)
{
    int64_t result = *arg2 + arg1;
    
    if (arg2[1] < 0)
        return result;
    
    int64_t r9_1 = arg2[1];
    return result + *(arg2[2] + *(r9_1 + arg1)) + r9_1;
}

int64_t __FrameUnwindFilter(int64_t* arg1)
{
    int32_t* rax = *arg1;
    
    if (*rax == 0xe0434352 || *rax == 0xe0434f4d)
    {
        if (*(__vcrt_getptd() + 0x30) > 0)
        {
            void* rax_2 = __vcrt_getptd();
            *(rax_2 + 0x30) -= 1;
        }
    }
    else if (*rax == 0xe06d7363)
    {
        *(__vcrt_getptd() + 0x30) = 0;
        sub_140010504();
        /* no return */
    }
    
    return 0;
}

void sub_14000c7f8() __noreturn
{
    sub_140010504();
    /* no return */
}

void* memchr(char (* arg1)[0x10], int32_t arg2, int64_t arg3)
{
    uint64_t rax;
    
    if (arg3 >= 0x10)
    {
        arg2 = arg2 * 0x1010101;
        uint128_t zmm0 = _mm_shuffle_epi32(arg2, 0);
        
        do
        {
            char zmm1[0x10] = *arg1;
            arg1 = &arg1[1];
            int64_t temp0_2 = arg3;
            arg3 -= 0x10;
            uint64_t rflags_1;
            rax = _bit_scan_forward(_mm_movemask_epi8(_mm_cmpeq_epi8(zmm1, zmm0)));
            
            if (temp0_2 != 0x10)
                return &(*arg1)[rax - 0x10];
        } while (arg3 >= 0x10);
    }
    
    if (arg3)
    {
        int64_t i;
        
        do
        {
            rax = *arg1;
            arg1 = &(*arg1)[1];
            rax ^= arg2;
            
            if (!rax)
                return &(*arg1)[-1];
            
            i = arg3;
            arg3 -= 1;
        } while (i != 1);
    }
    
    return 0;
}

uint64_t memcmp(char* arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rdx = arg2 - arg1;
    uint64_t rax;
    bool c_1;
    
    if (arg3 >= 8)
    {
        while (arg1 & 7)
        {
            rax = *arg1;
            char temp4_1 = *(arg1 + rdx);
            c_1 = rax < temp4_1;
            
            if (rax != temp4_1)
                goto label_14000c8e3;
            
            arg1 = &arg1[1];
            arg3 -= 1;
        }
        
        uint64_t r9_2 = arg3 >> 3;
        
        if (r9_2)
        {
            uint64_t i_2 = r9_2 >> 2;
            
            if (i_2)
            {
                uint64_t i;
                
                do
                {
                    rax = *arg1;
                    
                    if (rax != *(arg1 + rdx))
                        goto label_14000c954;
                    
                    rax = *(arg1 + 8);
                    
                    if (rax != *(arg1 + rdx + 8))
                        goto label_14000c950;
                    
                    rax = *(arg1 + 0x10);
                    
                    if (rax != *(arg1 + rdx + 0x10))
                        goto label_14000c94c;
                    
                    rax = *(arg1 + 0x18);
                    
                    if (rax != *(arg1 + rdx + 0x18))
                    {
                        arg1 = &arg1[8];
                    label_14000c94c:
                        arg1 = &arg1[8];
                    label_14000c950:
                        arg1 = &arg1[8];
                    label_14000c954:
                        uint64_t rcx = *(rdx + arg1);
                        uint64_t rax_4 = _bswap(rax);
                        int32_t rax_5 = rax_4 - rax_4;
                        bool c_4 = /* bool c_4 = unimplemented  {sbb eax, eax} */;
                        return rax_5 + 1;
                    }
                    
                    arg1 = &arg1[0x20];
                    i = i_2;
                    i_2 -= 1;
                } while (i != 1);
                arg3 &= 0x1f;
            }
            
            uint64_t i_3 = arg3 >> 3;
            
            if (i_3)
            {
                uint64_t i_1;
                
                do
                {
                    rax = *arg1;
                    
                    if (rax != *(arg1 + rdx))
                        goto label_14000c954;
                    
                    arg1 = &arg1[8];
                    i_1 = i_3;
                    i_3 -= 1;
                } while (i_1 != 1);
                arg3 &= 7;
            }
        }
    }
    
    if (!arg3)
        return 0;
    
    while (true)
    {
        rax = *arg1;
        char temp0_1 = *(arg1 + rdx);
        c_1 = rax < temp0_1;
        
        if (rax != temp0_1)
            break;
        
        arg1 = &arg1[1];
        int64_t temp3_1 = arg3;
        arg3 -= 1;
        
        if (temp3_1 == 1)
            return 0;
    }
    
label_14000c8e3:
    bool c_2 = /* bool c_2 = unimplemented  {sbb eax, eax} */;
    return rax - rax + 1;
}

int64_t __vcrt_initialize(int64_t arg1)
{
    sub_14000e1bc();
    __vcrt_initialize_winapi_thunks(arg1);
    
    if (__vcrt_initialize_locks())
    {
        if (sub_14000cb30())
            return 1;
        
        sub_14000e214();
    }
    
    return 0;
}

int64_t __vcrt_uninitialize(char arg1)
{
    if (!arg1)
    {
        sub_14000cb78();
        sub_14000e214();
        __vcrt_uninitialize_winapi_thunks(0);
    }
    
    int64_t result;
    result = 1;
    return result;
}

uint64_t __std_type_info_compare(void* arg1, int64_t arg2)
{
    if (arg1 != arg2)
    {
        char* rax_1 = arg1 + 9;
        void* rdx_1 = arg2 + 9 - rax_1;
        
        do
        {
            arg1 = *rax_1;
            char temp0_1 = *(rax_1 + rdx_1);
            
            if (arg1 != temp0_1)
                return (rax_1 - rax_1) | 1;
            
            rax_1 = &rax_1[1];
        } while (arg1);
    }
    
    return 0;
}

void __vcrt_freefls(int64_t arg1)
{
    if (arg1 && arg1 != &data_140042b30)
        free(arg1);
}

void* __vcrt_getptd()
{
    void* result = sub_14000ca20();
    
    if (result)
        return result;
    
    abort();
    /* no return */
}

void* const sub_14000ca20()
{
    if (data_140040e40 == 0xffffffff)
        return nullptr;
    
    enum WIN32_ERROR dwErrCode = GetLastError();
    void* result_1 = sub_14000e4b4(data_140040e40);
    void* const result = nullptr;
    
    if (result_1 != -1)
    {
        if (!result_1)
        {
            if (sub_14000e4fc(data_140040e40, -1))
            {
                void* result_4 = j__calloc_base(1, 0x80);
                uint32_t rcx_3 = data_140040e40;
                void* const result_3 = result_4;
                
                if (!result_4)
                    sub_14000e4fc(rcx_3, 0);
                else if (!sub_14000e4fc(rcx_3, result_4))
                    sub_14000e4fc(data_140040e40, 0);
                else
                {
                    void* const result_2 = result_3;
                    *(result_3 + 0x78) = 0xfffffffe;
                    result_3 = nullptr;
                    result = result_2;
                }
                
                free(result_3);
            }
        }
        else
            result = result_1;
    }
    
    SetLastError(dwErrCode);
    return result;
}

int64_t __vcrt_getptd_noinit()
{
    if (data_140040e40 == 0xffffffff)
        return 0;
    
    enum WIN32_ERROR dwErrCode = GetLastError();
    int64_t result = sub_14000e4b4(data_140040e40);
    SetLastError(dwErrCode);
    
    if (result == -1)
        return 0;
    
    return result;
}

uint32_t sub_14000cb30()
{
    uint32_t result = sub_14000e424(__vcrt_freefls);
    data_140040e40 = result;
    
    if (result == 0xffffffff)
        result = 0;
    else if (!sub_14000e4fc(result, &data_140042b30))
    {
        sub_14000cb78();
        result = 0;
    }
    else
    {
        data_140042ba8 = 0xfffffffe;
        result = 1;
    }
    
    return result;
}

int64_t sub_14000cb78()
{
    uint32_t rcx = data_140040e40;
    
    if (rcx != 0xffffffff)
    {
        sub_14000e46c(rcx);
        data_140040e40 = 0xffffffff;
    }
    
    int64_t result;
    result = 1;
    return result;
}

int64_t __FrameHandler3::GetCurrentState(int64_t* arg1, int64_t* arg2, void* arg3)
{
    int32_t result = *(*(arg3 + 0x1c) + *arg1);
    
    if (result != 0xfffffffe)
        return result;
    
    return sub_14000cc40(arg3, arg2, *arg2);
}

uint64_t __FrameHandler3::GetUnwindTryBlock(int64_t* arg1, int64_t* arg2, void* arg3)
{
    int64_t arg_18;
    int64_t rcx = *__FrameHandler3::GetEstablisherFrame(arg1, arg2, arg3, &arg_18);
    int64_t rax_1 = *(arg3 + 0x1c);
    arg_18 = rcx;
    return *(rax_1 + rcx + 4);
}

int64_t sub_14000cbf0(int64_t* arg1, void* arg2, int32_t arg3)
{
    int64_t result = *arg1;
    *(*(arg2 + 0x1c) + result) = arg3;
    return result;
}

int64_t __FrameHandler3::SetUnwindTryBlock(int64_t* arg1, int64_t* arg2, void* arg3, int32_t arg4)
{
    int64_t arg_18;
    int64_t rcx = *__FrameHandler3::GetEstablisherFrame(arg1, arg2, arg3, &arg_18);
    int64_t result = *(arg3 + 0x1c);
    arg_18 = rcx;
    
    if (arg4 > *(result + rcx + 4))
        *(result + rcx + 4) = arg4;
    
    return result;
}

int64_t sub_14000cc38(void* arg1, int64_t* arg2)
{
    /* tailcall */
    return sub_14000cc40(arg1, arg2, *arg2);
}

uint64_t sub_14000cc40(void* arg1, void* arg2, int64_t arg3)
{
    if (arg1)
    {
        int64_t r11_1 = *(arg1 + 0x18);
        int64_t r10_1 = *(arg2 + 8);
        
        if (r11_1 + r10_1)
        {
            int32_t r8 = *(arg1 + 0x14);
            uint64_t r9 = 0;
            
            if (r8)
            {
                while (arg3 >= *(r11_1 + (r9 << 3) + r10_1) + r10_1)
                {
                    r9 = r9 + 1;
                    
                    if (r9 >= r8)
                        break;
                }
                
                if (r9)
                    return *(r11_1 + ((r9 - 1) << 3) + r10_1 + 4);
            }
            
            return 0xffffffff;
        }
    }
    
    sub_140010504();
    /* no return */
}

uint64_t sub_14000cca8(void* arg1, int64_t arg2, char* arg3, char* arg4)
{
    int64_t rsi = arg2;
    int32_t rdi = 0;
    int64_t rdx;
    int64_t r15;
    
    if (!*(arg3 + 4))
    {
        rdx = 0;
        r15 = 0;
    }
    else
    {
        r15 = *(arg3 + 4);
        rdx = r15 + _GetImageBase();
    }
    
    if (rdx)
    {
        void* rcx_1;
        
        if (!r15)
            rcx_1 = nullptr;
        else
            rcx_1 = _GetImageBase() + *(arg3 + 4);
        
        if (*(rcx_1 + 0x10) && (*(arg3 + 8) || *arg3 < 0))
        {
            if (*arg3 >= 0)
                rsi = *(arg3 + 8) + *rsi;
            
            int64_t rax;
            
            if (*arg3 & 0x80 && *arg4 & 0x10)
                rax = data_140042b28;
            
            if (*arg3 & 0x80 && *arg4 & 0x10 && rax)
            {
                int64_t rax_3 = rax();
                
                if (!rax_3 || !rsi)
                {
                    sub_140010504();
                    /* no return */
                }
                
                *rsi = rax_3;
                *rsi = __AdjustPointer(rax_3, &arg4[8]);
            }
            else if (*arg3 & 8)
            {
                int64_t rcx_2 = *(arg1 + 0x28);
                
                if (!rcx_2 || !rsi)
                {
                    sub_140010504();
                    /* no return */
                }
                
                *rsi = rcx_2;
                *rsi = __AdjustPointer(rcx_2, &arg4[8]);
            }
            else if (!(*arg4 & 1))
            {
                int64_t rcx_4;
                int64_t rbx_1;
                
                if (!*(arg4 + 0x18))
                {
                    rcx_4 = 0;
                    rbx_1 = 0;
                }
                else
                {
                    rbx_1 = *(arg4 + 0x18);
                    rcx_4 = rbx_1 + _GetThrowImageBase();
                }
                
                if (rcx_4)
                {
                    int64_t rcx_8;
                    
                    if (*(arg1 + 0x28) && rsi)
                    {
                        if (!rbx_1)
                            rcx_8 = 0;
                        else
                            rcx_8 = _GetThrowImageBase() + *(arg4 + 0x18);
                    }
                    
                    if (!*(arg1 + 0x28) || !rsi || !rcx_8)
                    {
                        sub_140010504();
                        /* no return */
                    }
                    
                    rax = *arg4;
                    rax &= 4;
                    char temp0_1 = rax;
                    rax = -(rax);
                    rdi = -((rcx_8 - rcx_8)) + 1;
                    int32_t var_28_1 = -((rcx_8 - rcx_8)) + 1;
                }
                else
                {
                    if (!*(arg1 + 0x28) || !rsi)
                    {
                        sub_140010504();
                        /* no return */
                    }
                    
                    sub_14000bee0(rsi, __AdjustPointer(*(arg1 + 0x28), &arg4[8]), *(arg4 + 0x14));
                }
            }
            else
            {
                int128_t* rdx_1 = *(arg1 + 0x28);
                
                if (!rdx_1 || !rsi)
                {
                    sub_140010504();
                    /* no return */
                }
                
                sub_14000bee0(rsi, rdx_1, *(arg4 + 0x14));
                
                if (*(arg4 + 0x14) == 8 && *rsi)
                    *rsi = __AdjustPointer(*rsi, &arg4[8]);
            }
            
            return rdi;
        }
    }
    
    return 0;
}

int64_t sub_14000cea8(void* arg1, int64_t arg2, int32_t* arg3, char* arg4)
{
    int64_t rbx = 0;
    int64_t rsi;
    
    if (*arg3 >= 0)
        rsi = arg3[2] + *arg2;
    else
        rsi = arg2;
    
    int32_t rax = sub_14000cca8(arg1, arg2, arg3, arg4);
    int32_t result = rax - 1;
    
    if (rax == 1)
    {
        int64_t rax_3 = __AdjustPointer(*(arg1 + 0x28), &arg4[8]);
        
        if (*(arg4 + 0x18))
        {
            int64_t rax_4 = _GetThrowImageBase();
            rbx = *(arg4 + 0x18) + rax_4;
        }
        
        return sub_14000e124(rsi, rbx, rax_3);
    }
    
    if (result != 1)
        return result;
    
    int64_t rax_1 = __AdjustPointer(*(arg1 + 0x28), &arg4[8]);
    
    if (*(arg4 + 0x18))
    {
        int64_t rax_2 = _GetThrowImageBase();
        rbx = *(arg4 + 0x18) + rax_2;
    }
    
    return sub_14000e130(rsi, rbx, rax_1, 1);
}

void sub_14000cf62() __noreturn
{
    sub_140010504();
    /* no return */
}

int64_t sub_14000cf68(void* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4, void* arg5, int32_t* arg6, char* arg7, int32_t* arg8, char arg9)
{
    void arg_10;
    int64_t* rax = __FrameHandler3::GetEstablisherFrame(arg2, arg4, arg5, &arg_10);
    
    if (arg7)
        sub_14000cea8(arg1, rax, arg6, arg7);
    
    int64_t rcx_3;
    rcx_3 = arg9;
    char var_48 = rcx_3;
    int64_t* var_50 = arg4;
    return __FrameHandler3::UnwindNestedFrames(arg2, arg1, arg3, rax, _GetImageBase() + arg6[3], 
        arg5, *arg8, arg8[2], arg6);
}

void* sub_14000d03c(int32_t* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4, int32_t* arg5, char arg6, int32_t arg7, int64_t arg8)
{
    void var_168;
    int64_t rax_1 = __security_cookie ^ &var_168;
    int64_t* r12 = arg2;
    int64_t r15 = arg3;
    int64_t var_100 = arg3;
    int32_t* rbx = arg1;
    uint64_t r13;
    r13 = 0;
    char var_107 = 0;
    char var_108 = 0;
    int32_t rax_3 = __FrameHandler3::GetHandlerSearchState(r12, arg4, arg5);
    
    if (rax_3 >= 0xffffffff && rax_3 < arg5[1])
    {
        if (*rbx != 0xe06d7363 || rbx[6] != 4 || rbx[8] - 0x19930520 > 2 || *(rbx + 0x30))
            goto label_14000d194;
        
        void* result = __vcrt_getptd();
        
        if (!*(result + 0x20))
        {
            __security_check_cookie(rax_1 ^ &var_168);
            return result;
        }
        
        rbx = *(__vcrt_getptd() + 0x20);
        var_107 = 1;
        r15 = *(__vcrt_getptd() + 0x28);
        var_100 = r15;
        _SetThrowImageBase(*(rbx + 0x38));
        
        if (*rbx != 0xe06d7363 || rbx[6] != 4 || rbx[8] - 0x19930520 > 2 || *(rbx + 0x30))
        {
            if (!*(__vcrt_getptd() + 0x38))
                goto label_14000d194;
            
            int32_t* r15_1 = *(__vcrt_getptd() + 0x38);
            *(__vcrt_getptd() + 0x38) = 0;
            uint128_t var_70;
            
            if (sub_14000dfac(rbx, r15_1))
            {
                r15 = var_100;
            label_14000d194:
                int64_t var_a8_1 = arg4[1];
                int32_t* var_b0 = arg5;
                
                if (*rbx != 0xe06d7363 || rbx[6] != 4 || rbx[8] - 0x19930520 > 2)
                {
                    if (arg5[3] <= 0)
                        goto label_14000d4c1;
                    
                    if (!arg6)
                    {
                        sub_14000d518(rbx, r12, r15, arg4, arg5, rax_3, arg7, arg8);
                    label_14000d4c1:
                        result = __vcrt_getptd();
                        
                        if (!*(result + 0x38))
                        {
                            __security_check_cookie(rax_1 ^ &var_168);
                            return result;
                        }
                    }
                }
                else
                {
                    int32_t var_140;
                    char* var_d8;
                    
                    if (arg5[3] <= 0)
                    {
                    label_14000d3b4:
                        
                        if ((*arg5 & 0x1fffffff) < 0x19930521)
                            goto label_14000d4c1;
                    }
                    else
                    {
                        var_140 = arg7;
                        uint128_t var_90;
                        sub_14000bad4(&var_90, &var_b0, rax_3, arg4, arg5);
                        uint128_t zmm0_1 = var_90;
                        int96_t var_a0_1 = zmm0_1;
                        int32_t var_78;
                        
                        if (_mm_bsrli_si128(zmm0_1, 8) >= var_78)
                            goto label_14000d3b4;
                        
                        void* r9_1 = var_90;
                        int32_t r15_2 = *(&var_a0_1 + 8);
                        void* var_e8_1 = r9_1;
                        
                        do
                        {
                            int64_t rax_23 = *(r9_1 + 8);
                            int64_t r8_2 = *(*var_a0_1 + 0x10) + r15_2 * 0x14;
                            zmm0_1 = *(r8_2 + rax_23);
                            int64_t rcx_6 = *(r8_2 + rax_23 + 0x10);
                            int32_t var_b8_1 = rcx_6;
                            uint128_t var_c8 = zmm0_1;
                            
                            if (zmm0_1 <= rax_3 && rax_3 <= var_c8 >> 0x20)
                            {
                                int64_t rdx_6 = rcx_6 + arg4[1];
                                r13 = 0;
                                uint32_t r12_2 = *(&var_c8 + 8) >> 0x20;
                                int64_t var_d0_1 = rdx_6;
                                
                                if (!r12_2)
                                {
                                    r12 = arg2;
                                    r13 = var_108;
                                }
                                else
                                {
                                    while (true)
                                    {
                                        int64_t rcx_8 = r13 * 5;
                                        var_70 = *(rdx_6 + (rcx_8 << 2));
                                        int32_t var_60_1 = *(rdx_6 + (rcx_8 << 2) + 0x10);
                                        int32_t* var_f8_1 =
                                            _GetThrowImageBase() + 4 + *(*(rbx + 0x30) + 0xc);
                                        int32_t rcx_11 =
                                            *(_GetThrowImageBase() + *(*(rbx + 0x30) + 0xc));
                                        int32_t var_104_1 = rcx_11;
                                        
                                        if (rcx_11 > 0)
                                        {
                                            while (true)
                                            {
                                                void* rax_32 = _GetThrowImageBase();
                                                char* r8_3 = *(rbx + 0x30);
                                                char* rax_33 = rax_32 + *var_f8_1;
                                                var_d8 = rax_33;
                                                
                                                if (TypeMatchHelper<class __FrameHandler3>(&var_70, 
                                                    rax_33, r8_3))
                                                {
                                                    int32_t rax_34;
                                                    rax_34 = arg6;
                                                    r13 = 1;
                                                    r12 = arg2;
                                                    char var_110_1 = rax_34;
                                                    rax_34 = var_107;
                                                    char var_118_1 = rax_34;
                                                    int64_t var_120_1 = arg8;
                                                    int32_t var_138;
                                                    var_138 = var_d8;
                                                    var_140 = &var_70;
                                                    var_108 = 1;
                                                    sub_14000cf68(rbx, r12, var_100, arg4, arg5, 
                                                        var_140, var_138, &var_c8, arg7);
                                                    break;
                                                }
                                                
                                                var_f8_1 = &var_f8_1[1];
                                                int32_t rax_36 = var_104_1 - 1;
                                                var_104_1 = rax_36;
                                                
                                                if (rax_36 <= 0)
                                                    goto label_14000d305;
                                            }
                                            
                                            break;
                                        }
                                        
                                    label_14000d305:
                                        r13 = r13 + 1;
                                        
                                        if (r13 == r12_2)
                                        {
                                            r12 = arg2;
                                            r13 = var_108;
                                            break;
                                        }
                                        
                                        rdx_6 = var_d0_1;
                                    }
                                    
                                    r9_1 = var_e8_1;
                                }
                            }
                            
                            r15_2 += 1;
                        } while (r15_2 < var_78);
                        
                        if (r13 || (*arg5 & 0x1fffffff) < 0x19930521)
                            goto label_14000d4c1;
                    }
                    
                    int64_t rax_43;
                    
                    if (!arg5[8])
                        rax_43 = 0;
                    else
                        rax_43 = _GetImageBase() + arg5[8];
                    
                    if (!rax_43)
                    {
                        if (!(arg5[9] >> 2 & 1))
                            goto label_14000d4c1;
                        
                        if (__FrameHandler3::ExecutionInCatch(arg4, arg5))
                            goto label_14000d4c1;
                    }
                    
                    if (!(arg5[9] >> 2 & 1))
                    {
                        int32_t* rdx_13;
                        
                        if (!arg5[8])
                            rdx_13 = nullptr;
                        else
                            rdx_13 = _GetImageBase() + arg5[8];
                        
                        if (!sub_14000dfac(rbx, rdx_13))
                        {
                            char var_118_2 = arg6;
                            int64_t* var_120_2 = arg4;
                            int64_t* var_130;
                            var_130 = 0xffffffff;
                            var_140 = arg5;
                            __FrameHandler3::UnwindNestedFrames(r12, rbx, var_100, 
                                __FrameHandler3::GetEstablisherFrame(r12, arg4, arg5, &var_d8), 0, 
                                var_140, 0xffffffff, var_130, 0);
                        }
                        
                        goto label_14000d4c1;
                    }
                }
            }
            else
            {
                char rax_14;
                int64_t rdx_2;
                rax_14 = sub_14000e09c(r15_1);
                
                if (rax_14)
                {
                    rdx_2 = 1;
                    sub_14000c6e0(rbx);
                    sub_14000daf4(&var_70);
                    sub_14000b810(&var_70, &data_14003e498);
                    /* no return */
                }
            }
        }
    }
    
    sub_140010504();
    /* no return */
}

void* const* sub_14000d518(int32_t* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4, void* arg5, int32_t arg6, int32_t arg7, int64_t arg8)
{
    void* const* result = &__return_addr;
    
    if (*arg1 != 0x80000003)
    {
        if (*(__vcrt_getptd() + 0x10))
        {
            int64_t rax_1 = EncodePointer(nullptr);
            
            if (*(__vcrt_getptd() + 0x10) != rax_1 && *arg1 != 0xe0434f4d && *arg1 != 0xe0434352)
            {
                int64_t var_c8_1 = arg8;
                int32_t var_d0_1 = arg7;
                void* var_d8_1 = arg5;
                sub_14000b8d0(arg1);
            }
        }
        
        int64_t var_90_1 = arg4[1];
        void* var_98 = arg5;
        
        if (*(arg5 + 0xc) <= 0)
        {
            sub_140010504();
            /* no return */
        }
        
        int32_t var_d0_2 = arg7;
        uint128_t var_60;
        sub_14000bad4(&var_60, &var_98, arg6, arg4, arg5);
        uint128_t zmm0_1 = var_60;
        int96_t var_88_1 = zmm0_1;
        result = _mm_bsrli_si128(zmm0_1, 8);
        int32_t var_48;
        
        if (result < var_48)
        {
            void* r9_2 = var_60;
            int32_t r15_1 = *(&var_88_1 + 8);
            void* arg_8 = r9_2;
            
            do
            {
                int64_t rax_8 = *(r9_2 + 8);
                uint128_t* r8_2 = *(*var_88_1 + 0x10) + r15_1 * 0x14;
                zmm0_1 = *(r8_2 + rax_8);
                int64_t rcx_3 = *(r8_2 + rax_8 + 0x10);
                int32_t var_68_1 = rcx_3;
                result = zmm0_1;
                uint128_t var_78 = zmm0_1;
                
                if (result <= arg6)
                {
                    result = var_78 >> 0x20;
                    
                    if (arg6 <= result)
                    {
                        char* rbx_6 = rcx_3 + arg4[1] + ((*(&var_78 + 8) >> 0x20) - 1) * 0x14;
                        int64_t r12_1;
                        
                        if (!*(rbx_6 + 4))
                        {
                            result = nullptr;
                            r12_1 = 0;
                        }
                        else
                        {
                            r12_1 = *(rbx_6 + 4);
                            result = _GetImageBase() + r12_1;
                        }
                        
                        if (!result)
                        {
                        label_14000d6b1:
                            
                            if (!(*rbx_6 & 0x40))
                            {
                                char var_a0_1 = 0;
                                char var_a8_1 = 1;
                                int64_t var_b0_1 = arg8;
                                var_d0_2 = rbx_6;
                                result = sub_14000cf68(arg1, arg2, arg3, arg4, arg5, var_d0_2, 
                                    nullptr, &var_78, arg7);
                            }
                        }
                        else
                        {
                            if (!r12_1)
                                result = nullptr;
                            else
                                result = _GetImageBase() + *(rbx_6 + 4);
                            
                            if (!result[2])
                                goto label_14000d6b1;
                        }
                        
                        r9_2 = arg_8;
                    }
                }
                
                r15_1 += 1;
            } while (r15_1 < var_48);
        }
    }
    
    return result;
}

uint64_t TypeMatchHelper<class __FrameHandler3>(char* arg1, char* arg2, char* arg3)
{
    int32_t rbx = 0;
    int64_t rcx;
    int64_t rsi;
    
    if (!*(arg1 + 4))
    {
        rcx = 0;
        rsi = 0;
    }
    else
    {
        rsi = *(arg1 + 4);
        rcx = rsi + _GetImageBase();
    }
    
    if (rcx)
    {
        void* const rcx_1;
        int64_t rsi_1;
        
        if (!rsi)
        {
            rcx_1 = nullptr;
            rsi_1 = 0;
        }
        else
        {
            rsi_1 = *(arg1 + 4);
            rcx_1 = rsi_1 + _GetImageBase();
        }
        
        if (*(rcx_1 + 0x10) && (!(*arg1 & 0x80) || !(*arg2 & 0x10)))
        {
            int64_t rsi_3;
            
            if (!rsi_1)
                rsi_3 = 0;
            else
                rsi_3 = _GetImageBase() + *(arg1 + 4);
            
            if (rsi_3 != _GetThrowImageBase() + *(arg2 + 4))
            {
                int64_t rsi_5;
                
                if (!*(arg1 + 4))
                    rsi_5 = 0;
                else
                    rsi_5 = _GetImageBase() + *(arg1 + 4);
                
                int64_t rax_9 = _GetThrowImageBase();
                int64_t rax_6 = rsi_5 + 0x10;
                int64_t r8_3 = *(arg2 + 4) + 0x10 + rax_9 - rax_6;
                uint32_t rcx_4;
                uint32_t i;
                
                do
                {
                    rcx_4 = *rax_6;
                    i = *(rax_6 + r8_3);
                    
                    if (rcx_4 != i)
                        break;
                    
                    rax_6 += 1;
                } while (i);
                
                if (rcx_4 - i)
                    return 0;
            }
            
            if ((!(*arg2 & 2) || *arg1 & 8) && (!(*arg3 & 1) || *arg1 & 1)
                    && (!(*arg3 & 4) || *arg1 & 4) && (!(*arg3 & 2) || *arg1 & 2))
                rbx = 1;
            
            return rbx;
        }
    }
    
    return 1;
}

int64_t sub_14000d870(int32_t* arg1, int64_t* arg2, void* arg3, int64_t* arg4, int32_t* arg5, int32_t arg6, int64_t arg7, char arg8)
{
    __except_validate_context_record(arg3);
    
    if (*(__vcrt_getptd() + 0x40) || *arg1 == 0xe06d7363)
    {
    label_14000d8f6:
        
        if (!(arg1[1] & 0x66))
        {
            if (arg5[3])
            {
            label_14000d9f1:
                
                if (*arg1 == 0xe06d7363 && arg1[6] >= 3 && arg1[8] > 0x19930522)
                {
                    int64_t r10_2;
                    
                    if (!*(*(arg1 + 0x30) + 8))
                        r10_2 = 0;
                    else
                    {
                        int64_t rax_13 = _GetThrowImageBase();
                        r10_2 = *(*(arg1 + 0x30) + 8) + rax_13;
                    }
                    
                    if (r10_2)
                    {
                        int64_t var_20;
                        var_20 = arg8;
                        int32_t var_28;
                        var_28 = arg7;
                        char var_30;
                        var_30 = arg6;
                        return r10_2(arg1, arg2, arg3, arg4, arg5, var_30, var_28, var_20);
                    }
                }
                
                int32_t rax_20;
                rax_20 = arg8;
                sub_14000d03c(arg1, arg2, arg3, arg4, arg5, rax_20, arg6, arg7);
            }
            else
            {
                if ((*arg5 & 0x1fffffff) >= 0x19930521)
                {
                    int64_t rax_7;
                    
                    if (!arg5[8])
                        rax_7 = 0;
                    else
                        rax_7 = _GetImageBase() + arg5[8];
                    
                    if (rax_7)
                        goto label_14000d9f1;
                }
                
                if ((*arg5 & 0x1fffffff) >= 0x19930522 && arg5[9] >> 2 & 1)
                    goto label_14000d9f1;
            }
        }
        else if (arg5[1] && !arg6)
        {
            if (!(arg1[1] & 0x20))
                __FrameHandler3::FrameUnwindToEmptyState(arg2, arg4, arg5);
            else if (*arg1 == 0x80000026)
            {
                int32_t rax_3 = sub_14000cc40(arg5, arg4, arg4[4]);
                
                if (rax_3 < 0xffffffff || rax_3 >= arg5[1])
                {
                    sub_140010504();
                    /* no return */
                }
                
                sub_14000dd88(arg2, arg4, arg5, rax_3);
            }
            else if (*arg1 != 0x80000029)
                __FrameHandler3::FrameUnwindToEmptyState(arg2, arg4, arg5);
            else
            {
                int32_t r9 = arg1[0xe];
                
                if (r9 < 0xffffffff || r9 >= arg5[1])
                {
                    sub_140010504();
                    /* no return */
                }
                
                sub_14000dd88(*(arg1 + 0x28), arg4, arg5, r9);
            }
        }
    }
    else if (*arg1 != 0x80000029)
    {
        if (*arg1 == 0x80000026 || (*arg5 & 0x1fffffff) < 0x19930522 || !(arg5[9] & 1))
            goto label_14000d8f6;
    }
    else if (arg1[6] != 0xf)
    {
        if ((*arg5 & 0x1fffffff) < 0x19930522 || !(arg5[9] & 1))
            goto label_14000d8f6;
    }
    else if (*(arg1 + 0x60) == 0x19930520 || *arg1 == 0x80000026
            || (*arg5 & 0x1fffffff) < 0x19930522 || !(arg5[9] & 1))
        goto label_14000d8f6;
    
    return 1;
}

struct std::exception::VTable** sub_14000dab8(struct std::exception::VTable** arg1, void* arg2)
{
    *arg1 = &std::exception::`vftable';
    *(arg1 + 8) = {0};
    __std_exception_copy(arg2 + 8, &arg1[1]);
    *arg1 = &std::bad_exception::`vftable'{for `std::exception'};
    return arg1;
}

struct std::exception::std::bad_exception::VTable** sub_14000daf4(struct std::exception::std::bad_exception::VTable** arg1)
{
    arg1[2] = 0;
    arg1[1] = "bad exception";
    *arg1 = &std::bad_exception::`vftable'{for `std::exception'};
    return arg1;
}

int64_t __FrameHandler3::CxxCallCatchBlock(void* arg1)
{
    int32_t var_88 = 0;
    int32_t arg_8 = 0;
    int64_t var_80 = 0;
    int64_t arg_20 = 0;
    int64_t r13 = *(__vcrt_getptd() + 0x28);
    int64_t var_68 = r13;
    int64_t rax_2 = *(__vcrt_getptd() + 0x20);
    int32_t* rsi = *(arg1 + 0x50);
    int32_t* arg_10 = rsi;
    void* rax_3 = *(arg1 + 0x48);
    void* rbx = *(arg1 + 0x40);
    int64_t rax_4 = *(arg1 + 0x30);
    int64_t* r14 = *(arg1 + 0x28);
    int64_t* var_58 = r14;
    __except_validate_context_record(rbx);
    *(__vcrt_getptd() + 0x20) = rsi;
    *(__vcrt_getptd() + 0x28) = rbx;
    void var_48;
    int64_t* rax_8;
    int512_t zmm0;
    rax_8 = _CreateFrameInfo(&var_48, *(*(__vcrt_getptd() + 0x20) + 0x28));
    int64_t* var_70 = rax_8;
    
    if (*(arg1 + 0x58))
    {
        arg_8 = 1;
        void* rax_9;
        rax_9 = __vcrt_getptd();
        arg_20 = *(rax_9 + 0x70);
    }
    
    int64_t result = _CallSettingFrame(rax_4, r14, zmm0);
    int64_t result_1 = result;
    sub_14000bd74(rax_8);
    
    if (*rsi == 0xe06d7363 && rsi[6] == 4 && rsi[8] - 0x19930520 <= 2)
    {
        int32_t rax_12;
        int64_t rdx_3;
        rax_12 = _IsExceptionObjectToBeDestroyed(*(rsi + 0x28));
        
        if (rax_12)
        {
            rdx_3 = 1;
            sub_14000c6e0(rsi);
        }
    }
    
    *(__vcrt_getptd() + 0x20) = rax_2;
    *(__vcrt_getptd() + 0x28) = r13;
    *(*(rax_3 + 0x1c) + *r14) = -2;
    return result;
}

void sub_14000dc0e(int32_t arg1, int32_t* arg2, int32_t* arg3) __noreturn
{
    int32_t arg_20 = 1;
    void* rax;
    int64_t rdx;
    rax = __vcrt_getptd();
    *(rax + 0x40) = 0;
    uint32_t dwExceptionCode;
    uint32_t dwExceptionFlags;
    uint32_t nNumberOfArguments;
    uint64_t* lpArguments;
    
    if (!arg1)
    {
        lpArguments = &arg2[8];
        nNumberOfArguments = arg2[6];
        dwExceptionFlags = arg2[1];
        dwExceptionCode = *arg2;
    }
    else
    {
        rdx = 1;
        sub_14000c6e0(arg2);
        lpArguments = &arg3[8];
        nNumberOfArguments = arg3[6];
        dwExceptionFlags = arg3[1];
        dwExceptionCode = *arg3;
    }
    
    RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, lpArguments);
    /* no return */
}

int64_t ExFilterRethrow(int64_t* arg1, void* arg2, int32_t* arg3)
{
    int32_t* r9 = *arg1;
    *arg3 = 0;
    
    if (*r9 == 0xe06d7363 && r9[6] == 4)
    {
        if (r9[8] - 0x19930520 <= 2 && *(r9 + 0x28) == *(arg2 + 0x28))
            *arg3 = 1;
        
        if ((r9[8] - 0x19930520 > 2 || *(r9 + 0x28) != *(arg2 + 0x28) || *r9 == 0xe06d7363)
            && r9[6] == 4 && r9[8] - 0x19930520 <= 2 && !*(r9 + 0x30))
        {
            *(__vcrt_getptd() + 0x40) = 1;
            *arg3 = 1;
            return 1;
        }
    }
    
    return 0;
}

int64_t sub_14000dd88(int64_t* arg1, int64_t* arg2, void* arg3, int32_t arg4)
{
    int32_t arg_20 = arg4;
    void* arg_18 = arg3;
    int64_t* arg_8 = arg1;
    int64_t rax = _GetImageBase();
    int64_t var_40 = rax;
    int32_t i = __FrameHandler3::GetCurrentState(arg1, arg2, arg3);
    void* rax_2 = __vcrt_getptd();
    *(rax_2 + 0x30) += 1;
    
    while (i != 0xffffffff)
    {
        if (i <= arg4)
            break;
        
        if (i <= 0xffffffff || i >= *(arg3 + 4))
        {
            sub_140010504();
            /* no return */
        }
        
        int64_t i_3 = i;
        int64_t rax_3 = _GetImageBase();
        i = *(*(arg3 + 8) + rax_3 + (i_3 << 3));
        int32_t i_1 = i;
        int64_t rax_5 = _GetImageBase();
        int64_t rax_10;
        
        if (!*(*(arg3 + 8) + rax_5 + (i_3 << 3) + 4))
            rax_10 = 0;
        else
        {
            int64_t rax_7 = _GetImageBase();
            rax_10 = _GetImageBase() + *(*(arg3 + 8) + rax_7 + (i_3 << 3) + 4);
        }
        
        if (rax_10)
        {
            sub_14000cbf0(arg1, arg3, i);
            int64_t rax_11;
            int512_t zmm0_1;
            rax_11 = _GetImageBase();
            int64_t rax_16;
            
            if (!*(*(arg3 + 8) + rax_11 + (i_3 << 3) + 4))
                rax_16 = 0;
            else
            {
                int64_t rax_13 = _GetImageBase();
                int64_t rbx_2 = *(*(arg3 + 8) + rax_13 + (i_3 << 3) + 4);
                int64_t rax_15;
                rax_15 = _GetImageBase();
                rax_16 = rax_15 + rbx_2;
            }
            
            _CallSettingFrame(rax_16, arg1, zmm0_1);
            _SetImageBase(rax);
        }
        
        int32_t i_2 = i;
    }
    
    if (*(__vcrt_getptd() + 0x30) > 0)
    {
        void* rax_18 = __vcrt_getptd();
        *(rax_18 + 0x30) -= 1;
    }
    
    if (i == 0xffffffff || i <= arg4)
        return sub_14000cbf0(arg1, arg3, i);
    
    sub_140010504();
    /* no return */
}

uint64_t __FrameHandler3::GetHandlerSearchState(int64_t* arg1, int64_t* arg2, void* arg3)
{
    int32_t rbx = sub_14000cc38(arg3, arg2);
    void arg_20;
    __FrameHandler3::GetEstablisherFrame(arg1, arg2, arg3, &arg_20);
    
    if (rbx <= __FrameHandler3::GetUnwindTryBlock(arg1, arg2, arg3))
        rbx = __FrameHandler3::GetUnwindTryBlock(arg1, arg2, arg3);
    else
    {
        sub_14000cbf0(&arg_20, arg3, rbx);
        __FrameHandler3::SetUnwindTryBlock(arg1, arg2, arg3, rbx);
    }
    
    return rbx;
}

uint64_t sub_14000dfac(void* arg1, int32_t* arg2)
{
    if (!arg2)
    {
        sub_140010504();
        /* no return */
    }
    
    int64_t r15;
    r15 = 0;
    int32_t i = 0;
    
    if (*arg2 > 0)
    {
        do
        {
            int64_t rax = _GetThrowImageBase();
            int32_t* r12_3 = *(*(arg1 + 0x30) + 0xc) + 4 + rax;
            int32_t j = *(_GetThrowImageBase() + *(*(arg1 + 0x30) + 0xc));
            
            while (j > 0)
            {
                void* rax_5 = _GetThrowImageBase();
                char* rbx_1 = *(arg1 + 0x30);
                char* rdi_2 = rax_5 + *r12_3;
                int64_t rax_7 = _GetImageBase();
                
                if (TypeMatchHelper<class __FrameHandler3>(arg2[1] + rax_7 + i * 0x14, rdi_2, 
                    rbx_1))
                {
                    r15 = 1;
                    break;
                }
                
                j -= 1;
                r12_3 = &r12_3[1];
            }
            
            i += 1;
        } while (i < *arg2);
    }
    
    uint64_t result;
    result = r15;
    return result;
}

int64_t sub_14000e09c(int32_t* arg1)
{
    int32_t rbp = 0;
    int32_t result;
    
    if (*arg1 <= 0)
    {
    label_14000e109:
        result = 0;
    }
    else
    {
        int64_t rsi_1 = 0;
        
        while (true)
        {
            int64_t rax = _GetImageBase();
            void* rax_5;
            
            if (!*(arg1[1] + rax + rsi_1 + 4))
                rax_5 = nullptr;
            else
            {
                int64_t rax_2 = _GetImageBase();
                rax_5 = _GetImageBase() + *(arg1[1] + rax_2 + rsi_1 + 4);
            }
            
            if (!__std_type_info_compare(rax_5 + 8, 
                &class std::bad_exception `RTTI Type Descriptor'.spare))
            {
                result = 1;
                break;
            }
            
            rbp += 1;
            rsi_1 += 0x14;
            
            if (rbp >= *arg1)
                goto label_14000e109;
        }
    }
    
    return result;
}

int64_t sub_14000e124(int64_t, int64_t arg2)
{
    /* jump -> arg2 */
}

int64_t sub_14000e130(int64_t, int64_t arg2, int64_t arg3, int32_t arg4)
{
    /* jump -> arg2 */
}

int64_t _NLG_Notify()
{
    int64_t rcx;
    int64_t arg_8 = rcx;
    int64_t rdx;
    int64_t arg_18 = rdx;
    int32_t r8;
    int32_t arg_10 = r8;
    /* tailcall */
    return __NLG_Dispatch2();
}

int64_t __NLG_Dispatch2() __pure
{
    return;
}

int64_t __NLG_Return2() __pure
{
    return;
}

void (*)(void (* arg1)()) __except_validate_context_record(void* arg1)
{
    return _guard_check_icall;
}

uint64_t sub_14000e1bc()
{
    uint64_t __security_cookie_1 = __security_cookie;
    data_140042bb0 = __security_cookie_1;
    return __security_cookie_1;
}

int64_t __vcrt_initialize_locks()
{
    uint64_t rbx = 0;
    int32_t result;
    
    while (true)
    {
        if (!sub_14000e550(&data_140042bb8 + rbx * 0x28, 0xfa0, 0))
        {
            sub_14000e214();
            result = 0;
            break;
        }
        
        data_140042be0 += 1;
        rbx = rbx + 1;
        
        if (rbx >= 1)
        {
            result = 1;
            break;
        }
    }
    
    return result;
}

int64_t sub_14000e214()
{
    uint64_t rbx = data_140042be0;
    
    while (rbx)
    {
        rbx = rbx - 1;
        DeleteCriticalSection(&data_140042bb8 + rbx * 0x28);
        data_140042be0 -= 1;
    }
    
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_14000e24c(int32_t arg1, PSTR arg2, int32_t* arg3, int64_t arg4)
{
    uint64_t r15 = arg1;
    int32_t* rbp = arg3;
    uint64_t __security_cookie_2 = __security_cookie;
    int64_t rcx;
    rcx = __security_cookie_2 & 0x3f;
    int64_t rdx_2 = RORQ(__security_cookie_2 ^ *((r15 << 3) + &data_140042c00), rcx);
    
    if (rdx_2 != -1)
    {
        if (rdx_2)
            return rdx_2;
        
        HMODULE rbx_1;
        
        if (arg3 == arg4)
        {
        label_14000e397:
            rbx_1 = nullptr;
        }
        else
        {
            while (true)
            {
                uint64_t rsi_1 = *rbp;
                rbx_1 = *((rsi_1 << 3) + &data_140042be8);
                
                if (!rbx_1)
                {
                    PWSTR lpLibFileName = (&data_14002ea48)[rsi_1];
                    HMODULE rax_3 =
                        LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
                    rbx_1 = rax_3;
                    
                    if (!rax_3)
                    {
                        enum WIN32_ERROR rax_4 = GetLastError();
                        
                        if (rax_4 != ERROR_INVALID_PARAMETER)
                            rbx_1 = nullptr;
                        else if (!wcsncmp(lpLibFileName, u"api-ms-", rax_4 - 0x50))
                            rbx_1 = nullptr;
                        else if (!wcsncmp(lpLibFileName, u"ext-ms-", rax_4 - 0x50))
                            rbx_1 = nullptr;
                        else
                            rbx_1 = LoadLibraryExW(lpLibFileName, nullptr, 0);
                    }
                    
                    if (rbx_1)
                    {
                        int64_t temp0_2 = *((rsi_1 << 3) + &data_140042be8);
                        *((rsi_1 << 3) + &data_140042be8) = rbx_1;
                        
                        if (temp0_2)
                            FreeLibrary(rbx_1);
                        
                        goto label_14000e37e;
                    }
                    
                    *((rsi_1 << 3) + &data_140042be8);
                    *((rsi_1 << 3) + &data_140042be8) = -1;
                }
                else if (rbx_1 != -1)
                {
                label_14000e37e:
                    
                    if (rbx_1)
                    {
                        __security_cookie_2 = __security_cookie;
                        break;
                    }
                }
                
                rbp = &rbp[1];
                
                if (rbp == arg4)
                {
                    __security_cookie_2 = __security_cookie;
                    goto label_14000e397;
                }
            }
        }
        
        if (rbx_1)
        {
            int64_t rax_2 = GetProcAddress(rbx_1, arg2);
            
            if (rax_2)
            {
                uint64_t __security_cookie_1 = __security_cookie;
                *((r15 << 3) + &data_140042c00);
                *((r15 << 3) + &data_140042c00) =
                    RORQ(rax_2, 0x40 - (__security_cookie_1 & 0x3f)) ^ __security_cookie_1;
                return rax_2;
            }
            
            __security_cookie_2 = __security_cookie;
        }
        
        *((r15 << 3) + &data_140042c00);
        *((r15 << 3) + &data_140042c00) =
            RORQ(-1, 0x40 - (__security_cookie_2 & 0x3f)) ^ __security_cookie_2;
    }
    
    return 0;
}

int64_t sub_14000e424(int64_t arg1)
{
    int64_t rax = sub_14000e24c(0, "FlsAlloc", &data_14002eb18, &data_14002eb20);
    
    if (!rax)
        /* tailcall */
        return TlsAlloc();
    
    /* tailcall */
    return rax(arg1);
}

int64_t sub_14000e46c(uint32_t arg1)
{
    int64_t rax = sub_14000e24c(1, "FlsFree", &data_14002eb20, &data_14002eb28);
    
    if (!rax)
        /* tailcall */
        return TlsFree(arg1);
    
    /* tailcall */
    return rax(arg1);
}

int64_t sub_14000e4b4(uint32_t arg1)
{
    int64_t rax = sub_14000e24c(2, "FlsGetValue", &data_14002eb28, &data_14002eb30);
    
    if (!rax)
        /* tailcall */
        return TlsGetValue(arg1);
    
    /* tailcall */
    return rax(arg1);
}

int64_t sub_14000e4fc(uint32_t arg1, int64_t arg2)
{
    int64_t rax = sub_14000e24c(3, "FlsSetValue", &data_14002eb30, &data_14002eb38);
    
    if (!rax)
        return TlsSetValue(arg1, arg2);
    
    return rax(arg1, arg2);
}

int64_t sub_14000e550(CRITICAL_SECTION* arg1, uint32_t arg2, int32_t arg3)
{
    int64_t rax = sub_14000e24c(4, "InitializeCriticalSectionEx", &data_14002eb38, &data_14002eb40);
    
    if (!rax)
        return InitializeCriticalSectionAndSpinCount(arg1, arg2);
    
    return rax(arg1, arg2, arg3);
}

uint64_t __vcrt_initialize_winapi_thunks(int64_t arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t rcx_3;
    int64_t rdi;
    rdi = __memfill_u64(&data_140042c00, __security_cookie_1, ~(arg1 - arg1) & 5);
    return __security_cookie_1;
}

void __vcrt_uninitialize_winapi_thunks(char arg1)
{
    if (arg1)
        return;
    
    for (int64_t* i = &data_140042be8; i != &data_140042c00; i = &i[1])
    {
        HMODULE hLibModule = *i;
        
        if (hLibModule)
        {
            if (hLibModule != -1)
                FreeLibrary(hLibModule);
            
            *i = 0;
        }
    }
}

int64_t _CallSettingFrame(int64_t arg1, int64_t* arg2, int512_t arg3 @ zmm0)
{
    int64_t arg_8 = arg1;
    int32_t r8;
    int32_t arg_18 = r8;
    int64_t rdx = *arg2;
    _NLG_Notify();
    int64_t result = arg1(arg3, rdx);
    *arg2;
    _NLG_Notify();
    return result;
}

int64_t _CallSettingFrameEncoded(int64_t arg1, int512_t arg2 @ zmm1, int64_t arg3, int32_t arg4)
{
    int64_t arg_8 = arg1;
    int64_t rdx;
    int64_t arg_10 = rdx;
    int32_t arg_20 = arg4;
    _NLG_Notify();
    int64_t result = arg1(arg3, arg2, arg4);
    _NLG_Notify();
    return result;
}

int64_t free(int64_t arg1)
{
    int32_t arg_10 = 0;
    /* tailcall */
    return _free_base(arg1);
}

int64_t j__malloc_base(uint64_t arg1)
{
    /* tailcall */
    return _malloc_base(arg1);
}

int32_t __acrt_call_reportfault(int32_t arg1, int32_t arg2)
{
    void var_608;
    int64_t rax_1 = __security_cookie ^ &var_608;
    
    if (arg1 != 0xffffffff)
        sub_14000b0bc();
    
    int32_t var_598;
    sub_14000c550(&var_598, 0, 0x98);
    void ContextRecord;
    sub_14000c550(&ContextRecord, 0, 0x4d0);
    EXCEPTION_POINTERS ExceptionInfo;
    ExceptionInfo.ExceptionRecord = &var_598;
    ExceptionInfo.ContextRecord = &ContextRecord;
    RtlCaptureContext(&ContextRecord);
    uint64_t ImageBase;
    uint64_t ControlPc;
    IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry =
        RtlLookupFunctionEntry(ControlPc, &ImageBase, nullptr);
    uint64_t EstablisherFrame;
    void HandlerData;
    
    if (FunctionEntry)
        RtlVirtualUnwind(UNW_FLAG_NHANDLER, ImageBase, ControlPc, FunctionEntry, &ContextRecord, 
            &HandlerData, &EstablisherFrame, nullptr);
    void* const __return_addr_2 = __return_addr;
    var_598 = arg2;
    void arg_8;
    void* var_460 = &arg_8;
    void* const __return_addr_1 = __return_addr;
    int32_t r8;
    int32_t var_594 = r8;
    BOOL rax_4 = IsDebuggerPresent();
    SetUnhandledExceptionFilter(nullptr);
    int32_t result = UnhandledExceptionFilter(&ExceptionInfo);
    
    if (!result && !rax_4 && arg1 != 0xffffffff)
        sub_14000b0bc();
    
    __security_check_cookie(rax_1 ^ &var_608);
    return result;
}

int64_t sub_14000e850(int64_t arg1)
{
    data_140042c90 = arg1;
}

int64_t sub_14000e858(wchar16* arg1, wchar16* arg2, wchar16* arg3, uint32_t arg4, uint64_t arg5)
{
    void* rax = __acrt_getptd_noexit();
    int64_t rax_1;
    
    if (rax)
        rax_1 = *(rax + 0x3b8);
    
    uint64_t var_18;
    wchar16* function_name;
    wchar16* file_name;
    uint32_t line_number;
    
    if (!rax || !rax_1)
    {
        uint64_t __security_cookie_1 = __security_cookie;
        line_number = arg4;
        file_name = arg3;
        int64_t r10_2 = RORQ(__security_cookie_1 ^ data_140042c90, __security_cookie_1 & 0x3f);
        function_name = arg2;
        
        if (!r10_2)
        {
            _invoke_watson(arg1, function_name, file_name, line_number, arg5);
            /* no return */
        }
        
        rax_1 = r10_2;
        var_18 = arg5;
    }
    else
    {
        line_number = arg4;
        var_18 = arg5;
        file_name = arg3;
        function_name = arg2;
    }
    
    return rax_1(arg1, function_name, file_name, line_number, var_18);
}

int64_t _invalid_parameter_noinfo()
{
    return sub_14000e858(nullptr, nullptr, nullptr, 0, 0);
}

void sub_14000e928() __noreturn
{
    sub_14000e858(nullptr, nullptr, nullptr, 0, 0);
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    /* no return */
}

void _invoke_watson(wchar16 const* const expression, wchar16 const* const function_name, wchar16 const* const file_name, uint32_t const line_number, uint64_t const reserved) __noreturn
{
    if (IsProcessorFeaturePresent(0x17))
        trap(0xd);
    
    __acrt_call_reportfault(2, 0xc0000417);
    /* tailcall */
    return TerminateProcess(GetCurrentProcess(), 0xc0000417);
}

int64_t sub_14000e9a0(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    sub_14000e9d8(arg3);
    return sub_140011880(*arg4);
}

void sub_14000e9d8(int64_t* arg1)
{
    if (data_140042ca8)
        return;
    
    data_140042c98 = 1;
    int32_t rcx = **arg1;
    
    if (!rcx)
    {
        uint64_t __security_cookie_1 = __security_cookie;
        int64_t rdx_1 = data_140042ca0;
        
        if (rdx_1 != __security_cookie_1)
            RORQ(__security_cookie_1 ^ rdx_1, __security_cookie_1 & 0x3f)(0, 0, 0);
        
        _execute_onexit_table(&data_140043098);
    }
    else if (rcx == 1)
        _execute_onexit_table(&data_1400430b0);
    
    if (!**arg1)
        sub_140016234(&data_140029438, &data_140029458);
    
    sub_140016234(&data_140029460, &data_140029468);
    
    if (!*arg1[1])
    {
        data_140042ca8 = 1;
        *arg1[2] = 1;
    }
}

void sub_14000ea93() __noreturn
{
    sub_140010504();
    /* no return */
}

int64_t sub_14000ea9c(int32_t arg1) __pure
{
    int64_t result;
    result = arg1 == 0xe06d7363;
    return result;
}

int64_t common_exit(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t arg_18 = arg3;
    int32_t arg_10 = arg2;
    
    if (!arg3)
    {
        HMODULE rax_1 = GetModuleHandleW(nullptr);
        
        if (rax_1 && rax_1->unused == 0x5a4d)
        {
            int32_t* rcx_1 = *(rax_1 + 0x3c) + rax_1;
            
            if (*rcx_1 == 0x4550 && rcx_1[6] == 0x20b && rcx_1[0x21] > 0xe && rcx_1[0x3e])
                sub_14000ebb0(arg1);
        }
    }
    
    char arg_20 = 0;
    int32_t* var_28 = &arg_10;
    int32_t* var_20 = &arg_18;
    char* var_18 = &arg_20;
    int32_t var_34 = 2;
    int32_t var_30 = 2;
    void var_38;
    int64_t result = sub_14000e9a0(&var_38, &var_30, &var_28, &var_34);
    
    if (arg_18)
        return result;
    
    exit_or_terminate_process(arg1);
    /* no return */
}

void exit_or_terminate_process(uint32_t arg1) __noreturn
{
    TEB* gsbase;
    
    if (__acrt_get_process_end_policy() != 1
        && !(gsbase->ProcessEnvironmentBlock->NtGlobalFlag >> 8 & 1))
    {
        TerminateProcess(GetCurrentProcess(), arg1);
        /* no return */
    }
    
    sub_14000ebb0(arg1);
    ExitProcess(arg1);
    /* no return */
}

int64_t sub_14000ebb0(int32_t arg1)
{
    HMODULE hLibModule_1 = nullptr;
    int64_t result = GetModuleHandleExW(0, u"mscoree.dll", &hLibModule_1);
    
    if (result)
    {
        result = GetProcAddress(hLibModule_1, "CorExitProcess");
        
        if (result)
            result = result(arg1);
    }
    
    HMODULE hLibModule = hLibModule_1;
    
    if (!hLibModule)
        return result;
    
    return FreeLibrary(hLibModule);
}

int64_t sub_14000ec0c(int64_t arg1)
{
    data_140042ca0 = arg1;
}

int64_t _c_exit()
{
    /* tailcall */
    return common_exit(0, 2, 1);
}

int64_t _cexit()
{
    /* tailcall */
    return common_exit(0, 0, 1);
}

int64_t sub_14000ec34(uint32_t arg1)
{
    /* tailcall */
    return common_exit(arg1, 2, 0);
}

int64_t _register_thread_local_exe_atexit_callback(int64_t arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    char result = __security_cookie_1 & 0x3f;
    
    if (data_140042ca0 != __security_cookie_1)
    {
        sub_140010504();
        /* no return */
    }
    
    data_140042ca0 = RORQ(arg1, 0x40 - result) ^ __security_cookie_1;
    return result;
}

void exit(int32_t status) __noreturn
{
    /* tailcall */
    return common_exit(status, 0, 0);
}

int64_t __acrt_initialize_stdio()
{
    int32_t rax = data_140042cb0;
    void** rbx = nullptr;
    int64_t i_1 = 3;
    
    if (!rax)
        rax = 0x200;
    else if (rax < 3)
        rax = 3;
    
    data_140042cb0 = rax;
    data_140042cb8 = _calloc_base(rax, 8);
    _free_base(0);
    
    if (!data_140042cb8)
    {
        data_140042cb0 = 3;
        data_140042cb8 = _calloc_base(3, 8);
        _free_base(0);
        
        if (!data_140042cb8)
            return 0xffffffff;
    }
    
    int64_t rbp_1 = 0;
    int32_t* rsi_1 = &data_140040e68;
    void* r14_1 = &data_140040e50;
    int64_t i;
    
    do
    {
        sub_140019574(r14_1 + 0x30, 0xfa0, 0);
        *(rbx + data_140042cb8) = r14_1;
        
        if (*((&data_140043290)[rbp_1 >> 6] + (rbp_1 & 0x3f) * 0x48 + 0x28) + 2 <= 2)
            *rsi_1 = 0xfffffffe;
        
        rbp_1 += 1;
        r14_1 += 0x58;
        rbx = &rbx[1];
        rsi_1 = &rsi_1[0x16];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return 0;
}

void* sub_14000eda8(int32_t arg1) __pure
{
    return arg1 * 0x58 + &data_140040e50;
}

int64_t __acrt_uninitialize_stdio()
{
    _flushall();
    _fcloseall();
    
    for (int64_t* i = nullptr; i != 0x18; i = &i[1])
    {
        __acrt_stdio_free_buffer_nolock(*(i + data_140042cb8));
        DeleteCriticalSection(*(i + data_140042cb8) + 0x30);
    }
    
    int64_t result = _free_base(data_140042cb8);
    data_140042cb8 = 0;
    return result;
}

int64_t _get_stream_buffer_pointers(int64_t arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)
{
    if (!arg1)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    
    if (arg2)
        *arg2 = arg1 + 8;
    
    if (arg3)
        *arg3 = arg1;
    
    if (arg4)
        *arg4 = arg1 + 0x10;
    
    return 0;
}

int64_t sub_14000ee60(void* arg1)
{
    /* tailcall */
    return EnterCriticalSection(arg1 + 0x30);
}

int64_t sub_14000ee6c(void* arg1)
{
    /* tailcall */
    return LeaveCriticalSection(arg1 + 0x30);
}

uint64_t sub_14000ee78(int64_t arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)
{
    int64_t* arg_20 = arg4;
    sub_14000ee60(*arg2);
    int32_t rax = sub_14000f1c0(arg3);
    sub_14000ee6c(*arg4);
    return rax;
}

int32_t* __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(void* arg1, int64_t arg2)
{
    int32_t* result;
    
    if (arg2 <= 0x7fffffffffffffff)
    {
        char rsi_1 = 0;
        uint64_t rbp_1 = arg2 * 2;
        
        if (*(arg1 + 0x408))
        {
            if (rbp_1 > *(arg1 + 0x400))
                goto label_14000ef15;
            
            result = 1;
        }
        else if (rbp_1 <= 0x400 || rbp_1 <= *(arg1 + 0x400))
            result = 1;
        else
        {
        label_14000ef15:
            int64_t rax = _malloc_base(rbp_1);
            
            if (rax)
            {
                _free_base(*(arg1 + 0x408));
                *(arg1 + 0x408) = rax;
                rsi_1 = 1;
                *(arg1 + 0x400) = rbp_1;
            }
            
            _free_base(0);
            result = rsi_1;
        }
    }
    else
    {
        *_errno() = 0xc;
        result = 0;
    }
    
    return result;
}

int32_t sub_14000ef60(void* arg1, uint32_t arg2, int32_t arg3, char arg4)
{
    void* r10 = arg1 + 0x58;
    void* rax = *(r10 + 0x408);
    uint32_t r11 = arg2;
    uint64_t rax_1;
    
    if (rax)
    {
        r10 = rax;
        rax_1 = *(arg1 + 0x458) >> 1;
    }
    else
        rax_1 = 0x200;
    
    void* r8_1 = r10 - 1 + rax_1;
    *(arg1 + 0x48) = r8_1;
    int32_t result = r8_1;
    
    while (true)
    {
        int32_t rdx = *(arg1 + 0x38);
        
        if (rdx <= 0 && !r11)
        {
            *(arg1 + 0x50) = r8_1 - result;
            *(arg1 + 0x48) += 1;
            return result;
        }
        
        *(arg1 + 0x38) = rdx - 1;
        uint8_t rdx_1 = COMBINE(0, r11) % arg3 + 0x30;
        r11 = COMBINE(0, r11) / arg3;
        
        if (rdx_1 > 0x39)
        {
            uint32_t rax_5;
            rax_5 = arg4;
            rax_5 ^= 1;
            rax_5 <<= 5;
            rax_5 += 7;
            rdx_1 += rax_5;
        }
        
        **(arg1 + 0x48) = rdx_1;
        *(arg1 + 0x48) -= 1;
        result = *(arg1 + 0x48);
    }
}

int32_t sub_14000eff0(void* arg1, uint64_t arg2, int32_t arg3, char arg4)
{
    void* rax = *(arg1 + 0x460);
    void* rcx = arg1 + 0x58;
    uint64_t rbx = arg3;
    uint64_t r11 = arg2;
    uint64_t rax_1;
    
    if (rax)
    {
        rcx = rax;
        rax_1 = *(arg1 + 0x458) >> 1;
    }
    else
        rax_1 = 0x200;
    
    void* r8_1 = rcx - 1 + rax_1;
    *(arg1 + 0x48) = r8_1;
    int32_t result = r8_1;
    
    while (true)
    {
        int32_t rcx_1 = *(arg1 + 0x38);
        
        if (rcx_1 <= 0 && !r11)
        {
            *(arg1 + 0x50) = r8_1 - result;
            *(arg1 + 0x48) += 1;
            return result;
        }
        
        int64_t rdx = 0;
        *(arg1 + 0x38) = rcx_1 - 1;
        uint8_t rdx_1 = COMBINE(rdx, r11) % rbx + 0x30;
        r11 = COMBINE(rdx, r11) / rbx;
        
        if (rdx_1 > 0x39)
        {
            uint64_t rax_5;
            rax_5 = arg4;
            rax_5 ^= 1;
            rax_5 <<= 5;
            rax_5 += 7;
            rdx_1 += rax_5;
        }
        
        **(arg1 + 0x48) = rdx_1;
        *(arg1 + 0x48) -= 1;
        result = *(arg1 + 0x48);
    }
}

void __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::stream_output_adapter<char>,char>(int64_t* arg1, char arg2, int32_t arg3, int32_t* arg4)
{
    if (arg3 <= 0)
        return;
    
    int64_t r14;
    r14 = arg2;
    int32_t rdi_1 = 0;
    
    do
    {
        int32_t rax_3;
        
        if (!(*(*arg1 + 0x14) >> 0xc & 1) || *(*arg1 + 8))
            rax_3 = sub_140010af8(r14, *arg1);
        
        int32_t rax;
        
        if ((!(*(*arg1 + 0x14) >> 0xc & 1) || *(*arg1 + 8)) && rax_3 == 0xffffffff)
        {
            *arg4 = 0xffffffff;
            rax = -1;
        }
        else
        {
            *arg4 += 1;
            rax = *arg4;
        }
        
        if (rax == 0xffffffff)
            break;
        
        rdi_1 += 1;
    } while (rdi_1 < arg3);
}

void** _LocaleUpdate::_LocaleUpdate(void** arg1, int128_t* arg2)
{
    arg1[3] = 0;
    
    if (arg2)
        *(arg1 + 8) = *arg2;
    else if (data_140043088)
    {
        void* rax_1 = __acrt_getptd();
        *arg1 = rax_1;
        arg1[1] = *(rax_1 + 0x90);
        arg1[2] = *(rax_1 + 0x88);
        sub_14001a0a0(rax_1, &arg1[1]);
        __acrt_update_multibyte_info(*arg1, &arg1[2]);
        void* rcx_4 = *arg1;
        int32_t rax_2 = *(rcx_4 + 0x3a8);
        
        if (!(rax_2 & 2))
        {
            *(rcx_4 + 0x3a8) = rax_2 | 2;
            arg1[3] = 1;
        }
    }
    else
        *(arg1 + 8) = *data_1400411f8;
    
    return arg1;
}

void sub_14000f1ac(int64_t* arg1)
{
    if (arg1[3])
    {
        void* rax = *arg1;
        *(rax + 0x3a8) &= 0xfffffffd;
    }
}

uint64_t sub_14000f1c0(int64_t* arg1)
{
    void var_4e8;
    int64_t rax_1 = __security_cookie ^ &var_4e8;
    uint64_t* rdi = **arg1;
    int64_t rsi;
    rsi = __acrt_stdio_begin_temporary_buffering_nolock(rdi);
    void* var_4c8;
    _LocaleUpdate::_LocaleUpdate(&var_4c8, *arg1[1]);
    int64_t r10 = *arg1[4];
    int64_t r9 = *arg1[3];
    int64_t r8 = *arg1[2];
    int64_t var_40 = **arg1;
    int64_t var_498 = 0;
    int64_t var_480;
    __builtin_memset(&var_480, 0, 0x14);
    int16_t var_468 = 0;
    int32_t var_458 = 0;
    char var_454 = 0;
    int64_t var_50 = 0;
    int64_t var_48 = 0;
    int64_t var_4a8 = r8;
    void var_4c0;
    void* var_4a0 = &var_4c0;
    int64_t var_490 = r9;
    int64_t var_488 = r10;
    int32_t var_38 = 0;
    int32_t rax_4 = __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::process(
        &var_4a8);
    _free_base(var_48);
    int64_t var_48_1 = 0;
    char var_4b0;
    void* rcx_6;
    
    if (var_4b0)
    {
        rcx_6 = var_4c8;
        *(rcx_6 + 0x3a8) &= 0xfffffffd;
    }
    
    rcx_6 = rsi;
    __acrt_stdio_end_temporary_buffering_nolock(rcx_6, rdi);
    __security_check_cookie(rax_1 ^ &var_4e8);
    return rax_4;
}

char* __crt_stdio_output::crop_zeroes(char* arg1, int64_t* arg2)
{
    char r9 = ***(*arg2 + 0xf8);
    char* result;
    result = *arg1;
    
    if (result)
    {
        int64_t* rdx;
        rdx = result;
        
        do
        {
            result = rdx;
            
            if (rdx == r9)
                break;
            
            arg1 = &arg1[1];
            result = *arg1;
            rdx = result;
        } while (result);
    }
    
    char* rcx = &arg1[1];
    
    if (result)
    {
        while (true)
        {
            result = *rcx;
            
            if (!result)
                break;
            
            result -= 0x45;
            
            if (!(result & 0xdf))
                break;
            
            rcx = &rcx[1];
        }
        
        char* r8_1 = rcx;
        
        do
        {
            rcx -= 1;
            result = *rcx;
        } while (result == 0x30);
        
        char* rdx_1 = &rcx[-1];
        
        if (result != r9)
            rdx_1 = rcx;
        
        do
        {
            result = *r8_1;
            rdx_1 = &rdx_1[1];
            r8_1 = &r8_1[1];
            *rdx_1 = result;
        } while (result);
    }
    
    return result;
}

char* __crt_stdio_output::force_decimal_point(char* arg1, int64_t* arg2)
{
    char* rbx = arg1;
    
    if (tolower(*arg1) != 0x65)
    {
        int32_t i;
        
        do
        {
            rbx = &rbx[1];
            i = isdigit(*rbx);
        } while (i);
    }
    
    if (tolower(*rbx) == 0x78)
        rbx = &rbx[2];
    
    char rdx = *rbx;
    int64_t* rcx_3;
    rcx_3 = ***(*arg2 + 0xf8);
    *rbx = rcx_3;
    char* rbx_1 = &rbx[1];
    char* result;
    
    do
    {
        result = *rbx_1;
        rcx_3 = rdx;
        *rbx_1 = rdx;
        rbx_1 = &rbx_1[1];
        rdx = result;
    } while (rcx_3);
    
    return result;
}

int32_t* sub_14000f3cc(void* arg1, int32_t* arg2)
{
    int32_t* rbx = *(arg1 + 0x10);
    
    if (!rbx)
    {
        int32_t* rax_1 = _errno();
        rbx = rax_1;
        *(arg1 + 0x10) = rax_1;
    }
    
    int32_t rbp = *rbx;
    *rbx = 0;
    char rsi = 1;
    int64_t rcx = *(arg1 + 0x18);
    int32_t* result_1 = nullptr;
    *arg2 = strtol(rcx - 1, &result_1, 0xa);
    int32_t* result = *(arg1 + 0x10);
    
    if (!result)
    {
        result = _errno();
        *(arg1 + 0x10) = result;
    }
    
    if (*result == 0x22)
        rsi = 0;
    else
    {
        result = result_1;
        
        if (result < *(arg1 + 0x18))
            rsi = 0;
        else
            *(arg1 + 0x18) = result;
    }
    
    if (!*rbx && rbp)
        *rbx = rbp;
    
    result = rsi;
    return result;
}

uint64_t __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::process(int64_t* arg1)
{
    void* rcx = arg1[0x8d];
    
    if (rcx)
    {
        char rax_3;
        int32_t rcx_1;
        rax_3 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(rcx);
        
        if (rax_3)
        {
            if (!arg1[3])
            {
                *_errno() = 0x16;
                _invalid_parameter_noinfo();
                return 0xffffffff;
            }
            
            arg1[0x8e] += 1;
            
            if (arg1[0x8e] == 2)
                return arg1[5];
            
            while (true)
            {
                arg1[0xa] = 0;
                *(arg1 + 0x2c) = 0;
                
                while (true)
                {
                    rcx_1 = *arg1[3];
                    *(arg1 + 0x41) = rcx_1;
                    
                    if (rcx_1)
                    {
                        arg1[3] += 1;
                        
                        if (arg1[5] >= 0)
                        {
                            rcx_1 = *(arg1 + 0x41);
                            uint64_t rcx_3;
                            
                            if (rcx_1 - 0x20 > 0x5a)
                                rcx_3 = 0;
                            else
                                rcx_3 = *(rcx_1 + &data_14002f518[4]) & 0xf;
                            
                            uint32_t rax_9 =
                                *(*(arg1 + 0x2c) + (rcx_3 << 3) + &data_14002f540) >> 4;
                            *(arg1 + 0x2c) = rax_9;
                            
                            if (rax_9 == 8)
                                goto label_14000f496;
                            
                            int32_t* rax_16;
                            
                            switch (rax_9)
                            {
                                case 0:
                                {
                                    rax_16 = sub_14000f688(arg1);
                                    break;
                                }
                                case 1:
                                {
                                    *(arg1 + 0x34) = 0;
                                    arg1[6] = 0;
                                    *(arg1 + 0x3c) = 0;
                                    arg1[8] = 0;
                                    arg1[7] = 0xffffffff;
                                    *(arg1 + 0x54) = 0;
                                    continue;
                                }
                                case 2:
                                {
                                    int32_t rax_11;
                                    rax_11 = *(arg1 + 0x41);
                                    
                                    if (rax_11 == 0x20)
                                    {
                                        arg1[6] |= 2;
                                        continue;
                                    }
                                    else if (rax_11 == 0x23)
                                    {
                                        arg1[6] |= 0x20;
                                        continue;
                                    }
                                    else if (rax_11 == 0x2b)
                                    {
                                        arg1[6] |= 1;
                                        continue;
                                    }
                                    else if (rax_11 == 0x2d)
                                    {
                                        arg1[6] |= 4;
                                        continue;
                                    }
                                    else if (rax_11 != 0x30)
                                        continue;
                                    else
                                    {
                                        arg1[6] |= 8;
                                        continue;
                                    }
                                    break;
                                }
                                case 3:
                                {
                                    if (*(arg1 + 0x41) == 0x2a)
                                    {
                                        arg1[4] += 8;
                                        rcx_1 = arg1[4][-2];
                                        *(arg1 + 0x34) = rcx_1;
                                        
                                        if (rcx_1 < 0)
                                        {
                                            arg1[6] |= 4;
                                            *(arg1 + 0x34) = -(rcx_1);
                                        }
                                        
                                        rax_16 = 1;
                                    }
                                    else
                                        rax_16 = sub_14000f3cc(arg1, arg1 + 0x34);
                                    break;
                                }
                                case 4:
                                {
                                    arg1[7] = 0;
                                    continue;
                                }
                                case 5:
                                {
                                    if (*(arg1 + 0x41) == 0x2a)
                                    {
                                        arg1[4] += 8;
                                        rcx_1 = arg1[4][-2];
                                        
                                        if (rcx_1 < 0)
                                            rcx_1 = -1;
                                        
                                        arg1[7] = rcx_1;
                                        rax_16 = 1;
                                    }
                                    else
                                        rax_16 = sub_14000f3cc(arg1, &arg1[7]);
                                    break;
                                }
                                case 6:
                                {
                                    rax_16 = sub_14000f79c(arg1);
                                    break;
                                }
                                default:
                                {
                                    if (rax_9 != 7)
                                        return 0xffffffff;
                                    
                                    rax_16 = sub_14000f910(arg1);
                                }
                            }
                            
                            if (!rax_16)
                                return 0xffffffff;
                            
                            continue;
                        }
                    }
                    else
                        arg1[3] += 1;
                    
                    arg1[0x8e] += 1;
                    
                    if (arg1[0x8e] != 2)
                        break;
                    
                    return arg1[5];
                }
            }
        }
    }
    else
    {
    label_14000f496:
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return 0xffffffff;
}

uint64_t sub_14000f688(void* arg1)
{
    uint64_t result;
    
    if (!sub_14000f6f8(arg1))
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        result = 0;
    }
    else
    {
        if (!(*(*(arg1 + 0x468) + 0x14) >> 0xc & 1) || *(*(arg1 + 0x468) + 8))
            result = sub_140010af8(*(arg1 + 0x41), *(arg1 + 0x468));
        
        if ((!(*(*(arg1 + 0x468) + 0x14) >> 0xc & 1) || *(*(arg1 + 0x468) + 8))
                && result == 0xffffffff)
            *(arg1 + 0x28) = 0xffffffff;
        else
            *(arg1 + 0x28) += 1;
        
        result = 1;
    }
    
    return result;
}

void* sub_14000f6f8(void* arg1)
{
    int64_t r8 = *(arg1 + 0x41);
    *(arg1 + 0x54) = 0;
    int32_t rcx_1;
    
    if (r8 < 0xffffffff)
        rcx_1 = 0;
    else
        rcx_1 = *(***(arg1 + 8) + (r8 << 1)) & 0x8000;
    
    void* result;
    
    if (!rcx_1)
        result = 1;
    else
    {
        int32_t rax_4;
        
        if (!(*(*(arg1 + 0x468) + 0x14) >> 0xc & 1) || *(*(arg1 + 0x468) + 8))
            rax_4 = sub_140010af8(r8, *(arg1 + 0x468));
        
        if ((!(*(*(arg1 + 0x468) + 0x14) >> 0xc & 1) || *(*(arg1 + 0x468) + 8))
                && rax_4 == 0xffffffff)
            *(arg1 + 0x28) = 0xffffffff;
        else
            *(arg1 + 0x28) += 1;
        
        char* rax_5 = *(arg1 + 0x18);
        rcx_1 = *rax_5;
        *(arg1 + 0x41) = rcx_1;
        *(arg1 + 0x18) = &rax_5[1];
        
        if (rcx_1)
            result = 1;
        else
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            result = 0;
        }
    }
    
    return result;
}

void* sub_14000f79c(char* arg1)
{
    void* result;
    result = arg1[0x41];
    
    if (result == 0x46)
    {
        if (!(*arg1 & 8))
        {
            *(arg1 + 0x2c) = 7;
            /* tailcall */
            return sub_14000f910(arg1);
        }
        
        result = 1;
    }
    else if (result != 0x4e)
    {
        if (*(arg1 + 0x3c))
            goto label_14000f7d9;
        
        switch (result)
        {
            case 0x49:
            {
                char* rdx_2 = *(arg1 + 0x18);
                result = *rdx_2;
                
                if (result == 0x33 && rdx_2[1] == 0x32)
                {
                    *(arg1 + 0x3c) = 0xa;
                    *(arg1 + 0x18) = &rdx_2[2];
                }
                else if (result != 0x36 || rdx_2[1] != 0x34)
                {
                    result -= 0x58;
                    
                    if (result <= 0x20 && TEST_BITQ(0x120821001, result))
                        *(arg1 + 0x3c) = 9;
                }
                else
                {
                    *(arg1 + 0x3c) = 0xb;
                    *(arg1 + 0x18) = &rdx_2[2];
                }
                break;
            }
            case 0x4c:
            {
                *(arg1 + 0x3c) = 8;
                break;
            }
            case 0x54:
            {
                *(arg1 + 0x3c) = 0xd;
                break;
            }
            case 0x68:
            {
                char* rax_4 = *(arg1 + 0x18);
                
                if (*rax_4 != 0x68)
                    result = 2;
                else
                {
                    *(arg1 + 0x18) = &rax_4[1];
                    result = 1;
                }
                
                *(arg1 + 0x3c) = result;
                break;
            }
            case 0x6a:
            {
                *(arg1 + 0x3c) = 5;
                break;
            }
            case 0x6c:
            {
                char* rax_2 = *(arg1 + 0x18);
                
                if (*rax_2 != 0x6c)
                    result = 3;
                else
                {
                    *(arg1 + 0x18) = &rax_2[1];
                    result = 4;
                }
                
                *(arg1 + 0x3c) = result;
                break;
            }
            case 0x74:
            {
                *(arg1 + 0x3c) = 7;
                break;
            }
            case 0x77:
            {
                *(arg1 + 0x3c) = 0xc;
                break;
            }
            case 0x7a:
            {
                *(arg1 + 0x3c) = 6;
                break;
            }
        }
        
        result = 1;
    }
    else if (*arg1 & 8)
        result = 1;
    else
    {
        *(arg1 + 0x2c) = 8;
    label_14000f7d9:
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        result = 0;
    }
    
    return result;
}

uint8_t sub_14000f910(int64_t* arg1)
{
    uint8_t rax = *(arg1 + 0x41);
    int64_t* rbx = arg1;
    int64_t rsi;
    rsi = 0x78;
    int32_t rdx_3;
    char r8;
    
    if (rax <= 0x64)
    {
        if (rax == 0x64)
        {
        label_14000fa03:
            arg1[6] |= 0x10;
        label_14000fa07:
            rdx_3 = 0xa;
        label_14000fa0c:
            r8 = 0;
        label_14000fa0f:
            rax = sub_14000fe84(arg1, rdx_3, r8);
            goto label_14000fa1b;
        }
        
        if (rax == 0x41)
            goto label_14000fa16;
        
        if (rax == 0x43)
        {
        label_14000f983:
            rax = sub_14000fdc8(arg1);
            goto label_14000fa1b;
        }
        
        if (rax > 0x44)
        {
            if (rax <= 0x47)
                goto label_14000fa16;
            
            if (rax == 0x53)
                goto label_14000f9bf;
            
            if (rax == 0x58)
                goto label_14000f9d4;
            
            if (rax == 0x5a)
            {
                rax = sub_14000fb94(arg1);
                goto label_14000fa1b;
            }
            
            if (rax == 0x61)
                goto label_14000fa16;
            
            if (rax == 0x63)
                goto label_14000f983;
        }
    }
    else if (rax <= 0x67)
    {
    label_14000fa16:
        rax = sub_14000fc0c(arg1);
    label_14000fa1b:
        
        if (rax)
        {
            if (!rbx[8])
            {
                int32_t rcx_2 = rbx[6];
                int16_t arg_8 = 0;
                int64_t rdi_1 = 0;
                char arg_a = 0;
                
                if (1 & rcx_2 >> 4)
                {
                    if (1 & rcx_2 >> 6)
                    {
                        arg_8 = 0x2d;
                        rdi_1 = 1;
                    }
                    else if (1 & rcx_2)
                    {
                        arg_8 = 0x2b;
                        rdi_1 = 1;
                    }
                    else if (1 & rcx_2 >> 1)
                    {
                        arg_8 = 0x20;
                        rdi_1 = 1;
                    }
                }
                
                uint8_t rdx_2 = *(rbx + 0x41);
                char r8_1;
                
                r8_1 = (rdx_2 - 0x58) & 0xdf || !(1 & rcx_2 >> 5) ? 0 : 1;
                
                if (r8_1 || !((rdx_2 - 0x41) & 0xdf))
                {
                    *(&arg_8 + rdi_1) = 0x30;
                    
                    if (rdx_2 == 0x58 || rdx_2 == 0x41)
                        rsi = 0x58;
                    
                    *((&arg_8 + 1) + rdi_1) = rsi;
                    rdi_1 += 2;
                }
                
                int32_t rbp_3 = *(rbx + 0x34) - rbx[0xa] - rdi_1;
                
                if (!(rcx_2 & 0xc))
                    __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::stream_output_adapter<char>,char>(
                        &rbx[0x8d], 0x20, rbp_3, &rbx[5]);
                
                if (!(1 & *(rbx[0x8d] + 0x14) >> 0xc) || *(rbx[0x8d] + 8))
                    __crt_stdio_output::output_adapter_common<char,class __crt_stdio_output::stream_output_adapter<char> >::write_string_impl(
                        &rbx[0x8d], &arg_8, rdi_1, &rbx[5], &rbx[2]);
                else
                    rbx[5] += rdi_1;
                
                int32_t rcx_7 = rbx[6];
                
                if (1 & rcx_7 >> 3 && !(1 & rcx_7 >> 2))
                    __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::stream_output_adapter<char>,char>(
                        &rbx[0x8d], 0x30, rbp_3, &rbx[5]);
                
                sub_14001025c(rbx);
                
                if (rbx[5] >= 0 && 1 & rbx[6] >> 2)
                    __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::stream_output_adapter<char>,char>(
                        &rbx[0x8d], 0x20, rbp_3, &rbx[5]);
            }
            
            return 1;
        }
    }
    else
        switch (rax)
        {
            case 0x69:
            {
                goto label_14000fa03;
            }
            case 0x6e:
            {
                rax = sub_14001004c(arg1);
                goto label_14000fa1b;
            }
            case 0x6f:
            {
                int32_t rcx = arg1[6];
                
                if (1 & rcx >> 5)
                    rbx[6] = rcx | 0x80;
                
                rdx_3 = 8;
                arg1 = rbx;
                goto label_14000fa0c;
            }
            case 0x70:
            {
                arg1[7] = 0x10;
                *(arg1 + 0x3c) = 0xb;
            label_14000f9d4:
                r8 = 1;
                rdx_3 = 0x10;
                goto label_14000fa0f;
            }
            case 0x73:
            {
            label_14000f9bf:
                rax = sub_140010128(arg1);
                goto label_14000fa1b;
            }
            case 0x75:
            {
                goto label_14000fa07;
            }
            case 0x78:
            {
                rdx_3 = 0x10;
                goto label_14000fa0c;
            }
        }
    return 0;
}

uint32_t sub_14000fb94(void* arg1)
{
    *(arg1 + 0x20) += 8;
    int16_t* r8 = *(*(arg1 + 0x20) - 8);
    int64_t r9_1;
    
    if (r8)
        r9_1 = *(r8 + 8);
    
    uint32_t result;
    
    if (!r8 || !r9_1)
    {
        result = 6;
        *(arg1 + 0x48) = "(null)";
        *(arg1 + 0x54) = 0;
    }
    else
    {
        int32_t rdx_1 = *(arg1 + 0x3c);
        void* rax;
        
        if (rdx_1 == 2)
            rax = 0;
        else if (rdx_1 == 3 || rdx_1 == 0xc)
            rax = 1;
        else if (*(arg1 + 0x3c) == 0xd)
            rax = 0;
        else
        {
            rax = *(arg1 + 0x41);
            rax -= 0x63;
            rax = rax & 0xef;
        }
        
        *(arg1 + 0x48) = r9_1;
        result = *r8;
        
        if (!rax)
            *(arg1 + 0x54) = 0;
        else
        {
            *(arg1 + 0x54) = 1;
            result u>>= 1;
        }
    }
    
    *(arg1 + 0x50) = result;
    result = 1;
    return result;
}

uint64_t sub_14000fc0c(int64_t* arg1)
{
    arg1[6] |= 0x10;
    int32_t rax = arg1[7];
    
    if (rax < 0)
    {
        rax = *(arg1 + 0x41);
        rax -= 0x41;
        rax &= 0xdf;
        char temp1_1 = rax;
        rax = -(rax);
        rax = ((rax - rax) & 0xfffffff9) + 0xd;
        arg1[7] = rax;
    }
    else if (!rax)
    {
        if (*(arg1 + 0x41) != 0x67)
            rax = 0;
        
        if (*(arg1 + 0x41) == 0x67 || *(arg1 + 0x41) == 0x47)
        {
            arg1[7] = 1;
            rax = 1;
        }
    }
    
    char* rdi = &arg1[0xb];
    void* r8 = 0x200;
    
    if (!__crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(rdi, rax + 0x15d))
    {
        uint32_t rax_5;
        
        if (arg1[0x8c])
            rax_5 = arg1[0x8b] >> 1;
        else
            rax_5 = 0x200;
        
        arg1[7] = rax_5 - 0x15d;
    }
    
    char* rax_8 = *(rdi + 0x408);
    
    if (!rax_8)
        rax_8 = rdi;
    
    arg1[9] = rax_8;
    arg1[4] += 8;
    char* rcx_1 = arg1[0x8c];
    int64_t arg_8 = 0;
    arg_8 = *(arg1[4] - 8);
    uint64_t rdx_1;
    
    if (rcx_1)
        rdx_1 = arg1[0x8b] >> 1;
    else
        rdx_1 = 0x200;
    
    char* r9;
    
    if (rcx_1)
    {
        rdi = rcx_1;
        r9 = &rcx_1[arg1[0x8b] >> 1];
        r8 = arg1[0x8b] >> 1;
    }
    else
        r9 = &arg1[0x4b];
    
    __acrt_fp_format(&arg_8, rdi, r8, r9, rdx_1, *(arg1 + 0x41), arg1[7], *arg1, arg1[1]);
    
    if ((arg1[6] >> 5) & 1 && !arg1[7])
        __crt_stdio_output::force_decimal_point(arg1[9], arg1[1]);
    
    uint64_t result;
    result = *(arg1 + 0x41);
    result -= 0x47;
    
    if (!(result & 0xdf) && !((arg1[6] >> 5) & 1))
        __crt_stdio_output::crop_zeroes(arg1[9], arg1[1]);
    
    char* rcx_6 = arg1[9];
    result = *rcx_6;
    
    if (result == 0x2d)
    {
        arg1[6] |= 0x40;
        rcx_6 = &rcx_6[1];
        arg1[9] = rcx_6;
        result = *rcx_6;
    }
    
    result -= 0x49;
    
    if (result <= 0x25 && TEST_BITQ(0x2100000021, result))
    {
        arg1[6] &= 0xfffffff7;
        *(arg1 + 0x41) = 0x73;
    }
    
    int64_t rdx_6 = -1;
    
    do
        rdx_6 += 1;
     while (rcx_6[rdx_6]);
    
    arg1[0xa] = rdx_6;
    result = 1;
    return result;
}

uint64_t sub_14000fdc8(void* arg1)
{
    int32_t rcx = *(arg1 + 0x3c);
    bool rax;
    
    if (rcx == 2)
    {
        rax = false;
    label_14000fdf7:
        
        if (rax)
            goto label_14000fdfb;
        
    label_14000fe42:
        uint64_t r8_2 = *(arg1 + 0x460);
        
        if (!r8_2)
            r8_2 = arg1 + 0x58;
        
        *(arg1 + 0x20) += 8;
        *r8_2 = *(*(arg1 + 0x20) - 8);
        *(arg1 + 0x50) = 1;
    }
    else
    {
        if (rcx != 3 && rcx != 0xc)
        {
            if (*(arg1 + 0x3c) == 0xd)
                goto label_14000fe42;
            
            rax = (*(arg1 + 0x41) - 0x63) & 0xef;
            goto label_14000fdf7;
        }
        
    label_14000fdfb:
        *(arg1 + 0x20) += 8;
        char* rdx_1 = *(arg1 + 0x460);
        void* r8;
        
        if (rdx_1)
            r8 = *(arg1 + 0x458) >> 1;
        else
        {
            r8 = 0x200;
            rdx_1 = arg1 + 0x58;
        }
        
        if (wctomb_s(arg1 + 0x50, rdx_1, r8, *(*(arg1 + 0x20) - 8)))
            *(arg1 + 0x40) = 1;
    }
    uint64_t result;
    result = 1;
    void* rdx_2 = *(arg1 + 0x460);
    
    if (!rdx_2)
        rdx_2 = arg1 + 0x58;
    
    *(arg1 + 0x48) = rdx_2;
    return result;
}

uint8_t sub_14000fe84(void* arg1, int32_t arg2, char arg3)
{
    int32_t rcx = *(arg1 + 0x3c);
    int64_t rbp;
    rbp = arg3;
    int64_t rdi;
    int32_t rcx_2;
    
    if (rcx > 5)
    {
        if (rcx == 6 || rcx == 7)
            rdi = 8;
        else
        {
            rcx_2 = rcx - 9;
            
            if (rcx == 9)
                rdi = 8;
            else
            {
            label_14000fec6:
                
                if (rcx_2 == 1)
                    rdi = 4;
                else if (rcx_2 != 2)
                    rdi = 0;
                else
                    rdi = 8;
            }
        }
    }
    else if (rcx == 5)
        rdi = 8;
    else if (!rcx)
        rdi = 4;
    else if (rcx == 1)
        rdi = 1;
    else
    {
        rcx_2 = rcx - 2;
        
        if (rcx != 2)
            goto label_14000fec6;
        
        rdi = 2;
    }
    uint64_t rsi_1;
    
    if (rdi == 1)
    {
        int32_t rax_13 = *(arg1 + 0x30);
        *(arg1 + 0x20) += 8;
        void* rax_15 = *(arg1 + 0x20);
        
        if (!(rax_13 >> 4 & 1))
            rsi_1 = *(rax_15 - 8);
        else
            rsi_1 = *(rax_15 - 8);
    }
    else if (rdi == 2)
    {
        int32_t rax_10 = *(arg1 + 0x30);
        *(arg1 + 0x20) += 8;
        void* rax_12 = *(arg1 + 0x20);
        
        if (!(rax_10 >> 4 & 1))
            rsi_1 = *(rax_12 - 8);
        else
            rsi_1 = *(rax_12 - 8);
    }
    else if (rdi == 4)
    {
        int32_t rax_7 = *(arg1 + 0x30);
        *(arg1 + 0x20) += 8;
        void* rax_9 = *(arg1 + 0x20);
        
        if (!(rax_7 >> 4 & 1))
            rsi_1 = *(rax_9 - 8);
        else
            rsi_1 = *(rax_9 - 8);
    }
    else
    {
        if (rdi != 8)
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0;
        }
        
        *(arg1 + 0x20) += 8;
        rsi_1 = *(*(arg1 + 0x20) - 8);
    }
    
    int32_t rcx_6 = *(arg1 + 0x30);
    
    if (rcx_6 >> 4 & 1 && rsi_1 < 0)
    {
        rsi_1 = -(rsi_1);
        rcx_6 |= 0x40;
        *(arg1 + 0x30) = rcx_6;
    }
    
    if (*(arg1 + 0x38) >= 0)
    {
        int64_t rdx = *(arg1 + 0x38);
        *(arg1 + 0x30) = rcx_6 & 0xfffffff7;
        __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(arg1 + 0x58, rdx);
    }
    else
        *(arg1 + 0x38) = 1;
    
    if (!rsi_1)
        *(arg1 + 0x30) &= 0xffffffdf;
    
    *(arg1 + 0x54) = 0;
    char r9 = rbp;
    
    if (rdi != 8)
        sub_14000ef60(arg1, rsi_1, arg2, r9);
    else
        sub_14000eff0(arg1, rsi_1, arg2, r9);
    
    if (*(arg1 + 0x30) >> 7 & 1 && (!*(arg1 + 0x50) || **(arg1 + 0x48) != 0x30))
    {
        *(arg1 + 0x48) -= 1;
        **(arg1 + 0x48) = 0x30;
        *(arg1 + 0x50) += 1;
    }
    
    return 1;
}

int64_t sub_14001004c(void* arg1)
{
    int64_t rbx = 8;
    *(arg1 + 0x20) += 8;
    int64_t* rsi = *(*(arg1 + 0x20) - 8);
    int64_t result;
    
    if (_get_printf_count_output())
    {
        int32_t rcx = *(arg1 + 0x3c);
        
        if (rcx > 5)
        {
            if (rcx != 6 && rcx != 7)
            {
                int32_t temp4_1 = rcx - 7;
                rcx -= 9;
                
                if (temp4_1 != 2)
                {
                label_1400100ac:
                    
                    if (rcx == 1)
                        rbx = 4;
                    else if (rcx != 2)
                        rbx = 0;
                }
            }
        }
        else if (rcx != 5)
        {
            if (!rcx)
                rbx = 4;
            else if (rcx == 1)
                rbx = 1;
            else
            {
                int32_t temp7_1 = rcx - 1;
                rcx -= 2;
                
                if (temp7_1 != 1)
                    goto label_1400100ac;
                
                rbx = 2;
            }
        }
        
        if (rbx == 1)
        {
            rcx = *(arg1 + 0x28);
            *rsi = rcx;
            *(arg1 + 0x40) = 1;
            result = 1;
        }
        else if (rbx == 2)
        {
            *rsi = *(arg1 + 0x28);
            *(arg1 + 0x40) = 1;
            result = 1;
        }
        else if (rbx == 4)
        {
            *rsi = *(arg1 + 0x28);
            *(arg1 + 0x40) = 1;
            result = 1;
        }
        else
        {
            if (rbx != 8)
                goto label_14001007d;
            
            *rsi = *(arg1 + 0x28);
            *(arg1 + 0x40) = 1;
            result = 1;
        }
    }
    else
    {
    label_14001007d:
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        result = 0;
    }
    
    return result;
}

int64_t sub_140010128(void* arg1)
{
    *(arg1 + 0x20) += 8;
    int32_t r8 = *(arg1 + 0x38);
    wchar16 const* const rcx = *(*(arg1 + 0x20) - 8);
    int32_t rdx = *(arg1 + 0x3c);
    
    if (r8 == 0xffffffff)
        r8 = 0x7fffffff;
    
    *(arg1 + 0x48) = rcx;
    int32_t result;
    bool rax_1;
    
    if (rdx == 2)
    {
        rax_1 = false;
    label_140010179:
        
        if (rax_1)
            goto label_140010180;
        
    label_14001019e:
        
        if (!rcx)
        {
            rcx = "(null)";
            *(arg1 + 0x48) = "(null)";
        }
        
        int64_t r10;
        result = strnlen(rcx, r8, r10);
    }
    else
    {
        if (rdx != 3 && rdx != 0xc)
        {
            if (*(arg1 + 0x3c) == 0xd)
                goto label_14001019e;
            
            rax_1 = (*(arg1 + 0x41) - 0x63) & 0xef;
            goto label_140010179;
        }
        
    label_140010180:
        
        if (!rcx)
        {
            rcx = u"(null)";
            *(arg1 + 0x48) = u"(null)";
        }
        
        *(arg1 + 0x54) = 1;
        int64_t r11;
        result = wcsnlen(rcx, r8, r11);
    }
    *(arg1 + 0x50) = result;
    result = 1;
    return result;
}

uint64_t __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(void* arg1)
{
    void* rdx_3;
    int64_t r10_1;
    
    if (!((*(arg1 + 0x14) >> 0xc) & 1))
    {
        int64_t r9_1 = _fileno(arg1);
        r10_1 = &data_140041050;
        
        if (r9_1 + 2 <= 1)
            rdx_3 = &data_140041050;
        else
            rdx_3 = (&data_140043290)[r9_1 >> 6] + (r9_1 & 0x3f) * 0x48;
        
        if (!*(rdx_3 + 0x39) && r9_1 + 2 > 1)
            r10_1 = (&data_140043290)[r9_1 >> 6] + (r9_1 & 0x3f) * 0x48;
    }
    
    uint64_t result;
    
    if ((*(arg1 + 0x14) >> 0xc) & 1 || (!*(rdx_3 + 0x39) && !(*(r10_1 + 0x3d) & 1)))
        result = 1;
    else
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        result = 0;
    }
    
    return result;
}

uint64_t sub_14001025c(void* arg1)
{
    void var_58;
    int64_t rax_1 = __security_cookie ^ &var_58;
    uint64_t result;
    
    if (*(arg1 + 0x54))
        result = *(arg1 + 0x50);
    
    if (!*(arg1 + 0x54) || result <= 0)
    {
        int32_t r8_2 = *(arg1 + 0x50);
        
        if (!(*(*(arg1 + 0x468) + 0x14) >> 0xc & 1) || *(*(arg1 + 0x468) + 8))
            __crt_stdio_output::output_adapter_common<char,class __crt_stdio_output::stream_output_adapter<char> >::write_string_impl(
                arg1 + 0x468, *(arg1 + 0x48), r8_2, arg1 + 0x28, arg1 + 0x10);
        else
            *(arg1 + 0x28) += r8_2;
    }
    else
    {
        int16_t* rsi_1 = *(arg1 + 0x48);
        int32_t rdi_1 = 0;
        
        if (result)
        {
            while (true)
            {
                wchar16 r9_1 = *rsi_1;
                int32_t var_28 = 0;
                rsi_1 = &rsi_1[1];
                char var_24;
                
                if (!wctomb_s(&var_28, &var_24, 6, r9_1))
                {
                    int32_t r8_1 = var_28;
                    
                    if (r8_1)
                    {
                        if (!(*(*(arg1 + 0x468) + 0x14) >> 0xc & 1) || *(*(arg1 + 0x468) + 8))
                            __crt_stdio_output::output_adapter_common<char,class __crt_stdio_output::stream_output_adapter<char> >::write_string_impl(
                                arg1 + 0x468, &var_24, r8_1, arg1 + 0x28, arg1 + 0x10);
                        else
                            *(arg1 + 0x28) += r8_1;
                        
                        rdi_1 += 1;
                        
                        if (rdi_1 == *(arg1 + 0x50))
                            break;
                        
                        continue;
                    }
                }
                
                *(arg1 + 0x28) = 0xffffffff;
                break;
            }
        }
    }
    
    result = 1;
    __security_check_cookie(rax_1 ^ &var_58);
    return result;
}

void* const* __crt_stdio_output::output_adapter_common<char,class __crt_stdio_output::stream_output_adapter<char> >::write_string_impl(void*** arg1, char* arg2, int32_t arg3, int32_t* arg4, void*** arg5)
{
    void* const* result = &__return_addr;
    char* i = arg2;
    void** result_1 = *arg5;
    
    if (!result_1)
    {
        result = _errno();
        result_1 = result;
        *arg5 = result;
    }
    
    int32_t r12 = *result_1;
    *result_1 = nullptr;
    
    for (; i != &i[arg3]; i = &i[1])
    {
        arg2 = *i;
        
        if (*(*arg1 + 0x14) >> 0xc & 1)
            result = *arg1;
        
        if (*(*arg1 + 0x14) >> 0xc & 1 && !result[1])
            *arg4 += 1;
        else
        {
            result = sub_140010af8(arg2, *arg1);
            
            if (result != 0xffffffff)
                *arg4 += 1;
            else
            {
                result = *arg5;
                
                if (!result)
                {
                    result = _errno();
                    *arg5 = result;
                }
                
                if (*result != 0x2a)
                {
                    *arg4 = 0xffffffff;
                    break;
                }
                
                if (*(*arg1 + 0x14) >> 0xc & 1)
                    result = *arg1;
                
                if (*(*arg1 + 0x14) >> 0xc & 1 && !result[1])
                    *arg4 += 1;
                else
                {
                    result = sub_140010af8(0x3f, *arg1);
                    
                    if (result == 0xffffffff)
                        *arg4 = 0xffffffff;
                    else
                        *arg4 += 1;
                }
            }
        }
    }
    
    if (!*result_1 && r12)
        *result_1 = r12;
    
    return result;
}

uint64_t sub_140010478(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)
{
    int64_t var_48 = arg5;
    int64_t arg_10 = arg4;
    int64_t arg_20 = arg3;
    int64_t arg_8 = arg2;
    int64_t arg_18 = arg1;
    
    if (!arg2 || !arg3)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    int64_t var_40 = arg2;
    int64_t* var_30 = &arg_8;
    int64_t var_38 = arg2;
    int64_t* var_28_1 = &arg_10;
    int64_t* var_20_1 = &arg_18;
    int64_t* var_18_1 = &arg_20;
    int64_t* var_10_1 = &var_48;
    return sub_14000ee78(&arg5, &var_38, &var_30, &var_40);
}

void sub_140010504() __noreturn
{
    int64_t rax_1 = *(__acrt_getptd() + 0x18);
    
    if (rax_1)
        rax_1();
    
    abort();
    /* no return */
}

uint64_t _fclose_nolock(int32_t* arg1)
{
    if (!arg1)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    int32_t rdi_1 = -1;
    
    if (arg1[5] >> 0xd & 1)
    {
        rdi_1 = __acrt_stdio_flush_nolock(arg1);
        __acrt_stdio_free_buffer_nolock(arg1);
        
        if (_close(_fileno(arg1)) >= 0)
        {
            int64_t rcx_3 = *(arg1 + 0x28);
            
            if (rcx_3)
            {
                _free_base(rcx_3);
                *(arg1 + 0x28) = 0;
            }
        }
        else
            rdi_1 = -1;
    }
    
    __acrt_stdio_free_stream(arg1);
    return rdi_1;
}

uint64_t fclose(int32_t* arg1)
{
    int32_t* arg_8 = arg1;
    
    if (arg1)
    {
        if (!(arg1[5] >> 0xc & 1))
        {
            sub_14000ee60(arg1);
            int32_t rax_4 = _fclose_nolock(arg1);
            sub_14000ee6c(arg1);
            return rax_4;
        }
        
        __acrt_stdio_free_stream(arg1);
    }
    else
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return 0xffffffff;
}

int64_t __crt_seh_guarded_call<class <lambda_842d9ff0dc9ef11c61343bbaebe7f885>,class <lambda_c5860995281e5c4ce005b3de8f5874ee>& __ptr64,class <lambda_d90129c13df834fdcbf8d2b88dafcf2d>,void>::operator()<class <lambda_842d9ff0dc9ef11c61343bbaebe7f885>,class <lambda_c5860995281e5c4ce005b3de8f5874ee>& __ptr64,class <lambda_d90129c13df834fdcbf8d2b88dafcf2d> >(int64_t arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)
{
    int64_t* arg_20 = arg4;
    sub_14000ee60(*arg2);
    int32_t* rdx = arg3[1];
    void* rax_1 = **arg3;
    
    if (rax_1)
    {
        int32_t rcx_1 = *(rax_1 + 0x14);
        
        if (rcx_1 >> 0xd & 1)
        {
            if (((rcx_1 & 3) != 2 || !(rcx_1 & 0xc0)) && !TEST_BITD(rcx_1, 0xb))
                *rdx += 1;
            else if (*arg3[2] || *(**arg3 + 0x14) >> 1 & 1)
            {
                if (_fflush_nolock(**arg3) == 0xffffffff)
                    *arg3[3] = 0xffffffff;
                else
                {
                    int32_t* rax_11 = arg3[1];
                    *rax_11 += 1;
                }
            }
        }
    }
    
    return sub_14000ee6c(*arg4);
}

int64_t __crt_seh_guarded_call<class <lambda_886d6c58226a84441f68b9f2b8217b83>,class <lambda_ab61a845afdef5b7c387490eaf3616ee>& __ptr64,class <lambda_f7f22ab5edc0698d5f6905b0d3f44752>,void>::operator()<class <lambda_886d6c58226a84441f68b9f2b8217b83>,class <lambda_ab61a845afdef5b7c387490eaf3616ee>& __ptr64,class <lambda_f7f22ab5edc0698d5f6905b0d3f44752> >(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    int64_t* rbx = data_140042cb8;
    void* r14 = &rbx[data_140042cb0];
    
    while (true)
    {
        int64_t* var_40_1 = rbx;
        
        if (rbx == r14)
            break;
        
        void* rax_1 = *rbx;
        void* var_58 = rax_1;
        int32_t* rdx = *arg3;
        
        if (rax_1)
        {
            int32_t rcx_1 = *(rax_1 + 0x14);
            
            if (rcx_1 >> 0xd & 1)
            {
                if ((rcx_1 & 3) != 2)
                {
                    if (TEST_BITD(rcx_1, 0xb))
                        goto label_14001071f;
                    
                    *rdx += 1;
                }
                else if (rcx_1 & 0xc0 || TEST_BITD(rcx_1, 0xb))
                {
                label_14001071f:
                    int64_t rdx_1 = arg3[2];
                    int64_t rcx_2 = arg3[1];
                    int64_t rax_5 = *arg3;
                    void** var_38 = &var_58;
                    int64_t var_30_1 = rax_5;
                    int64_t var_28_1 = rcx_2;
                    int64_t var_20_1 = rdx_1;
                    void* rax_6 = var_58;
                    void* var_50 = rax_6;
                    void* var_48 = rax_6;
                    void arg_10;
                    __crt_seh_guarded_call<class <lambda_842d9ff0dc9ef11c61343bbaebe7f885>,class <lambda_c5860995281e5c4ce005b3de8f5874ee>& __ptr64,class <lambda_d90129c13df834fdcbf8d2b88dafcf2d>,void>::operator()<class <lambda_842d9ff0dc9ef11c61343bbaebe7f885>,class <lambda_c5860995281e5c4ce005b3de8f5874ee>& __ptr64,class <lambda_d90129c13df834fdcbf8d2b88dafcf2d> >(
                        &arg_10, &var_48, &var_38, &var_50);
                }
                else
                    *rdx += 1;
            }
        }
        
        rbx = &rbx[1];
    }
    
    return sub_140011880(*arg4);
}

uint64_t __crt_seh_guarded_call<class <lambda_c376a267cfb53b6959b3b692ec76b120>,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1>& __ptr64,class <lambda_572fbb9fa0ab338edf41edfd4b5fcc8d>,int32_t>::operator()<class <lambda_c376a267cfb53b6959b3b692ec76b120>,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1>& __ptr64,class <lambda_572fbb9fa0ab338edf41edfd4b5fcc8d> >(int64_t arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)
{
    int64_t* arg_20 = arg4;
    sub_14000ee60(*arg2);
    int32_t rax_1 = _fflush_nolock(**arg3);
    sub_14000ee6c(*arg4);
    return rax_1;
}

uint64_t common_flush_all(char arg1)
{
    char arg_8 = arg1;
    int32_t arg_20 = 0;
    int32_t arg_18 = 0;
    int32_t* var_20 = &arg_20;
    char* var_18 = &arg_8;
    int32_t* var_10 = &arg_18;
    int32_t var_28 = 8;
    int32_t var_24 = 8;
    void arg_10;
    __crt_seh_guarded_call<class <lambda_886d6c58226a84441f68b9f2b8217b83>,class <lambda_ab61a845afdef5b7c387490eaf3616ee>& __ptr64,class <lambda_f7f22ab5edc0698d5f6905b0d3f44752>,void>::operator()<class <lambda_886d6c58226a84441f68b9f2b8217b83>,class <lambda_ab61a845afdef5b7c387490eaf3616ee>& __ptr64,class <lambda_f7f22ab5edc0698d5f6905b0d3f44752> >(
        &arg_10, &var_24, &var_20, &var_28);
    
    if (arg_8)
        return arg_20;
    
    return arg_18;
}

int64_t __acrt_stdio_flush_nolock(int32_t* arg1)
{
    char rcx = arg1[5];
    
    if ((rcx & 3) == 2 && rcx & 0xc0)
    {
        int32_t rdi_2 = *arg1 - arg1[2];
        arg1[4] = 0;
        int16_t* rsi_1 = *(arg1 + 8);
        *arg1 = rsi_1;
        
        if (rdi_2 > 0)
        {
            if (rdi_2 != _write(_fileno(arg1), rsi_1, rdi_2))
            {
                arg1[5] |= 0x10;
                return 0xffffffff;
            }
            
            if (arg1[5] >> 2 & 1)
                arg1[5] &= 0xfffffffd;
        }
    }
    
    return 0;
}

int64_t _fflush_nolock(int32_t* arg1)
{
    if (!arg1)
        /* tailcall */
        return common_flush_all(arg1);
    
    if (!__acrt_stdio_flush_nolock(arg1))
    {
        int32_t rax_5;
        
        if (arg1[5] >> 0xb & 1)
            rax_5 = _commit(_fileno(arg1));
        
        if (!(arg1[5] >> 0xb & 1) || !rax_5)
            return 0;
    }
    
    return 0xffffffff;
}

int64_t _flushall()
{
    /* tailcall */
    return common_flush_all(1);
}

uint64_t fflush(void* arg1)
{
    void* arg_10 = arg1;
    
    if (!arg1)
        return common_flush_all(arg1);
    
    int32_t rdx_1 = *(arg1 + 0x14);
    
    if (((rdx_1 & 3) != 2 || !(rdx_1 & 0xc0)) && !TEST_BITD(rdx_1, 0xb))
        return 0;
    
    void** arg_20 = &arg_10;
    void* rax_2 = arg_10;
    void* arg_18 = rax_2;
    void* var_18 = rax_2;
    void arg_8;
    return __crt_seh_guarded_call<class <lambda_c376a267cfb53b6959b3b692ec76b120>,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1>& __ptr64,class <lambda_572fbb9fa0ab338edf41edfd4b5fcc8d>,int32_t>::operator()<class <lambda_c376a267cfb53b6959b3b692ec76b120>,class <lambda_9a32fed5bf61b6b509b2d3f6003082a1>& __ptr64,class <lambda_572fbb9fa0ab338edf41edfd4b5fcc8d> >(
        &arg_8, &var_18, &arg_20, &arg_18);
}

uint64_t _fgetc_nolock(int64_t* arg1)
{
    if (!arg1)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    arg1[2] -= 1;
    
    if (arg1[2] - 1 < 0)
        /* tailcall */
        return __acrt_stdio_refill_and_read_narrow_nolock(arg1);
    
    char* rax_3 = *arg1;
    uint32_t rcx_1 = *rax_3;
    *arg1 = &rax_3[1];
    return rcx_1;
}

uint64_t fgetc(int64_t* arg1)
{
    int64_t* arg_8 = arg1;
    void var_38;
    void* var_18 = &var_38;
    
    if (!arg1)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    sub_14000ee60(arg1);
    
    if (!(*(arg1 + 0x14) >> 0xc & 1))
    {
        int64_t r8_1 = _fileno(arg1);
        void* rcx_5;
        void* r9_1;
        
        if (r8_1 + 2 <= 1)
        {
            rcx_5 = &data_140041050;
            r9_1 = &data_140041050;
        }
        else
        {
            r9_1 = (&data_140043290)[r8_1 >> 6] + (r8_1 & 0x3f) * 0x48;
            rcx_5 = &data_140041050;
        }
        
        if (!*(r9_1 + 0x39) && r8_1 + 2 > 1)
            rcx_5 = (&data_140043290)[r8_1 >> 6] + (r8_1 & 0x3f) * 0x48;
        
        if (*(r9_1 + 0x39) || *(rcx_5 + 0x3d) & 1)
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            _local_unwind(var_18, &data_140010a8b);
            return 0xffffffff;
        }
    }
    
    int32_t rax_13 = _fgetc_nolock(arg1);
    sub_14000ee6c(arg1);
    return rax_13;
}

uint64_t fgetpos(int64_t* arg1, int64_t* arg2)
{
    if (!arg1 || !arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    int64_t rax_2 = j_common_ftell<int64_t>(arg1);
    *arg2 = rax_2;
    int32_t rbx;
    rbx = rax_2 != -1;
    return rbx - 1;
}

uint64_t sub_140010af8(char arg1, int64_t* arg2)
{
    arg2[2] -= 1;
    
    if (arg2[2] - 1 < 0)
        /* tailcall */
        return __acrt_stdio_flush_and_write_narrow_nolock(arg1, arg2);
    
    **arg2 = arg1;
    *arg2 += 1;
    return arg1;
}

uint64_t fputc(char arg1, int64_t* arg2)
{
    int64_t* arg_10 = arg2;
    void var_38;
    void* var_18 = &var_38;
    
    if (!arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    sub_14000ee60(arg2);
    
    if (!(*(arg2 + 0x14) >> 0xc & 1))
    {
        int64_t r8_1 = _fileno(arg2);
        void* rcx_6;
        void* r9_1;
        
        if (r8_1 + 2 <= 1)
        {
            rcx_6 = &data_140041050;
            r9_1 = &data_140041050;
        }
        else
        {
            r9_1 = (&data_140043290)[r8_1 >> 6] + (r8_1 & 0x3f) * 0x48;
            rcx_6 = &data_140041050;
        }
        
        if (!*(r9_1 + 0x39) && r8_1 + 2 > 1)
            rcx_6 = (&data_140043290)[r8_1 >> 6] + (r8_1 & 0x3f) * 0x48;
        
        if (*(r9_1 + 0x39) || *(rcx_6 + 0x3d) & 1)
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            _local_unwind(var_18, &data_140010bfc);
            return 0xffffffff;
        }
    }
    
    arg2[2] -= 1;
    uint32_t rdi_1;
    
    if (arg2[2] - 1 >= 0)
    {
        **arg2 = arg1;
        *arg2 += 1;
        rdi_1 = arg1;
    }
    else
        rdi_1 = __acrt_stdio_flush_and_write_narrow_nolock(arg1, arg2);
    
    sub_14000ee6c(arg2);
    return rdi_1;
}

uint64_t _fread_nolock_s(uint128_t* arg1, void* arg2, int64_t arg3, uint64_t arg4, int64_t* arg5)
{
    uint64_t arg_20 = arg4;
    
    if (arg3 && arg4)
    {
        if (arg1)
        {
            int64_t* rbx_1 = arg5;
            
            if (!rbx_1 || arg4 > -1 / arg3)
            {
                if (arg2 != -1)
                {
                    sub_14000c550(arg1, 0, arg2);
                    arg4 = arg_20;
                }
                
                if (rbx_1 && arg4 <= -1 / arg3)
                    goto label_140010cda;
                
                *_errno() = 0x16;
            }
            else
            {
            label_140010cda:
                int32_t rcx;
                
                if (!(*(rbx_1 + 0x14) & 0x4c0))
                    rcx = 0x1000;
                else
                    rcx = rbx_1[4];
                
                arg5 = rcx;
                int64_t rdi_2 = arg3 * arg4;
                uint128_t* r10_1 = arg1;
                uint128_t* var_48_1 = arg1;
                int64_t rbp_1 = rdi_2;
                void* r13_1 = arg2;
                
                if (!rdi_2)
                    return arg4;
                
                while (true)
                {
                    int64_t r14_1;
                    int32_t temp3_1;
                    
                    if (*(rbx_1 + 0x14) & 0x4c0)
                    {
                        r14_1 = rbx_1[2];
                        temp3_1 = r14_1;
                    }
                    
                    if (*(rbx_1 + 0x14) & 0x4c0 && temp3_1)
                    {
                        if (temp3_1 >= 0)
                        {
                            if (rbp_1 < r14_1)
                                r14_1 = rbp_1;
                            
                            if (r14_1 > r13_1)
                                break;
                            
                            int128_t* rax_7 = *rbx_1;
                            
                            if (r14_1)
                            {
                                if (!r10_1)
                                {
                                    *_errno() = 0x16;
                                    _invalid_parameter_noinfo();
                                }
                                else if (!rax_7 || r13_1 < r14_1)
                                {
                                    sub_14000c550(r10_1, 0, r13_1);
                                    
                                    if (!rax_7)
                                    {
                                        *_errno() = 0x16;
                                        _invalid_parameter_noinfo();
                                    }
                                    else if (r13_1 < r14_1)
                                    {
                                        *_errno() = 0x22;
                                        _invalid_parameter_noinfo();
                                    }
                                }
                                else
                                    sub_14000bee0(r10_1, rax_7, r14_1);
                                
                                r10_1 = var_48_1;
                            }
                            
                            rbx_1[2] -= r14_1;
                            rbp_1 -= r14_1;
                            *rbx_1 += r14_1;
                            rcx = arg5;
                            r13_1 -= r14_1;
                            goto label_140010e64;
                        }
                        
                        *(rbx_1 + 0x14) |= 0x10;
                    }
                    else if (rbp_1 < rcx)
                    {
                        int32_t rax_17 = __acrt_stdio_refill_and_read_narrow_nolock(rbx_1);
                        
                        if (rax_17 != 0xffffffff)
                        {
                            if (!r13_1)
                                break;
                            
                            r10_1 = var_48_1;
                            rbp_1 -= 1;
                            r13_1 -= 1;
                            r14_1 = 1;
                            *r10_1 = rax_17;
                            rcx = rbx_1[4];
                            arg5 = rcx;
                            goto label_140010e64;
                        }
                    }
                    else
                    {
                        int32_t r14_2 = rbp_1;
                        
                        if (rbp_1 > 0x7fffffff)
                            r14_2 = 0x7fffffff;
                        
                        if (rcx)
                            r14_2 -= COMBINE(0, r14_2) % rcx;
                        
                        if (r14_2 > r13_1)
                            break;
                        
                        rbx_1[2] = 0;
                        *rbx_1 = rbx_1[1];
                        int32_t rax_16 = _read_nolock(_fileno(rbx_1), var_48_1, r14_2);
                        
                        if (!rax_16)
                            *(rbx_1 + 0x14) |= 8;
                        else if (rax_16 < 0)
                            *(rbx_1 + 0x14) |= 0x10;
                        else
                        {
                            rcx = arg5;
                            r10_1 = var_48_1;
                            r14_1 = rax_16;
                            rbp_1 -= r14_1;
                            r13_1 -= r14_1;
                        label_140010e64:
                            r10_1 += r14_1;
                            var_48_1 = r10_1;
                            
                            if (!rbp_1)
                                return arg_20;
                            
                            continue;
                        }
                    }
                    
                    return COMBINE(0, rdi_2 - rbp_1) / arg3;
                }
                
                if (arg2 != -1)
                    sub_14000c550(arg1, 0, arg2);
                
                *_errno() = 0x22;
            }
        }
        else
            *_errno() = 0x16;
        
        _invalid_parameter_noinfo();
    }
    
    return 0;
}

uint64_t fread(uint128_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4)
{
    return fread_s(arg1, -ffffffffffffffff, arg2, arg3, arg4);
}

uint64_t fread_s(uint128_t* arg1, void* arg2, int64_t arg3, uint64_t arg4, int64_t* arg5)
{
    if (arg3 && arg4)
    {
        if (arg5)
        {
            sub_14000ee60(arg5);
            uint64_t result = _fread_nolock_s(arg1, arg2, arg3, arg4, arg5);
            sub_14000ee6c(arg5);
            return result;
        }
        
        if (arg2 != -1)
            sub_14000c550(arg1, 0, arg2);
        
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return 0;
}

int64_t fsetpos(int64_t* arg1, int64_t* arg2)
{
    if (arg1 && arg2)
        /* tailcall */
        return j_common_fseek(arg1, *arg2, FILE_BEGIN);
    
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    return 0xffffffff;
}

uint64_t common_fseek(int64_t* arg1, int64_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    int64_t* arg_8 = arg1;
    
    if (!arg1 || arg3 > FILE_END)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    sub_14000ee60(arg1);
    int32_t rax_2 = common_fseek_nolock(arg1, arg2, arg3);
    sub_14000ee6c(arg1);
    return rax_2;
}

uint64_t common_fseek_binary_mode_read_only_fast_track_nolock(int64_t* arg1, int64_t arg2, int32_t arg3)
{
    int64_t rdi = arg2;
    uint64_t result;
    
    if (arg3 == 2 || !(*(arg1 + 0x14) & 0x4c0) || *(arg1 + 0x14) & 6 || arg1[2] <= 0)
        result = 0;
    else
    {
        int64_t r10_1 = arg1[3];
        uint64_t rdx = (r10_1 & 0x3f) * 9;
        int64_t r9_1 = (&data_140043290)[r10_1 >> 6];
        
        if (*(r9_1 + (rdx << 3) + 0x38) < 0 || *(r9_1 + (rdx << 3) + 0x39))
            result = 0;
        else
        {
            if (arg3)
                goto label_1400110df;
            
            result = j_common_lseek_nolock<int64_t>(r10_1, 0, FILE_CURRENT);
            
            if (result < 0)
                result = 0;
            else
            {
                uint64_t rcx_4 = result - arg1[2];
                uint32_t rdi_1 = rdi >> 0x3f;
                int64_t rdx_2 = rdi - rcx_4;
                
                if (rdi_1 == rcx_4 >> 0x3f || rdi_1 == (rdx_2 >> 0x3f))
                {
                    rdi = rdx_2;
                label_1400110df:
                    int64_t rdx_3 = *arg1;
                    
                    if (arg1[1] - rdx_3 > rdi || rdi > arg1[2])
                        result = 0;
                    else
                    {
                        result = 1;
                        *arg1 = rdx_3 + rdi;
                        arg1[2] -= rdi;
                    }
                }
                else
                    result = 0;
            }
        }
    }
    
    return result;
}

int64_t common_fseek_nolock(int64_t* arg1, int64_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    enum SET_FILE_POINTER_MOVE_METHOD rdi = arg3;
    int64_t rsi = arg2;
    
    if (*(arg1 + 0x14) >> 0xd & 1)
    {
        *(arg1 + 0x14) &= 0xfffffff7;
        char rax_3 = common_fseek_binary_mode_read_only_fast_track_nolock(arg1, arg2, arg3);
        int64_t rax_12;
        
        if (!rax_3)
        {
            if (rdi == FILE_CURRENT)
            {
                rsi += j_common_ftell_nolock<int64_t>(arg1);
                rdi = FILE_BEGIN;
            }
            
            __acrt_stdio_flush_nolock(arg1);
            arg1[2] = 0;
            *arg1 = arg1[1];
            
            if (*(arg1 + 0x14) >> 2 & 1)
                *(arg1 + 0x14) &= 0xfffffffc;
            else if ((*(arg1 + 0x14) & 0x41) == 0x41 && !(*(arg1 + 0x14) >> 8 & 1))
                arg1[4] = 0x200;
            
            rax_12 = j_common_lseek_nolock<int64_t>(arg1[3], rsi, rdi);
        }
        
        if (rax_3 || rax_12 != -1)
            return 0;
    }
    else
        *_errno() = 0x16;
    
    return 0xffffffff;
}

uint64_t j_common_fseek(int64_t* arg1, int64_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    /* tailcall */
    return common_fseek(arg1, arg2, arg3);
}

uint64_t sub_1400111d4(int64_t arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)
{
    int64_t* arg_20 = arg4;
    sub_14000ee60(*arg2);
    uint64_t result = sub_140011214(arg3);
    sub_14000ee6c(*arg4);
    return result;
}

uint64_t sub_140011214(int64_t* arg1)
{
    uint64_t* rsi = **arg1;
    int64_t rdi;
    rdi = __acrt_stdio_begin_temporary_buffering_nolock(rsi);
    uint64_t result = _fwrite_nolock(*arg1[1], *arg1[2], *arg1[3], **arg1);
    __acrt_stdio_end_temporary_buffering_nolock(rdi, rsi);
    return result;
}

uint64_t _fwrite_nolock(int128_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4)
{
    int128_t* r13 = arg1;
    
    if (arg2 && arg3)
    {
        if (arg4 && arg1 && arg3 <= -1 / arg2)
        {
            int32_t r15_1;
            
            if (!(*(arg4 + 0x14) & 0x4c0))
                r15_1 = 0x1000;
            else
                r15_1 = arg4[4];
            
            int64_t rdi_2 = arg2 * arg3;
            int64_t rsi_1 = rdi_2;
            bool cond:3_1 = !rdi_2;
            
            while (true)
            {
                if (cond:3_1)
                    return arg3;
                
                int32_t rax_6;
                
                if (*(arg4 + 0x14) & 0xc0)
                    rax_6 = arg4[2];
                
                int64_t rbp_1;
                
                if (!(*(arg4 + 0x14) & 0xc0) || !rax_6)
                {
                    uint64_t rbp_2 = r15_1;
                    
                    if (rsi_1 < rbp_2)
                    {
                        if (__acrt_stdio_flush_and_write_narrow_nolock(*r13, arg4) == 0xffffffff)
                            break;
                        
                        r15_1 = arg4[4];
                        rsi_1 -= 1;
                        rbp_1 = 1;
                        
                        if (r15_1 <= 0)
                            r15_1 = 1;
                        
                        goto label_14001140f;
                    }
                    
                    if (*(arg4 + 0x14) & 0xc0 && __acrt_stdio_flush_nolock(arg4))
                        break;
                    
                    int64_t rax_12 = rsi_1;
                    
                    if (r15_1)
                        rax_12 = rsi_1 - COMBINE(0, rax_12) % rbp_2;
                    
                    int32_t rbp_3 = -2;
                    
                    if (rax_12 < 0xfffffffe)
                        rbp_3 = rax_12;
                    
                    int32_t rax_14 = _write(_fileno(arg4), r13, rbp_3);
                    
                    if (rax_14 != 0xffffffff)
                    {
                        int32_t rcx_4 = rax_14;
                        
                        if (rax_14 > rbp_3)
                            rcx_4 = rbp_3;
                        
                        rbp_1 = rcx_4;
                        rsi_1 -= rbp_1;
                        
                        if (rax_14 >= rbp_3)
                        {
                        label_14001140f:
                            r13 += rbp_1;
                            cond:3_1 = !rsi_1;
                            continue;
                        }
                    }
                }
                else if (rax_6 >= 0)
                {
                    if (*(arg4 + 0x14) & 1)
                        break;
                    
                    int64_t rax_8 = arg4[2];
                    rbp_1 = rsi_1;
                    
                    if (rsi_1 >= rax_8)
                        rbp_1 = rax_8;
                    
                    sub_14000bee0(*arg4, r13, rbp_1);
                    arg4[2] -= rbp_1;
                    rsi_1 -= rbp_1;
                    *arg4 += rbp_1;
                    goto label_14001140f;
                }
                *(arg4 + 0x14) |= 0x10;
                break;
            }
            
            return COMBINE(0, rdi_2 - rsi_1) / arg2;
        }
        
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return 0;
}

uint64_t fwrite(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t arg_20 = arg4;
    int64_t arg_18 = arg3;
    int64_t arg_10 = arg2;
    int64_t arg_8 = arg1;
    
    if (arg2 && arg3)
    {
        if (arg4)
        {
            int64_t var_40 = arg4;
            int64_t* var_30 = &arg_20;
            int64_t var_38 = arg4;
            int64_t* var_28_1 = &arg_8;
            int64_t* var_20_1 = &arg_10;
            int64_t* var_18_1 = &arg_18;
            void var_48;
            return sub_1400111d4(&var_48, &var_38, &var_30, &var_40);
        }
        
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return 0;
}

uint64_t __crt_seh_guarded_call<class <lambda_84ec643ea9557e2f7dc01bb0e9624395>,class <lambda_ca71763b3c0644891230e4f79ea54fa6>& __ptr64,class <lambda_439a761618c59b0600e24586724d733b>,int32_t>::operator()<class <lambda_84ec643ea9557e2f7dc01bb0e9624395>,class <lambda_ca71763b3c0644891230e4f79ea54fa6>& __ptr64,class <lambda_439a761618c59b0600e24586724d733b> >(int64_t arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)
{
    int64_t* arg_20 = arg4;
    sub_14000ee60(*arg2);
    int32_t rax = <lambda_ca71763b3c0644891230e4f79ea54fa6>::operator()(arg3);
    sub_14000ee6c(*arg4);
    return rax;
}

int64_t <lambda_ca71763b3c0644891230e4f79ea54fa6>::operator()(int64_t* arg1)
{
    uint64_t rsi_1 = **arg1 & 0xfffffffffffffffe;
    __acrt_stdio_flush_nolock(*arg1[1]);
    __acrt_stdio_free_buffer_nolock(*arg1[1]);
    void* rdx = *arg1[1];
    *(rdx + 0x14) &= 0xfffff81f;
    int64_t* rax_4;
    void* rcx_4;
    
    if (!(*arg1[2] & 4))
    {
        rcx_4 = *arg1[3];
        
        if (rcx_4)
        {
            rax_4 = *arg1[1];
            *(rax_4 + 0x14) |= 0x180;
            rax_4[4] = rsi_1;
            *rax_4 = rcx_4;
            rax_4[1] = rcx_4;
        }
        else
        {
            int64_t rax_6 = _malloc_base(rsi_1);
            _free_base(0);
            
            if (!rax_6)
            {
                data_140042cc0 += 1;
                return 0xffffffff;
            }
            
            rax_4 = *arg1[1];
            *(rax_4 + 0x14) |= 0x140;
            rax_4[4] = rsi_1;
            *rax_4 = rax_6;
            rax_4[1] = rax_6;
        }
    }
    else
    {
        rax_4 = *arg1[1];
        rcx_4 = rax_4 + 0x1c;
        *(rax_4 + 0x14) |= 0x400;
        rax_4[4] = 2;
        *rax_4 = rcx_4;
        rax_4[1] = rcx_4;
    }
    rax_4[2] = 0;
    return 0;
}

uint64_t setvbuf(int64_t arg1, int64_t arg2, int32_t arg3, int64_t arg4)
{
    int64_t arg_20 = arg4;
    int32_t arg_18 = arg3;
    int64_t arg_10 = arg2;
    int64_t var_48 = arg1;
    
    if (!arg1 || arg3 & 0xffffffbb || arg3 == 0x44
        || (!(arg3 & 0xffffffbf) && arg4 - 2 > 0x7ffffffd))
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    int64_t var_40 = arg1;
    int64_t* var_30 = &arg_20;
    int64_t var_38 = arg1;
    int64_t* var_28_1 = &var_48;
    int32_t* var_20_1 = &arg_18;
    int64_t* var_18_1 = &arg_10;
    void arg_8;
    return __crt_seh_guarded_call<class <lambda_84ec643ea9557e2f7dc01bb0e9624395>,class <lambda_ca71763b3c0644891230e4f79ea54fa6>& __ptr64,class <lambda_439a761618c59b0600e24586724d733b>,int32_t>::operator()<class <lambda_84ec643ea9557e2f7dc01bb0e9624395>,class <lambda_ca71763b3c0644891230e4f79ea54fa6>& __ptr64,class <lambda_439a761618c59b0600e24586724d733b> >(
        &arg_8, &var_38, &var_30, &var_40);
}

uint64_t _ungetc_nolock(int32_t arg1, int64_t* arg2)
{
    void* r9_1;
    void* r10_1;
    
    if (!(*(arg2 + 0x14) >> 0xc & 1))
    {
        int64_t r8_1 = _fileno(arg2);
        r9_1 = &data_140041050;
        
        if (r8_1 + 2 <= 1)
            r10_1 = &data_140041050;
        else
            r10_1 = (&data_140043290)[r8_1 >> 6] + (r8_1 & 0x3f) * 0x48;
        
        if (!*(r10_1 + 0x39) && r8_1 + 2 > 1)
            r9_1 = (&data_140043290)[r8_1 >> 6] + (r8_1 & 0x3f) * 0x48;
    }
    
    if (!(*(arg2 + 0x14) >> 0xc & 1) && (*(r10_1 + 0x39) || *(r9_1 + 0x3d) & 1))
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    else if (arg1 != 0xffffffff && (*(arg2 + 0x14) & 1 || (*(arg2 + 0x14) & 6) == 6))
    {
        int64_t rax_13 = arg2[1];
        
        if (!rax_13)
        {
            __acrt_stdio_allocate_buffer_nolock(arg2);
            rax_13 = arg2[1];
        }
        
        int64_t rcx_9 = *arg2;
        
        if (rcx_9 != rax_13)
            goto label_140011756;
        
        if (!arg2[2])
        {
            *arg2 = rcx_9 + 1;
        label_140011756:
            char* rcx_11 = *arg2 - 1;
            uint8_t rax_16 = *(arg2 + 0x14) >> 0xc;
            *arg2 = rcx_11;
            
            if (!(rax_16 & 1))
            {
                *rcx_11 = arg1;
            label_140011774:
                arg2[2] += 1;
                *(arg2 + 0x14) &= 0xfffffff7;
                *(arg2 + 0x14) |= 1;
                return arg1;
            }
            
            if (*rcx_11 == arg1)
                goto label_140011774;
            
            *arg2 = &rcx_11[1];
        }
    }
    
    return 0xffffffff;
}

uint64_t ungetc(int32_t arg1, int64_t* arg2)
{
    int64_t* arg_10 = arg2;
    
    if (!arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffff;
    }
    
    sub_14000ee60(arg2);
    int32_t rax_2 = _ungetc_nolock(arg1, arg2);
    sub_14000ee6c(arg2);
    return rax_2;
}

int64_t __acrt_initialize_locks()
{
    uint64_t rbx = 0;
    int32_t result;
    
    while (true)
    {
        if (!sub_140019574(&data_140042cd0 + rbx * 0x28, 0xfa0, 0))
        {
            sub_140011848();
            result = 0;
            break;
        }
        
        data_140042f00 += 1;
        rbx = rbx + 1;
        
        if (rbx >= 0xe)
        {
            result = 1;
            break;
        }
    }
    
    return result;
}

int64_t sub_14001182c(int32_t arg1)
{
    /* tailcall */
    return EnterCriticalSection(&data_140042cd0 + arg1 * 0x28);
}

int64_t sub_140011848()
{
    uint64_t rbx = data_140042f00;
    
    while (rbx)
    {
        rbx = rbx - 1;
        DeleteCriticalSection(&data_140042cd0 + rbx * 0x28);
        data_140042f00 -= 1;
    }
    
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_140011880(int32_t arg1)
{
    /* tailcall */
    return LeaveCriticalSection(&data_140042cd0 + arg1 * 0x28);
}

int64_t _lock_locales()
{
    __acrt_eagerly_load_locale_apis();
    /* tailcall */
    return EnterCriticalSection(&data_140042d70);
}

int64_t sub_1400118b8()
{
    /* tailcall */
    return LeaveCriticalSection(&data_140042d70);
}

char* sub_1400118c8(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    char* result = sub_140011908(arg3);
    sub_140011880(*arg4);
    return result;
}

char* sub_140011908(int64_t* arg1)
{
    char* rsi = *arg1[1];
    int32_t r14 = **arg1;
    int16_t* r14_1;
    
    if (rsi)
    {
        int64_t arg_10;
        int32_t rax_3 = mbstowcs_s(&arg_10, nullptr, 0, rsi, 0x7fffffff);
        
        if (rax_3 != 0x16 && rax_3 != 0x22)
        {
            int16_t* rax_4 = _calloc_base(arg_10, 2);
            
            if (!rax_4)
            {
                _free_base(nullptr);
                return nullptr;
            }
            
            int32_t rax_6 = mbstowcs_s(nullptr, rax_4, arg_10, rsi, -1);
            
            if (!rax_6)
            {
                r14_1 = _wsetlocale(r14, rax_4);
                _free_base(rax_4);
                goto label_1400119f0;
            }
            
            if (rax_6 != 0x16 && rax_6 != 0x22)
            {
                _free_base(rax_4);
                return nullptr;
            }
        }
        
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        /* no return */
    }
    
    r14_1 = _wsetlocale(r14, 0);
label_1400119f0:
    
    if (!r14_1)
        return nullptr;
    
    void* rax_8 = __acrt_getptd();
    void* var_38 = *(rax_8 + 0x90);
    int64_t rcx_7 = *(rax_8 + 0x88);
    void* arg_8 = nullptr;
    int64_t var_30_1 = rcx_7;
    int32_t rax_9 = _wcstombs_s_l(&arg_8, nullptr, nullptr, r14_1, nullptr, &var_38);
    
    if (rax_9)
    {
        if (rax_9 == 0x16 || rax_9 == 0x22)
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
        
        return nullptr;
    }
    
    int16_t* rax_10 = _malloc_base(arg_8 + 4);
    
    if (!rax_10)
        return nullptr;
    
    int32_t rax_11 = _wcstombs_s_l(nullptr, &rax_10[2], arg_8, r14_1, -ffffffffffffffff, &var_38);
    
    if (rax_11)
    {
        if (rax_11 == 0x16 || rax_11 == 0x22)
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
        
        _free_base(rax_10);
        return nullptr;
    }
    
    void* rbx_2 = var_38;
    int32_t* rdx_4 = *((**arg1 << 5) + rbx_2 + 0x30);
    
    if (rdx_4)
    {
        int32_t rax_13 = *rdx_4;
        *rdx_4 -= 1;
        
        if (rax_13 == 1)
        {
            _free_base(*((**arg1 << 5) + rbx_2 + 0x30));
            *((**arg1 << 5) + rbx_2 + 0x30) = 0;
        }
    }
    
    if (!(*(rax_8 + 0x3a8) & 2) && !(data_140041310 & 1))
    {
        int32_t* rdx_5 = *((**arg1 << 5) + rbx_2 + 0x30);
        
        if (rdx_5)
        {
            int32_t rax_17 = *rdx_5;
            *rdx_5 -= 1;
            
            if (rax_17 == 1)
            {
                _free_base(*((**arg1 << 5) + rbx_2 + 0x30));
                *((**arg1 << 5) + rbx_2 + 0x30) = 0;
            }
        }
    }
    
    *rax_10 = *(rbx_2 + 0x10);
    *((**arg1 << 5) + rbx_2 + 0x30) = rax_10;
    *(((**arg1 + 1) << 5) + rbx_2) = &rax_10[2];
    return &rax_10[2];
}

char* setlocale(int32_t arg1, int64_t arg2)
{
    int64_t arg_10 = arg2;
    int32_t arg_8 = arg1;
    __acrt_eagerly_load_locale_apis();
    int32_t* var_20 = &arg_8;
    int64_t* var_18 = &arg_10;
    int32_t arg_20 = 4;
    int32_t var_28 = 4;
    void arg_18;
    return sub_1400118c8(&arg_18, &var_28, &var_20, &arg_20);
}

int64_t __pctype_func()
{
    void* rax = __acrt_getptd();
    int64_t* arg_8 = *(rax + 0x90);
    sub_14001a0a0(rax, &arg_8);
    return *arg_8;
}

uint64_t isdigit(int32_t arg1)
{
    int32_t rbx = 0;
    int64_t rdi = arg1;
    int32_t rcx_2;
    
    if (!data_140043088)
    {
        if (rdi + 1 <= 0x100)
            rbx = (**&data_1400410a0)[rdi] & 4;
        
        rcx_2 = rbx;
    }
    else
    {
        void* var_28;
        _LocaleUpdate::_LocaleUpdate(&var_28, nullptr);
        int64_t* var_20;
        int64_t* rdx_1 = var_20;
        
        if (rdx_1[1] > 1)
            rcx_2 = _isctype_l(rdi, 4, &var_20);
        else if (rdi + 1 > 0x100)
            rcx_2 = 0;
        else
            rcx_2 = *(*rdx_1 + (rdi << 1)) & 4;
        
        char var_10;
        
        if (var_10)
        {
            void* rax_3 = var_28;
            *(rax_3 + 0x3a8) &= 0xfffffffd;
        }
    }
    
    return rcx_2;
}

uint64_t islower(int32_t arg1)
{
    int32_t rbx = 0;
    int64_t rdi = arg1;
    int32_t rcx_2;
    
    if (!data_140043088)
    {
        if (rdi + 1 <= 0x100)
            rbx = (**&data_1400410a0)[rdi] & 2;
        
        rcx_2 = rbx;
    }
    else
    {
        void* var_28;
        _LocaleUpdate::_LocaleUpdate(&var_28, nullptr);
        int64_t* var_20;
        int64_t* rdx_1 = var_20;
        
        if (rdx_1[1] > 1)
            rcx_2 = _isctype_l(rdi, 2, &var_20);
        else if (rdi + 1 > 0x100)
            rcx_2 = 0;
        else
            rcx_2 = *(*rdx_1 + (rdi << 1)) & 2;
        
        char var_10;
        
        if (var_10)
        {
            void* rax_3 = var_28;
            *(rax_3 + 0x3a8) &= 0xfffffffd;
        }
    }
    
    return rcx_2;
}

uint64_t isupper(int32_t arg1)
{
    int32_t rbx = 0;
    int64_t rdi = arg1;
    int32_t rcx_2;
    
    if (!data_140043088)
    {
        if (rdi + 1 <= 0x100)
            rbx = (**&data_1400410a0)[rdi] & 1;
        
        rcx_2 = rbx;
    }
    else
    {
        void* var_28;
        _LocaleUpdate::_LocaleUpdate(&var_28, nullptr);
        int64_t* var_20;
        int64_t* rdx_1 = var_20;
        
        if (rdx_1[1] > 1)
            rcx_2 = _isctype_l(rdi, 1, &var_20);
        else if (rdi + 1 > 0x100)
            rcx_2 = 0;
        else
            rcx_2 = *(*rdx_1 + (rdi << 1)) & 1;
        
        char var_10;
        
        if (var_10)
        {
            void* rax_3 = var_28;
            *(rax_3 + 0x3a8) &= 0xfffffffd;
        }
    }
    
    return rcx_2;
}

int16_t* sub_140011de0(int64_t arg1)
{
    if (arg1)
    {
        int64_t rbx_1 = -1;
        
        do
            rbx_1 += 1;
         while (*(arg1 + (rbx_1 << 1)));
        
        int16_t* result = j__malloc_base((rbx_1 + 1) * 2);
        
        if (result)
        {
            if (!wcscpy_s(result, rbx_1 + 1, arg1))
                return result;
            
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
    }
    
    return nullptr;
}

int64_t j__calloc_base(int64_t arg1, int64_t arg2)
{
    /* tailcall */
    return _calloc_base(arg1, arg2);
}

uint64_t ___lc_codepage_func()
{
    void* rax = __acrt_getptd();
    void* arg_8 = *(rax + 0x90);
    sub_14001a0a0(rax, &arg_8);
    return *(arg_8 + 0xc);
}

int64_t ___lc_locale_name_func()
{
    void* rax = __acrt_getptd();
    int64_t arg_8 = *(rax + 0x90);
    sub_14001a0a0(rax, &arg_8);
    return arg_8 + 0x128;
}

uint64_t __acrt_locale_initialize_ctype(wchar16** arg1)
{
    void var_c8;
    int64_t rax_1 = __security_cookie ^ &var_c8;
    int64_t r8 = arg1[0x27];
    int32_t result_1 = 0;
    wchar16** var_58 = arg1;
    uint16_t** rdi = arg1;
    int64_t var_50 = 0;
    int128_t* r13 = nullptr;
    int128_t* r14 = nullptr;
    int128_t* rbp = nullptr;
    char* r12 = nullptr;
    uint64_t result;
    
    if (!r8)
    {
        int32_t* rax_36 = arg1[0x20];
        
        if (rax_36)
            *rax_36 -= 1;
        
        arg1[0x20] = 0;
        *arg1 = u"         (((((                  H";
        arg1[0x21] = 0;
        arg1[0x22] = &data_14002f940;
        arg1[0x23] = &data_14002fac0;
        result = 0;
        arg1[1] = 1;
    }
    else
    {
        int32_t* var_70_1 = nullptr;
        int32_t rax_2;
        
        if (!*(arg1 + 0xc))
            rax_2 = sub_14001de10(&var_58, 0, r8, 0x1004, arg1 + 0xc);
        
        if (!*(arg1 + 0xc) && rax_2)
        {
        label_140012474:
            _free_base(var_70_1);
            _free_base(r13);
            _free_base(r14);
            _free_base(rbp);
            result_1 = 1;
        }
        else
        {
            var_70_1 = _calloc_base(1, 4);
            _free_base(0);
            r13 = _calloc_base(0x180, 2);
            _free_base(0);
            r14 = _calloc_base(0x180, 1);
            _free_base(0);
            rbp = _calloc_base(0x180, 1);
            _free_base(0);
            r12 = _calloc_base(0x101, 1);
            _free_base(0);
            
            if (!var_70_1 || !r13 || !r12 || !r14 || !rbp)
                goto label_140012474;
            
            char* rcx_1 = r12;
            
            for (int32_t i = 0; i < 0x100; i += 1)
            {
                *rcx_1 = i;
                rcx_1 = &rcx_1[1];
            }
            
            CPINFO cPInfo;
            
            if (!GetCPInfo(*(arg1 + 0xc), &cPInfo) || cPInfo.MaxCharSize > 5)
                goto label_140012474;
            
            uint32_t rax_9 = cPInfo.MaxCharSize;
            var_42;
            
            if (rax_9 > 1)
            {
                if (*(arg1 + 0xc) != 0xfde9)
                {
                    char* rcx_4 = &var_42;
                    
                    if (cPInfo.LeadByte[0])
                    {
                        while (rcx_4[1])
                        {
                            uint32_t i_1 = *rcx_4;
                            
                            if (i_1 <= rcx_4[1])
                            {
                                do
                                {
                                    char* i_4 = i_1;
                                    i_1 += 1;
                                    *(i_4 + r12) = 0x20;
                                } while (i_1 <= rcx_4[1]);
                            }
                            
                            rcx_4 = &rcx_4[2];
                            
                            if (!*rcx_4)
                                break;
                        }
                    }
                }
                else
                    sub_14000c550(&r12[0x80], 0x20, 0x80);
            }
            
            int32_t* var_a8;
            var_a8 = 0xff;
            
            if (!__acrt_LCMapStringA(nullptr, rdi[0x27], 0x100, &r12[1], var_a8, r14 + 0x81, 0xff, 
                    *(arg1 + 0xc), 0))
                goto label_140012474;
            
            var_a8 = 0xff;
            
            if (!__acrt_LCMapStringA(nullptr, rdi[0x27], 0x200, &r12[1], var_a8, rbp + 0x81, 0xff, 
                    *(arg1 + 0xc), 0))
                goto label_140012474;
            
            void* var_a0_2;
            var_a0_2 = *(arg1 + 0xc);
            
            if (!__acrt_GetStringTypeA(nullptr, 1, r12, 0x100, &r13[0x10], var_a0_2, 0))
                goto label_140012474;
            
            *(r13 + 0xfe) = 0;
            *(r14 + 0x7f) = 0;
            *(rbp + 0x7f) = 0;
            r14[8] = 0;
            rbp[8] = 0;
            
            if (rax_9 > 1)
            {
                if (*(arg1 + 0xc) != 0xfde9)
                {
                    char* rdx_7 = &var_42;
                    
                    if (cPInfo.LeadByte[0])
                    {
                        while (rdx_7[1])
                        {
                            uint32_t i_2 = *rdx_7;
                            
                            if (i_2 <= rdx_7[1])
                            {
                                do
                                {
                                    int64_t i_5 = i_2;
                                    *(r13 + (i_5 << 1) + 0x100) = 0x8000;
                                    *(i_5 + r14 + 0x80) = i_2;
                                    *(i_5 + rbp + 0x80) = i_2;
                                    i_2 += 1;
                                } while (i_2 <= rdx_7[1]);
                            }
                            
                            rdx_7 = &rdx_7[2];
                            
                            if (!*rdx_7)
                                break;
                        }
                    }
                }
                else
                {
                    char* rcx_8 = rbp + 0x142;
                    int16_t* r8_2 = r13 + 0x284;
                    
                    for (int32_t i_3 = 0xc2; i_3 < 0xf5; )
                    {
                        *r8_2 = 0x8000;
                        r8_2 = &r8_2[1];
                        *(r14 - rbp + rcx_8) = i_3;
                        *rcx_8 = i_3;
                        i_3 += 1;
                        rcx_8 = &rcx_8[1];
                    }
                }
            }
            
            uint128_t zmm1 = r13[0x21];
            *r13 = r13[0x20];
            r13[1] = zmm1;
            zmm1 = r13[0x23];
            r13[2] = r13[0x22];
            r13[3] = zmm1;
            zmm1 = r13[0x25];
            r13[4] = r13[0x24];
            r13[5] = zmm1;
            zmm1 = r13[0x27];
            r13[6] = r13[0x26];
            r13[7] = zmm1;
            int64_t rax_21 = r13[0x2f];
            zmm1 = r13[0x29];
            r13[8] = r13[0x28];
            int128_t zmm0_1 = r13[0x2a];
            r13[9] = zmm1;
            zmm1 = r13[0x2b];
            r13[0xa] = zmm0_1;
            zmm0_1 = r13[0x2c];
            r13[0xb] = zmm1;
            zmm1 = r13[0x2d];
            r13[0xc] = zmm0_1;
            zmm0_1 = r13[0x2e];
            r13[0xd] = zmm1;
            r13[0xe] = zmm0_1;
            r13[0xf] = rax_21;
            *(r13 + 0xf8) = *(r13 + 0x2f8);
            *(r13 + 0xfc) = *(r13 + 0x2fc);
            int32_t rax_24 = *(r14 + 0x178);
            zmm1 = r14[0x11];
            *r14 = r14[0x10];
            zmm0_1 = r14[0x12];
            r14[1] = zmm1;
            zmm1 = r14[0x13];
            r14[2] = zmm0_1;
            zmm0_1 = r14[0x14];
            r14[3] = zmm1;
            zmm1 = r14[0x15];
            r14[4] = zmm0_1;
            zmm0_1 = r14[0x16];
            r14[5] = zmm1;
            zmm1 = r14[0x17];
            r14[6] = zmm0_1;
            r14[7] = zmm1;
            *(r14 + 0x78) = rax_24;
            *(r14 + 0x7c) = *(r14 + 0x17c);
            int16_t rax_25;
            rax_25 = *(r14 + 0x17e);
            *(r14 + 0x7e) = rax_25;
            int32_t rax_26 = *(rbp + 0x178);
            zmm1 = rbp[0x11];
            *rbp = rbp[0x10];
            zmm0_1 = rbp[0x12];
            rbp[1] = zmm1;
            zmm1 = rbp[0x13];
            rbp[2] = zmm0_1;
            zmm0_1 = rbp[0x14];
            rbp[3] = zmm1;
            zmm1 = rbp[0x15];
            rbp[4] = zmm0_1;
            zmm0_1 = rbp[0x16];
            rbp[5] = zmm1;
            zmm1 = rbp[0x17];
            rbp[6] = zmm0_1;
            rbp[7] = zmm1;
            *(rbp + 0x78) = rax_26;
            *(rbp + 0x7c) = *(rbp + 0x17c);
            uint32_t rax_27;
            rax_27 = *(rbp + 0x17e);
            *(rbp + 0x7e) = rax_27;
            int32_t* rcx_11 = rdi[0x20];
            
            if (rcx_11)
            {
                int32_t rax_29 = *rcx_11;
                *rcx_11 += rax_27 | 0xffffffff;
                
                if (rax_29 == 1)
                {
                    _free_base(rdi[0x21] - 0xfe);
                    _free_base(rdi[0x22] - 0x80);
                    _free_base(rdi[0x23] - 0x80);
                    _free_base(rdi[0x20]);
                }
            }
            
            *var_70_1 = 1;
            rdi[0x20] = var_70_1;
            *rdi = &r13[0x10];
            rdi[0x21] = r13 + 0xfe;
            rdi[0x22] = &r14[8];
            rdi[0x23] = &rbp[8];
            rdi[1] = rax_9;
        }
        
        _free_base(r12);
        result = result_1;
    }
    
    __security_check_cookie(rax_1 ^ &var_c8);
    return result;
}

void abort() __noreturn
{
    if (__acrt_get_sigabrt_handler())
        raise(0x16);
    
    if (data_140040f68 & 2)
    {
        if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE))
            trap(0xd);
        
        __acrt_call_reportfault(3, 0x40000015);
    }
    
    sub_14000ec34(3);
    breakpoint();
}

uint64_t __acrt_errno_from_os_error(int32_t arg1)
{
    uint64_t rax = 0;
    int32_t* rdx = &data_14002fdd0;
    
    do
    {
        if (arg1 == *rdx)
            return *((rax << 3) + 0x14002fdd4);
        
        rax = rax + 1;
        rdx = &rdx[2];
    } while (rax < 0x2d);
    
    if (arg1 - 0x13 <= 0x11)
        return 0xd;
    
    if (arg1 - 0xbc <= 0xe)
        return 8;
    
    return 0x16;
}

int64_t __acrt_errno_map_os_error(int32_t arg1)
{
    void* rax = __acrt_getptd_noexit();
    int32_t* rax_1;
    
    rax_1 = rax ? rax + 0x24 : &data_140040f70;
    
    *rax_1 = arg1;
    void* rax_2 = __acrt_getptd_noexit();
    int32_t* rbx = &data_140040f6c;
    
    if (rax_2)
        rbx = rax_2 + 0x20;
    
    int32_t result = __acrt_errno_from_os_error(arg1);
    *rbx = result;
    return result;
}

void* __doserrno()
{
    void* rax = __acrt_getptd_noexit();
    
    if (rax)
        return rax + 0x24;
    
    return &data_140040f70;
}

void* _errno()
{
    void* rax = __acrt_getptd_noexit();
    
    if (rax)
        return rax + 0x20;
    
    return &data_140040f6c;
}

uint64_t __crt_strtox::divide(int32_t* arg1, int32_t* arg2)
{
    int32_t r10 = *arg1;
    
    if (r10)
    {
        int32_t rdi_1 = *arg2;
        
        if (rdi_1)
        {
            uint64_t r10_1 = r10 - 1;
            
            if (rdi_1 == 1)
            {
                uint64_t r12_1 = arg2[1];
                void var_214;
                
                if (r12_1 == 1)
                {
                    int32_t rbx_1 = arg1[1];
                    *arg1 = 0;
                    int32_t var_218_1 = 0;
                    memcpy_s(&arg1[1], 0x1cc, &var_214, nullptr);
                    return rbx_1;
                }
                
                uint64_t rax_2;
                int32_t rbp_1;
                
                if (r10_1)
                {
                    uint64_t rdi_2 = 0;
                    int64_t r14_1 = 0;
                    
                    while (r10_1 != 0xffffffff)
                    {
                        uint64_t rax_4 = arg1[r10_1 + 1];
                        int64_t rdx_1 = 0;
                        r10_1 = r10_1 - 1;
                        int64_t rax_5 = rax_4 | r14_1 << 0x20;
                        int32_t temp2_2 = r12_1;
                        r14_1 = COMBINE(rdx_1, rax_5) % temp2_2;
                        rdi_2 = (rdi_2 << 0x20) + COMBINE(rdx_1, rax_5) / temp2_2;
                    }
                    
                    int32_t var_218_3 = 0;
                    *arg1 = 0;
                    memcpy_s(&arg1[1], 0x1cc, &var_214, nullptr);
                    arg1[1] = r14_1;
                    uint32_t rcx_5 = r14_1 >> 0x20;
                    rax_2 = rdi_2;
                    arg1[2] = rcx_5;
                    rbp_1 = rcx_5;
                    *arg1 = rbp_1 + 1;
                }
                else
                {
                    int32_t rbx_2 = arg1[1];
                    *arg1 = 0;
                    int32_t var_218_2 = 0;
                    memcpy_s(&arg1[1], 0x1cc, &var_214, nullptr);
                    int32_t temp2_1 = r12_1;
                    uint32_t temp1_1 = COMBINE(0, rbx_2) % temp2_1;
                    rax_2 = COMBINE(0, rbx_2) / temp2_1;
                    arg1[1] = temp1_1;
                    rbp_1 = temp1_1;
                    *arg1 = rbp_1;
                }
                return rax_2;
            }
            
            if (rdi_1 - 1 <= r10_1)
            {
                int64_t rdx_3 = r10_1;
                int32_t r8_5 = r10_1 - (rdi_1 - 1);
                int32_t r9_1 = r10_1;
                int64_t rbx_3 = r8_5;
                
                if (rdx_3 < rbx_3)
                {
                label_1400127d8:
                    r8_5 += 1;
                }
                else
                {
                    int32_t* rcx_7 = &arg1[1 + rdx_3];
                    
                    while (*(arg2 - (rbx_3 << 2) - arg1 + rcx_7) == *rcx_7)
                    {
                        r9_1 -= 1;
                        rdx_3 -= 1;
                        rcx_7 -= 4;
                        
                        if (rdx_3 < rbx_3)
                            goto label_1400127d8_1;
                    }
                    
                    if (arg2[r9_1 - r8_5 + 1] < arg1[r9_1 + 1])
                    {
                    label_1400127d8_1:
                        r8_5 += 1;
                    }
                }
                
                if (r8_5)
                {
                    int32_t r9_2 = arg2[rdi_1 - 1 + 1];
                    int32_t rbp_3 = arg2[rdi_1 - 2 + 1];
                    uint64_t rflags_1;
                    int32_t temp0_3;
                    temp0_3 = _bit_scan_reverse(r9_2);
                    int32_t arg_8 = rbp_3;
                    int32_t r11_4;
                    
                    r11_4 = !r8_5 ? 0x20 : 0x1f - temp0_3;
                    
                    if (r11_4)
                    {
                        char rcx_10 = r11_4;
                        int32_t rbp_4 = rbp_3 << rcx_10;
                        r9_2 = rbp_3 >> (0x20 - r11_4) | r9_2 << rcx_10;
                        arg_8 = rbp_4;
                        
                        if (rdi_1 > 2)
                            arg_8 = rbp_4 | arg2[rdi_1 - 3 + 1] >> (0x20 - r11_4);
                    }
                    
                    int32_t r14_3 = r8_5 - 1;
                    uint64_t r12_2 = 0;
                    
                    if (r14_3 >= 0)
                    {
                        uint64_t rbx_5 = r9_2;
                        uint64_t r13_1 = r14_3 + rdi_1;
                        uint64_t var_220_1 = rbx_5;
                        int32_t temp8_1;
                        
                        do
                        {
                            int32_t rdx_7;
                            
                            if (r13_1 > r10_1)
                                rdx_7 = 0;
                            else
                                rdx_7 = arg1[r13_1 + 1];
                            
                            uint64_t r11_5 = arg1[r13_1 - 2 + 1];
                            uint64_t var_230_1 = arg1[r13_1 - 1 + 1];
                            *(&var_230_1 + 4) = rdx_7;
                            uint64_t r8_8;
                            
                            if (!r11_4)
                                r8_8 = var_230_1;
                            else
                            {
                                char rcx_14 = r11_4;
                                r8_8 = r11_5 >> (0x20 - r11_4) | var_230_1 << rcx_14;
                                r11_5 = r11_5 << rcx_14;
                                
                                if (r13_1 >= 3)
                                    r11_5 = r11_5 | arg1[r13_1 - 3 + 1] >> (0x20 - r11_4);
                            }
                            
                            int64_t rdx_9 = 0;
                            int32_t temp2_3 = rbx_5;
                            int64_t rax_30 = COMBINE(rdx_9, r8_8) / temp2_3;
                            uint64_t r8_9 = COMBINE(rdx_9, r8_8) % temp2_3;
                            int64_t r9_4 = rax_30;
                            
                            if (rax_30 > 0xffffffff)
                            {
                                int64_t rax_31 = -0xffffffff + r9_4;
                                r9_4 = 0xffffffff;
                                r8_9 += rax_31 * rbx_5;
                            }
                            
                            if (r8_9 <= 0xffffffff)
                            {
                                uint64_t rdx_11 = arg_8;
                                int64_t i = rdx_11 * r9_4;
                                
                                while (i > (r8_9 << 0x20 | r11_5))
                                {
                                    r9_4 -= 1;
                                    i -= rdx_11;
                                    r8_9 += rbx_5;
                                    
                                    if (r8_9 > 0xffffffff)
                                        break;
                                }
                            }
                            
                            if (r9_4)
                            {
                                uint64_t r10_2 = 0;
                                int32_t r11_6 = 0;
                                
                                if (rdi_1)
                                {
                                    int32_t* rbx_7 = &arg2[1];
                                    
                                    do
                                    {
                                        uint64_t rax_34 = *rbx_7;
                                        rbx_7 = &rbx_7[1];
                                        int64_t r10_3 = r10_2 + rax_34 * r9_4;
                                        uint64_t rax_36 = r11_6 + r14_3;
                                        int32_t r8_10 = r10_3;
                                        uint64_t r10_4 = r10_3 >> 0x20;
                                        int32_t rax_37 = arg1[rax_36 + 1];
                                        r10_2 = r10_4 + 1;
                                        
                                        if (rax_37 >= r8_10)
                                            r10_2 = r10_4;
                                        
                                        r11_6 += 1;
                                        arg1[rax_36 + 1] = rax_37 - r8_10;
                                    } while (r11_6 < rdi_1);
                                    
                                    rbx_5 = var_220_1;
                                }
                                
                                if (rdx_7 < r10_2)
                                {
                                    int32_t r10_5 = 0;
                                    
                                    if (rdi_1)
                                    {
                                        uint64_t r8_11 = 0;
                                        int32_t* r11_8 = &arg2[1];
                                        
                                        do
                                        {
                                            uint64_t rax_40 = r10_5 + r14_3;
                                            r10_5 += 1;
                                            uint64_t rax_41 = *r11_8;
                                            r11_8 = &r11_8[1];
                                            uint64_t r8_13 = r8_11 + rax_41 + arg1[rax_40 + 1];
                                            arg1[rax_40 + 1] = r8_13;
                                            r8_11 = r8_13 >> 0x20;
                                        } while (r10_5 < rdi_1);
                                    }
                                    
                                    r9_4 -= 1;
                                }
                                
                                r10_1 = r13_1 - 1;
                            }
                            
                            r13_1 = r13_1 - 1;
                            r12_2 = (r12_2 << 0x20) + r9_4;
                            temp8_1 = r14_3;
                            r14_3 -= 1;
                        } while (temp8_1 - 1 >= 0);
                    }
                    
                    uint64_t rdx_14 = r10_1 + 1;
                    int32_t i_1 = rdx_14;
                    
                    if (rdx_14 < *arg1)
                    {
                        do
                        {
                            uint64_t i_2 = i_1;
                            i_1 += 1;
                            arg1[i_2 + 1] = 0;
                        } while (i_1 < *arg1);
                    }
                    
                    *arg1 = rdx_14;
                    
                    while (rdx_14)
                    {
                        rdx_14 = rdx_14 - 1;
                        
                        if (arg1[rdx_14 + 1])
                            break;
                        
                        *arg1 = rdx_14;
                    }
                    
                    return r12_2;
                }
            }
        }
    }
    
    return 0;
}

uint64_t memcpy_s(int128_t* arg1, void* arg2, int128_t* arg3, void* arg4)
{
    if (arg4)
    {
        int32_t* rax;
        int32_t rbx_1;
        
        if (!arg1)
        {
        label_140012aa2:
            rax = _errno();
            rbx_1 = 0x16;
        label_140012aac:
            *rax = rbx_1;
            _invalid_parameter_noinfo();
            return rbx_1;
        }
        
        if (!arg3 || arg2 < arg4)
        {
            sub_14000c550(arg1, 0, arg2);
            
            if (!arg3)
                goto label_140012aa2;
            
            if (arg2 >= arg4)
                return 0x16;
            
            rax = _errno();
            rbx_1 = 0x22;
            goto label_140012aac;
        }
        
        sub_14000bee0(arg1, arg3, arg4);
    }
    
    return 0;
}

uint64_t sub_140012b10(uint128_t arg1 @ zmm0, uint128_t arg2 @ zmm1)
{
    uint128_t zmm6;
    uint128_t var_48 = zmm6;
    uint64_t zmm7[0x2];
    uint64_t var_38[0x2] = zmm7;
    int64_t var_b8;
    int64_t var_a8;
    int64_t r8;
    int64_t r11_6;
    uint128_t zmm2;
    uint128_t zmm3;
    uint128_t zmm4;
    uint128_t zmm5;
    
    if (data_1400436e4)
    {
        var_b8 = _mm256_cvtsd_f64(arg1);
        var_a8 = _mm256_cvtsd_f64(arg2);
        r8 = var_a8;
        uint64_t rax_7;
        
        if (!(0x7fffffffffffffff & r8))
        {
            rax_7 = 0;
            r11_6 = var_b8 | 0x8000000000000;
            
            if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
                rax_7 = var_b8;
            
            int64_t r9_48 = 0xfffffffffffff & rax_7;
            
            if (!r9_48 || r9_48 & 0x8000000000000)
            {
                __vmovsd_xmmdq_memq(1.0);
                return rax_7;
            }
        }
        else if (r8 == 0x3ff0000000000000)
        {
            rax_7 = 0;
            r11_6 = var_b8 | 0x8000000000000;
            
            if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
                rax_7 = var_b8;
            
            if (!(0xfffffffffffff & rax_7))
                return rax_7;
        }
        else
        {
            int64_t var_88_2 = 0;
            bool cond:11_1;
            
            if ((-0x8000000000000000 & var_b8) != -0x8000000000000000)
            {
                if (var_b8 == 0x3ff0000000000000)
                {
                    rax_7 = 0;
                    
                    if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                        rax_7 = r8;
                    
                    int64_t r9_45 = 0xfffffffffffff & rax_7;
                    
                    if (!r9_45 || r9_45 & 0x8000000000000)
                        return rax_7;
                    
                    return _pow_special(__vmovsd_xmmdq_memq(var_b8), __vmovsd_xmmdq_memq(var_a8), 
                        r8 | 0x8000000000000, 4);
                }
                
                if (!var_b8)
                {
                label_140013e77:
                    rax_7 = 0;
                    
                    if ((0x7ff0000000000000 & r8) != 0x7ff0000000000000)
                    {
                        int64_t r10_35 = -0x8000000000000000 & r8;
                        
                        if (r10_35)
                            rax_7 = 0x7ff0000000000000;
                        
                        if (r10_35)
                            return _pow_special(__vmovsd_xmmdq_memq(var_b8), 
                                __vmovsd_xmmdq_memq(var_a8), 
                                __vorpd_xmmdq_xmmdq_memdq(rax_7, var_88_2), 2);
                        
                        __vorpd_xmmdq_xmmdq_memdq(rax_7, var_88_2);
                        return rax_7;
                    }
                    
                    if (r8 == -0x10000000000000)
                    {
                        __vmovsd_xmmdq_memq(inf.0);
                        return rax_7;
                    }
                    
                    if (r8 == 0x7ff0000000000000)
                    {
                        __vxorpd_xmmdq_xmmdq_xmmdq(arg1, arg1);
                        return rax_7;
                    }
                    
                    if (0xfffffffffffff & r8)
                        return _pow_special(__vmovsd_xmmdq_memq(var_b8), 
                            __vmovsd_xmmdq_memq(var_a8), r8 | 0x8000000000000, 4);
                    
                    return rax_7;
                }
                
                if ((0x7ff0000000000000 & var_b8) != 0x7ff0000000000000)
                {
                    if ((0x7ff0000000000000 & r8) > 0x43e0000000000000)
                        goto label_140013e2a;
                    
                    int64_t r10_27 = 0x7ff0000000000000 & r8;
                    cond:11_1 = r10_27 == 0x3c00000000000000;
                    
                    if (r10_27 < 0x3c00000000000000)
                        return 0;
                    
                    goto label_14001380b;
                }
            }
            else if ((0x7ff0000000000000 & r8) > 0x43e0000000000000)
            {
            label_140013e2a:
                
                if ((0x7ff0000000000000 & var_b8) != 0x7ff0000000000000)
                {
                    if (!(0x7fffffffffffffff & var_b8))
                        goto label_140013e77;
                    
                    if (var_b8 == -0x4010000000000000)
                    {
                    label_140013d8c:
                        rax_7 = 0;
                        
                        if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                            rax_7 = r8;
                        
                        if (0xfffffffffffff & rax_7)
                            return _pow_special(__vmovsd_xmmdq_memq(var_b8), 
                                __vmovsd_xmmdq_memq(var_a8), r8 | 0x8000000000000, 4);
                        
                        return rax_7;
                    }
                    
                    if ((var_b8 & 0x7fffffffffffffff) < 0x3ff0000000000000)
                    {
                        r11_6 = 0;
                        
                        if (-0x8000000000000000 & r8)
                            r11_6 = 0x7ff0000000000000;
                    }
                    else
                    {
                        r11_6 = 0;
                        
                        if (!(-0x8000000000000000 & r8))
                            r11_6 = 0x7ff0000000000000;
                    }
                    
                    rax_7 = 0;
                    
                    if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                        rax_7 = r8;
                    
                    int64_t r10_43 = 0xfffffffffffff & rax_7;
                    
                    if (r10_43)
                        r11_6 = r8 | 0x8000000000000;
                    
                    if (r10_43)
                        return _pow_special(__vmovsd_xmmdq_memq(var_b8), 
                            __vmovsd_xmmdq_memq(var_a8), r11_6, 4);
                    
                    if (rax_7)
                        return rax_7;
                    
                    goto label_140014050;
                }
            }
            else
            {
                int64_t r10_29 = 0x7fffffffffffffff & r8;
                uint64_t r10_30 = r10_29 >> 0x34;
                
                if (r10_30 - 0x3ff < 0)
                {
                label_140013dda:
                    
                    if ((0x7ff0000000000000 & var_b8) != 0x7ff0000000000000)
                    {
                        if (var_b8 != -0x8000000000000000)
                            return _pow_special(__vmovsd_xmmdq_memq(var_b8), 
                                __vmovsd_xmmdq_memq(var_a8), __vmovsd_xmmdq_memq(-nan.0), 6);
                        
                        goto label_140013e77;
                    }
                }
                else
                {
                    char rcx_18 = (r10_30 - 0x3ff);
                    
                    if (r10_30 - 0x3ff <= 0x35)
                    {
                        if (0xfffffffffffff >> rcx_18 & r10_29)
                            goto label_140013dda;
                        
                        if (0x10000000000000 >> rcx_18 & r10_29)
                            var_88_2 = -0x8000000000000000;
                    }
                    
                    if (var_b8 == -0x8000000000000000)
                        goto label_140013e77;
                    
                    if (var_b8 == -0x4010000000000000)
                        goto label_140013d8c;
                    
                    int64_t r9_43 = 0x7ff0000000000000 & var_b8;
                    cond:11_1 = r9_43 == 0x7ff0000000000000;
                    
                    if (r9_43 != 0x7ff0000000000000)
                    {
                        arg1 = __vmovsd_xmmdq_memq(0x7fffffffffffffff & var_b8);
                    label_14001380b:
                        int64_t r8_5 = arg1;
                        zmm6 = __vcvtdq2pd_xmmdq_xmmq(__vpsubq_xmmdq_xmmdq_memdq(
                            __vpsrlq_xmmdq_xmmdq_immb(arg1, 0x34), data_140030a90));
                        zmm2 = arg1 & data_140030a80;
                        __vcomisd_xmmq_memq(zmm6, -1023.0);
                        
                        if (cond:11_1)
                        {
                            zmm2 = (zmm2 | data_140030ae0) - 1.0;
                            zmm5 = zmm2;
                            zmm2 &= data_140030a80;
                            r8_5 = zmm2;
                            zmm6 = __vcvtdq2pd_xmmdq_xmmq(__vpsubd_xmmdq_xmmdq_memdq(
                                __vpsrlq_xmmdq_xmmdq_immb(zmm5, 0x34), data_140030b80));
                        }
                        
                        int64_t r8_7 = (r8_5 & 0xff00000000000) + ((r8_5 & 0x80000000000) << 1);
                        uint64_t r8_8 = r8_7 >> 0x2c;
                        zmm4 = (r8_7 | data_140030af0) - (zmm2 | data_140030af0);
                        arg2 = zmm4 * *(&data_140030bb0 + (r8_8 << 3));
                        zmm5 = arg2;
                        zmm4 = zmm4 * *(&data_1400313c0 + (r8_8 << 3));
                        arg2 = arg2 + zmm4;
                        zmm2 = arg2;
                        arg2 = _mm_fmadd_sd(
                            __vfmadd213sd_xmmdq_xmmq_memq(
                                __vfmadd213sd_xmmdq_xmmq_memq(
                                    __vfmadd213sd_xmmdq_xmmq_memq(
                                        __vfmadd213sd_xmmdq_xmmq_memq(
                                            __vfmadd213sd_xmmdq_xmmq_memq(
                                                __vmovsd_xmmdq_memq(0.1428571428571429), zmm2, 
                                                0.16666666666666666), 
                                            zmm2, 0.20000000000000001), 
                                        zmm2, 0.25), 
                                    zmm2, 0.33333333333333331), 
                                zmm2, 0.5), 
                            (arg2 * arg2), (zmm5 - zmm2 + zmm4[0]));
                        zmm5 =
                            _mm_fmsub_sd(__vmovsd_xmmdq_memq(5.7699990475432854e-08), zmm6, arg2);
                        arg1 = __vmovsd_xmmdq_memq(*(&data_140033820 + (r8_8 << 3)));
                        zmm3 = zmm5 + *(&data_140034030 + (r8_8 << 3));
                        arg2 = zmm3;
                        zmm3 = zmm3 - zmm2;
                        arg1 = __vfmadd231sd_xmmdq_xmmq_memq(arg1, zmm6, 0.69314712285995483);
                        zmm7 = arg1;
                        arg1 = arg1 + zmm3;
                        zmm5 = arg1;
                        arg1 = __vandpd_xmmdq_xmmdq_memdq(arg1, data_140030a10);
                        double rax_9 = var_a8 & 0xfffffffff8000000;
                        zmm4 = __vmovsd_xmmdq_memq(var_a8);
                        zmm7 = zmm7 - zmm5 + zmm3 + (arg2 - (zmm2 + zmm3)) + (zmm5 - arg1);
                        zmm2 = __vmovsd_xmmdq_memq(rax_9);
                        zmm4 = zmm4 - zmm2;
                        zmm6 = arg1 * zmm2;
                        zmm3 = zmm4 * zmm7[0] + (zmm4 * arg1) + (zmm7 * zmm2);
                        arg2 = zmm6 + zmm3;
                        arg1 = arg2;
                        zmm6 = zmm6 - arg2 + zmm3;
                        double temp0_40 = _mm256_cvtsd_f64(arg1);
                        zmm7 = arg1 * 92.332482616893657;
                        __vcomisd_xmmq_memq(zmm7[0], 65536.0);
                        
                        if (rax_9 > 0)
                        {
                        label_140013b97:
                            r11_6 = 0x7ff0000000000000 | var_88_2;
                        label_140014050:
                            int32_t r9_62 = 7;
                            
                            if (0x7fffffffffffffff & r11_6)
                                r9_62 = 9;
                            
                            return _pow_special(__vmovsd_xmmdq_memq(var_b8), 
                                __vmovsd_xmmdq_memq(var_a8), r11_6, r9_62);
                        }
                        
                        __vcomisd_xmmq_memq(zmm7[0], -68800.0);
                        
                        if (rax_9 < 0)
                        {
                            r11_6 = var_88_2;
                            goto label_140014050;
                        }
                        
                        zmm4 = __vcvtpd2dq_xmmdq_xmmdq(zmm7);
                        arg2 = __vcvtdq2pd_xmmdq_xmmq(zmm4);
                        int32_t rcx_10 = zmm4;
                        rax_7 = 0x3f & rcx_10;
                        uint64_t rcx_12 = (rcx_10 - rax_7) >> 6;
                        zmm2 = __vfnmadd231sd_xmmdq_xmmq_memq(arg1, arg2, 0.010830424260348082)
                            + (arg2 * -4.3590106387089909e-10) + zmm6;
                        int32_t r9_37 = 0;
                        arg1 = __vfmadd213sd_xmmdq_xmmq_memq(
                            __vfmadd213sd_xmmdq_xmmq_memq(
                                __vmovsd_xmmdq_memq(0.0013888888888888889), zmm2, 
                                0.0083333333333333332), 
                            zmm2, 0.041666666666666664);
                        
                        if (rcx_12 <= 0xfffffc02)
                            r9_37 = rcx_12;
                        
                        int64_t rcx_14 = (rcx_12 + 0x3ff) << 0x34;
                        arg1 = __vfmadd213sd_xmmdq_xmmq_memq(
                            __vfmadd213sd_xmmdq_xmmq_memq(
                                __vfmadd213sd_xmmdq_xmmq_memq(arg1, zmm2, 0.16666666666666666), 
                                zmm2, 0.5), 
                            zmm2, 1.0) * zmm2;
                        arg2 = arg1 * *(&data_140034840 + (rax_7 << 3)) + (
                            arg1 * *(&data_140034a40 + (rax_7 << 3))
                            + *(&data_140034a40 + (rax_7 << 3))) + *(&data_140034840 + (rax_7 << 3));
                        
                        if (rcx_14 == 0x7ff0000000000000)
                        {
                            __vcomisd_xmmq_memq(arg2, 1.0);
                            
                            if (rcx_14 >= 0x7ff0000000000000)
                                goto label_140013b97;
                            
                            __vorpd_xmmdq_xmmdq_memdq(
                                __vorpd_xmmdq_xmmdq_memdq(arg2, data_140031be0), var_88_2);
                            return rax_7;
                        }
                        
                        if (r9_37)
                        {
                            __vcomisd_xmmq_memq(arg2, 1.0);
                            
                            if (r9_37 != 0xfffffc02)
                            {
                                if (temp0_40 > -0x3f78bfb920102630)
                                    arg1 = __vorpd_xmmdq_xmmdq_memdq(
                                        __vmovsd_xmmdq_memq(4.9406564584124654e-324), var_88_2);
                                else
                                {
                                    char rcx_16 = r9_37 + 0x32;
                                    
                                    if (r9_37 + 0x432 < 0)
                                        rcx_16 = 0;
                                    
                                    arg1 =
                                        __vorpd_xmmdq_xmmdq_memdq(arg2 * (1 << rcx_16), var_88_2);
                                }
                                
                                return _pow_special(__vmovsd_xmmdq_memq(var_b8), 
                                    __vmovsd_xmmdq_memq(var_a8), arg1, 8);
                            }
                            
                            __vorpd_xmmdq_xmmdq_memdq(arg2 * rcx_14, var_88_2);
                        }
                        else
                            __vorpd_xmmdq_xmmdq_memdq(arg2 * rcx_14, var_88_2);
                        
                        return rax_7;
                    }
                }
            }
            r11_6 = 0;
            
            if (!(-0x8000000000000000 & r8))
                r11_6 = 0x7ff0000000000000;
            
            int64_t r9_57 = 0xfffffffffffff & var_b8;
            
            if (r9_57)
                r11_6 = var_b8 | 0x8000000000000;
            
            if (!r9_57)
            {
                rax_7 = 0;
                
                if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                    rax_7 = r8;
                
                int64_t r10_39 = 0xfffffffffffff & rax_7;
                
                if (r10_39)
                    r11_6 = r8 | 0x8000000000000;
                
                if (r10_39)
                    return _pow_special(__vmovsd_xmmdq_memq(var_b8), __vmovsd_xmmdq_memq(var_a8), 
                        r11_6, 4);
                
                __vorpd_xmmdq_xmmdq_memdq(r11_6, var_88_2);
                return rax_7;
            }
        }
    }
    else
    {
        var_b8 = arg1;
        var_a8 = arg2;
        r8 = var_a8;
        int64_t rax;
        
        if (0x7fffffffffffffff & r8)
        {
            int64_t r11_2;
            
            if (r8 == 0x3ff0000000000000)
            {
                rax = 0;
                r11_2 = var_b8 | 0x8000000000000;
                
                if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
                    rax = var_b8;
                
                if (0xfffffffffffff & rax)
                {
                label_140013650:
                    int64_t rax_6 = 0;
                    
                    if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                        rax_6 = r8;
                    
                    if (!(0xfffffffffffff & rax_6))
                        return _pow_special(var_b8, var_a8, r11_2, 3);
                    
                    int64_t r9_31 = r8;
                    bool cond:2_1 = r11_2 == -0x8000000000000;
                    
                    if (r11_2 == -0x8000000000000)
                        r11_2 = r9_31;
                    
                    if (!cond:2_1)
                    {
                        if (r9_31 == -0x8000000000000)
                            r9_31 = r11_2;
                        
                        if (r9_31 & 0x8000000000000000)
                            r9_31 = r11_2;
                        
                        if (r11_2 & 0x8000000000000000)
                            r11_2 = r9_31;
                    }
                    
                    return _pow_special(var_b8, var_a8, r11_2 | 0x8000000000000, 5);
                }
            }
            else
            {
                rax = 0;
                int64_t var_88_1 = 0;
                
                if ((-0x8000000000000000 & var_b8) == -0x8000000000000000)
                {
                    if ((0x7ff0000000000000 & r8) > 0x43e0000000000000)
                    {
                    label_1400133ea:
                        
                        if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
                        {
                        label_1400134e0:
                            r11_2 = 0;
                            
                            if (!(-0x8000000000000000 & r8))
                                r11_2 = 0x7ff0000000000000;
                            
                            int64_t r9_25 = 0xfffffffffffff & var_b8;
                            
                            if (r9_25)
                                r11_2 = var_b8 | 0x8000000000000;
                            
                            if (r9_25)
                                goto label_140013650;
                            
                            rax = 0;
                            
                            if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                                rax = r8;
                            
                            int64_t r10_14 = 0xfffffffffffff & rax;
                            
                            if (r10_14)
                                r11_2 = r8 | 0x8000000000000;
                            
                            if (r10_14)
                                return _pow_special(var_b8, var_a8, r11_2, 4);
                            
                            __orpd_xmmxuq_memxuq(r11_2, var_88_1);
                        }
                        else
                        {
                            if (!(0x7fffffffffffffff & var_b8))
                                goto label_140013437;
                            
                            if (var_b8 == -0x4010000000000000)
                            {
                            label_14001334c:
                                rax = 0;
                                
                                if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                                    rax = r8;
                                
                                if (0xfffffffffffff & rax)
                                    return _pow_special(var_b8, var_a8, r8 | 0x8000000000000, 4);
                            }
                            else
                            {
                                if ((var_b8 & 0x7fffffffffffffff) < 0x3ff0000000000000)
                                {
                                    r11_2 = 0;
                                    
                                    if (-0x8000000000000000 & r8)
                                        r11_2 = 0x7ff0000000000000;
                                }
                                else
                                {
                                    r11_2 = 0;
                                    
                                    if (!(-0x8000000000000000 & r8))
                                        r11_2 = 0x7ff0000000000000;
                                }
                                
                                rax = 0;
                                
                                if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                                    rax = r8;
                                
                                int64_t r10_18 = 0xfffffffffffff & rax;
                                
                                if (r10_18)
                                    r11_2 = r8 | 0x8000000000000;
                                
                                if (r10_18)
                                    return _pow_special(var_b8, var_a8, r11_2, 4);
                                
                                if (!rax)
                                    goto label_140013600;
                            }
                        }
                    }
                    else
                    {
                        int64_t r10_4 = 0x7fffffffffffffff & r8;
                        uint64_t r10_5 = r10_4 >> 0x34;
                        
                        if (r10_5 - 0x3ff < 0)
                        {
                        label_14001339a:
                            
                            if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
                                goto label_1400134e0;
                            
                            if (var_b8 != -0x8000000000000000)
                                return _pow_special(var_b8, var_a8, -0x8000000000000, 6);
                            
                            goto label_140013437;
                        }
                        
                        char rcx_9 = (r10_5 - 0x3ff);
                        
                        if (r10_5 - 0x3ff <= 0x35)
                        {
                            if (0xfffffffffffff >> rcx_9 & r10_4)
                                goto label_14001339a;
                            
                            if (0x10000000000000 >> rcx_9 & r10_4)
                                var_88_1 = -0x8000000000000000;
                        }
                        
                        if (var_b8 == -0x8000000000000000)
                            goto label_140013437;
                        
                        if (var_b8 == -0x4010000000000000)
                            goto label_14001334c;
                        
                        if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
                            goto label_1400134e0;
                        
                        arg1 = 0x7fffffffffffffff & var_b8;
                    label_140012c01:
                        int64_t r8_1 = arg1;
                        zmm6 = _mm_cvtepi32_pd(__psubq_xmmdq_memdq(_mm_srli_epi64(arg1, 0x34), 
                            data_140030a90));
                        zmm2 = arg1 & data_140030a80;
                        
                        if (zmm6 == -1023.0)
                        {
                            zmm2 = (zmm2 | data_140030ae0) - 1.0;
                            zmm5 = zmm2;
                            zmm2 &= data_140030a80;
                            r8_1 = zmm2;
                            zmm6 = _mm_cvtepi32_pd(__psubd_xmmdq_memdq(_mm_srli_epi64(zmm5, 0x34), 
                                data_140030b80));
                        }
                        
                        zmm7[0] = arg1;
                        zmm7[0] = zmm7[0] - 1.0;
                        int64_t r8_3 = (r8_1 & 0xff00000000000) + ((r8_1 & 0x80000000000) << 1);
                        zmm7 = __andpd_xmmxuq_memxuq(zmm7, data_140030ba0);
                        uint64_t r8_4 = r8_3 >> 0x2c;
                        zmm2 |= data_140030af0;
                        arg2 = r8_3 | data_140030af0;
                        
                        if (zmm7[0] < 0.125)
                        {
                            arg1 = arg2;
                            arg2 = arg2 - zmm2;
                            zmm4 = arg2;
                            zmm3 =
                                *(&data_140030bb0 + (r8_4 << 3)) + *(&data_1400313c0 + (r8_4 << 3));
                            zmm4 = zmm4 * zmm3;
                            zmm4 = __andpd_xmmxuq_memxuq(zmm4, data_140030a10);
                            zmm5 = zmm4;
                            zmm4 = zmm4 * arg1;
                            arg2 = arg2 - zmm4;
                            arg2 = arg2 * zmm3;
                            zmm7[0] = arg2;
                            arg2 = arg2 + zmm5;
                            zmm2 = arg2;
                            arg1 = arg2;
                            zmm3 = 0x3fc2492492492494 * zmm2;
                            arg2 = 0x3fd0000000000000 * zmm2;
                            arg1 = arg1 * zmm2;
                            zmm4 = arg1;
                            zmm3 = zmm3 + 0.16666666666666666;
                            arg2 = arg2 + 0.33333333333333331;
                            zmm4 = zmm4 * arg1;
                            zmm3 = zmm3 * zmm2;
                            arg2 = arg2 * zmm2;
                            zmm3 = zmm3 + 0.20000000000000001;
                            zmm3 = zmm3 * zmm2;
                            arg2 = arg2 * arg1;
                            zmm3 = zmm3 * zmm4;
                            zmm2 = zmm5;
                            arg1 = zmm7;
                            arg1 = arg1 * arg1;
                            arg1 = arg1 * 0.5;
                            zmm5 = zmm5 * zmm7[0];
                            zmm5 = zmm5 + arg1;
                            zmm5 = zmm5 + zmm7[0];
                            arg1 = zmm2;
                            zmm7[0] = zmm2;
                            arg1 = arg1 * arg1;
                            arg1 = arg1 * 0.5;
                            zmm4 = arg1;
                            zmm2 = zmm2 + arg1;
                            zmm7[0] = zmm7[0] - zmm2;
                            zmm7[0] = zmm7[0] + zmm4;
                            zmm3 = zmm3 + zmm7[0];
                            arg2 = arg2 + zmm3;
                            zmm4 = 0x3e6efa39ef35793c * zmm6;
                            arg2 = arg2 + zmm5;
                            zmm4 = zmm4 + *(&data_140034030 + (r8_4 << 3));
                            zmm4 = zmm4 - arg2;
                            zmm3 = zmm4;
                            arg2 = zmm4;
                            zmm3 = zmm3 - zmm2;
                            arg1 = *(&data_140033820 + (r8_4 << 3));
                            zmm7 = 0x3fe62e42e0000000;
                            zmm7[0] = zmm7[0] * zmm6;
                            arg1 = arg1 + zmm7[0];
                        }
                        else
                        {
                            arg2 = arg2 - zmm2;
                            zmm4 = arg2;
                            arg2 = arg2 * *(&data_140030bb0 + (r8_4 << 3));
                            zmm5 = arg2;
                            zmm4 = zmm4 * *(&data_1400313c0 + (r8_4 << 3));
                            zmm7[0] = zmm4;
                            arg2 = arg2 + zmm4;
                            zmm2 = arg2;
                            arg1 = arg2;
                            zmm3 = 0x3fc5555555555555 * zmm2;
                            arg2 = 0x3fd5555555555555 * zmm2;
                            arg1 = arg1 * zmm2;
                            zmm5 = zmm5 - zmm2;
                            zmm4 = arg1;
                            zmm3 = zmm3 + 0.20000000000000001;
                            arg2 = arg2 + 0.5;
                            zmm4 = zmm4 * arg1;
                            zmm3 = zmm3 * zmm2;
                            arg2 = arg2 * arg1;
                            zmm3 = zmm3 + 0.25;
                            zmm7[0] = zmm7[0] + zmm5;
                            zmm3 = zmm3 * zmm4;
                            arg2 = arg2 + zmm3;
                            arg2 = arg2 + zmm7[0];
                            zmm5 = 0x3e6efa39ef35793c * zmm6;
                            arg1 = *(&data_140033820 + (r8_4 << 3));
                            zmm5 = zmm5 - arg2;
                            zmm3 = *(&data_140034030 + (r8_4 << 3)) + zmm5;
                            arg2 = zmm3;
                            zmm3 = zmm3 - zmm2;
                            zmm7 = 0x3fe62e42e0000000;
                            zmm7[0] = zmm7[0] * zmm6;
                            arg1 = arg1 + zmm7[0];
                        }
                        
                        zmm7[0] = arg1;
                        arg1 = arg1 + zmm3;
                        zmm5 = arg1;
                        arg1 = __andpd_xmmxuq_memxuq(arg1, data_140030a10);
                        zmm2 = zmm2 + zmm3;
                        zmm7[0] = zmm7[0] - zmm5;
                        arg2 = arg2 - zmm2;
                        zmm7[0] = zmm7[0] + zmm3;
                        zmm5 = zmm5 - arg1;
                        zmm7[0] = zmm7[0] + arg2;
                        zmm7[0] = zmm7[0] + zmm5;
                        zmm2 = var_a8 & -0x8000000;
                        zmm4 = var_a8 - zmm2;
                        zmm3 = zmm4;
                        zmm5 = zmm7;
                        zmm6 = arg1;
                        zmm3 = zmm3 * zmm7[0];
                        zmm4 = zmm4 * arg1;
                        zmm5 = zmm5 * zmm2;
                        zmm6 = zmm6 * zmm2;
                        arg2 = zmm6;
                        zmm3 = zmm3 + zmm4;
                        zmm3 = zmm3 + zmm5;
                        arg2 = arg2 + zmm3;
                        arg1 = arg2;
                        zmm6 = zmm6 - arg2;
                        zmm6 = zmm6 + zmm3;
                        zmm7 = 0x40571547652b82fe;
                        uint64_t var_98_1 = arg1;
                        zmm7[0] = zmm7[0] * arg1;
                        
                        if (zmm7[0] > 65536.0)
                        {
                        label_140013027:
                            r11_2 = 0x7ff0000000000000 | var_88_1;
                        label_140013600:
                            int32_t r9_30 = 7;
                            
                            if (0x7fffffffffffffff & r11_2)
                                r9_30 = 9;
                            
                            return _pow_special(var_b8, var_a8, r11_2, r9_30);
                        }
                        
                        if (zmm7[0] < -68800.0)
                        {
                            r11_2 = var_88_1;
                            goto label_140013600;
                        }
                        
                        zmm4 = _mm_cvtpd_epi32(zmm7);
                        arg2 = _mm_cvtepi32_pd(zmm4);
                        zmm2 = 0x3f862e42f0000000 * arg2;
                        int32_t rcx_1 = zmm4;
                        rax = 0x3f & rcx_1;
                        arg1 = arg1 - zmm2;
                        arg2 = arg2 * -4.3590106387089909e-10;
                        zmm2 = arg1;
                        uint64_t rcx_3 = (rcx_1 - rax) >> 6;
                        zmm2 = zmm2 + arg2;
                        zmm2 = zmm2 + zmm6;
                        arg2 = zmm2;
                        arg2 = arg2 * zmm2;
                        arg1 = 0x3fe0000000000000 * zmm2;
                        zmm3 = 0x3fa5555555555555 * zmm2;
                        zmm4 = 0x3f56c16c16c16c17 * zmm2;
                        zmm5 = arg2;
                        arg2 = arg2 * zmm2;
                        arg1 = arg1 + 1.0;
                        zmm3 = zmm3 + 0.16666666666666666;
                        zmm5 = zmm5 * arg2;
                        zmm4 = zmm4 + 0.0083333333333333332;
                        arg1 = arg1 * zmm2;
                        zmm3 = zmm3 * arg2;
                        zmm4 = zmm4 * zmm5;
                        int32_t r9_5 = 0;
                        zmm3 = zmm3 + zmm4;
                        arg1 = arg1 + zmm3;
                        
                        if (rcx_3 <= 0xfffffc02)
                            r9_5 = rcx_3;
                        
                        int64_t rcx_5 = (rcx_3 + 0x3ff) << 0x34;
                        zmm5 = *(&data_140034a40 + (rax << 3)) * arg1;
                        arg2 = *(&data_140034840 + (rax << 3)) * arg1;
                        zmm5 = zmm5 + *(&data_140034a40 + (rax << 3));
                        arg2 = arg2 + zmm5;
                        arg2 = arg2 + *(&data_140034840 + (rax << 3));
                        arg1 = arg2;
                        
                        if (rcx_5 == 0x7ff0000000000000)
                        {
                            if (arg1 >= 1.0)
                                goto label_140013027;
                            
                            __orpd_xmmxuq_memxuq(__orpd_xmmxuq_memxuq(arg1, data_140031be0), 
                                var_88_1);
                        }
                        else if (r9_5)
                        {
                            int32_t r11_1 = 0;
                            
                            if (arg1 >= 1.0)
                                r11_1 = r9_5;
                            
                            if (r11_1 != 0xfffffc02)
                            {
                                if (var_98_1 > -0x3f78bfb920102630)
                                    arg1 = __orpd_xmmxuq_memxuq(1, var_88_1);
                                else
                                {
                                    char rcx_7 = r9_5 + 0x32;
                                    
                                    if (r9_5 + 0x432 < 0)
                                        rcx_7 = 0;
                                    
                                    arg1 = arg1 * (1 << rcx_7);
                                    arg1 = __orpd_xmmxuq_memxuq(arg1, var_88_1);
                                }
                                
                                zmm2 = arg1;
                                return _pow_special(var_b8, var_a8, zmm2, 8);
                            }
                            
                            arg1 = arg1 * rcx_5;
                            __orpd_xmmxuq_memxuq(arg1, var_88_1);
                        }
                        else
                        {
                            arg1 = arg1 * rcx_5;
                            __orpd_xmmxuq_memxuq(arg1, var_88_1);
                        }
                    }
                }
                else if (var_b8 == 0x3ff0000000000000)
                {
                    rax = 0;
                    
                    if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                        rax = r8;
                    
                    int64_t r9_13 = 0xfffffffffffff & rax;
                    
                    if (r9_13 && !(r9_13 & 0x8000000000000))
                        return _pow_special(var_b8, var_a8, r8 | 0x8000000000000, 4);
                }
                else if (!var_b8)
                {
                label_140013437:
                    rax = 0;
                    
                    if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
                    {
                        if (r8 == -0x10000000000000)
                            rax = 0x7ff0000000000000;
                        
                        if (r8 == -0x10000000000000)
                            return _pow_special(var_b8, var_a8, 
                                __orpd_xmmxuq_memxuq(rax, var_88_1), 2);
                        
                        if (0xfffffffffffff & r8)
                            return _pow_special(var_b8, var_a8, r8 | 0x8000000000000, 4);
                    }
                    else
                    {
                        int64_t r10_10 = -0x8000000000000000 & r8;
                        
                        if (r10_10)
                            rax = 0x7ff0000000000000;
                        
                        if (r10_10)
                            return _pow_special(var_b8, var_a8, 
                                __orpd_xmmxuq_memxuq(rax, var_88_1), 2);
                        
                        __orpd_xmmxuq_memxuq(rax, var_88_1);
                    }
                }
                else
                {
                    if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
                        goto label_1400134e0;
                    
                    if ((0x7ff0000000000000 & r8) > 0x43e0000000000000)
                        goto label_1400133ea;
                    
                    if ((0x7ff0000000000000 & r8) >= 0x3c00000000000000)
                        goto label_140012c01;
                    
                    arg1 = 0x3ff0000000000000 + arg2;
                }
            }
            return rax;
        }
        
        rax = 0;
        r11_6 = var_b8 | 0x8000000000000;
        
        if ((0x7ff0000000000000 & var_b8) == 0x7ff0000000000000)
            rax = var_b8;
        
        int64_t r9_16 = 0xfffffffffffff & rax;
        
        if (!r9_16 || r9_16 & 0x8000000000000)
            return rax;
    }
    int64_t rax_13 = 0;
    
    if ((0x7ff0000000000000 & r8) == 0x7ff0000000000000)
        rax_13 = r8;
    
    if (!(0xfffffffffffff & rax_13))
        return _pow_special(__vmovsd_xmmdq_memq(var_b8), __vmovsd_xmmdq_memq(var_a8), r11_6, 3);
    
    int64_t r9_63 = r8;
    bool cond:1_1 = r11_6 == -0x8000000000000;
    
    if (r11_6 == -0x8000000000000)
        r11_6 = r9_63;
    
    if (!cond:1_1)
    {
        if (r9_63 == -0x8000000000000)
            r9_63 = r11_6;
        
        if (r9_63 & 0x8000000000000000)
            r9_63 = r11_6;
        
        if (r11_6 & 0x8000000000000000)
            r11_6 = r9_63;
    }
    
    return _pow_special(__vmovsd_xmmdq_memq(var_b8), __vmovsd_xmmdq_memq(var_a8), 
        r11_6 | 0x8000000000000, 5);
}

uint64_t sub_1400141b0(double arg1[0x2] @ zmm0, int32_t arg2[0x4] @ zmm1, int32_t arg3 @ mxcsr, uint32_t arg4[0x4] @ zmm6)
{
    double zmm7[0x2];
    double var_38[0x2] = zmm7;
    double zmm2[0x2];
    uint32_t zmm3[0x4];
    uint128_t zmm4;
    uint32_t zmm5[0x4];
    
    if (data_1400436e4)
    {
        arg2 = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg2, arg1);
        zmm5 = {0};
        int32_t rcx_18 = arg1[0];
        int32_t rax_21 = arg2[0] & 0x7fffffff;
        int32_t rcx_19 = rcx_18 & 0x7fffffff;
        
        if (rax_21 >= 0x7f800000)
        {
            if (rax_21 > 0x7f800000)
            {
                if (rcx_19 > 0x7f800000)
                {
                    if (rcx_18 == 0xffc00000)
                    {
                        uint64_t rax_37;
                        int512_t zmm6_17;
                        rax_37 = _powf_special(arg1[0], arg2[0], arg2[0] | 0x400000, 5);
                        zmm6_17 = arg4;
                        return rax_37;
                    }
                    
                    uint64_t rax_34;
                    int512_t zmm6_16;
                    rax_34 = _powf_special(arg1[0], arg2[0], arg1[0] | 0x400000, 5);
                    zmm6_16 = arg4;
                    return rax_34;
                }
                
                if (rcx_18 != 0x3f800000)
                {
                    uint64_t rax_33;
                    int512_t zmm6_15;
                    rax_33 = _powf_special(arg2[0], arg2[0], arg2[0] | 0x400000, 4);
                    zmm6_15 = arg4;
                    return rax_33;
                }
                
                if (rax_21 >= 0x7fc00000)
                    return rax_21;
                
                uint64_t rax_29;
                int512_t zmm6_13;
                rax_29 = _powf_special(arg1[0], arg2[0], 0x3f800000, 4);
                zmm6_13 = arg4;
                return rax_29;
            }
            
            if (rcx_19 > 0x7f800000)
            {
            label_140014f45:
                uint64_t rax_30;
                int512_t zmm6_14;
                rax_30 = _powf_special(arg1[0], arg2[0], arg1[0] | 0x400000, 3);
                zmm6_14 = arg4;
                return rax_30;
            }
            
            if (rcx_19 == 0x3f800000)
                return rax_21;
            
            rax_21 = arg2[0];
            
            if (!TEST_BITD(rax_21, 0x1f))
                return rax_21;
            
            if (rcx_19 < 0x3f800000)
                return 0x7f800000;
            
            return 0;
        }
        
        if (rax_21 <= 0x3f800000)
        {
            if (!rax_21)
            {
                if (rcx_19 <= 0x7f800000 || rcx_19 >= 0x7fc00000)
                    return rax_21;
                
                uint64_t rax_28;
                int512_t zmm6_12;
                rax_28 = _powf_special(arg1[0], arg2[0], rcx_19 | 0x400000, 3);
                zmm6_12 = arg4;
                return rax_28;
            }
            
            if (arg2[0] == 0x3f800000)
            {
                if (rcx_19 <= 0x7f800000)
                    return rax_21;
                
                uint64_t rax_27;
                int512_t zmm6_11;
                rax_27 = _powf_special(arg1[0], arg2[0], arg1[0] | 0x400000, 3);
                zmm6_11 = arg4;
                return rax_27;
            }
        }
        
        if (rcx_19 >= 0x7f800000)
        {
            if (!rax_21)
                return rax_21;
            
            int32_t rcx_29 = arg1[0];
            
            if (rcx_29 == 0x7f800000)
            {
                arg2[0];
                return rax_21;
            }
            
            if (rcx_29 != 0xff800000)
                goto label_140014f45;
            
            if ((rax_21 & 0x7f800000) <= 0x4b000000)
            {
                int32_t var_18_6 = arg3 | 0x1f80;
                zmm2[0] = arg2[0];
                zmm2 - arg2[0];
                
                if (zmm2[0] == arg2[0])
                    zmm2[0] < arg2[0];
            }
            
            return 0;
        }
        
        arg1 = __vcvtps2pd_xmmdq_xmmq(arg2[0]);
        
        if (rcx_18 < 0x3f880000)
        {
            if (rcx_18 <= 0)
            {
                if (!rcx_19)
                {
                    int32_t rdx_21 = arg2[0];
                    int32_t r10_1 = 0;
                    bool cond:4_1 = rdx_21 < 0;
                    bool cond:5_1 = rdx_21 > 0;
                    
                    if (rdx_21 < 0)
                        rdx_21 = 0x7f800000;
                    
                    if (cond:4_1)
                        r10_1 = 0x7f800000;
                    
                    if (cond:5_1)
                        rdx_21 = 0;
                    
                    int32_t rcx_26 = -0x80000000;
                    int32_t r8_13 = rax_21 & 0x7f800000;
                    
                    if (r8_13 > 0x4b000000)
                        rcx_26 = 0;
                    
                    if (r8_13 <= 0x4b000000)
                    {
                        int32_t var_18_5 = arg3 | 0x1f80;
                        int32_t r8_16 = arg2[0];
                        zmm2[0] = r8_16;
                        zmm2 - arg2[0];
                        bool z_5 = zmm2[0] == arg2[0];
                        
                        if (!z_5)
                            rcx_26 = 0;
                        
                        if (z_5)
                        {
                            zmm2[0] < arg2[0];
                            bool c_13 = r8_16 & 1;
                            
                            if (!c_13)
                                rcx_26 = 0;
                            
                            if (c_13)
                                rcx_26 = rcx_18 & 0x80000000;
                        }
                    }
                    
                    arg1 = rcx_26 | rdx_21;
                    
                    if (!r10_1)
                        return 0;
                    
                    uint64_t rax_25;
                    int512_t zmm6_10;
                    rax_25 = _powf_special(arg1[0], arg2[0], arg1, 2);
                    zmm6_10 = arg4;
                    return rax_25;
                }
                
                if ((rax_21 & 0x7f800000) <= 0x4b000000)
                {
                    int32_t var_18_4 = arg3 | 0x1f80;
                    int32_t rdx_17 = arg2[0];
                    zmm2[0] = rdx_17;
                    zmm2 - arg2[0];
                    
                    if (!(zmm2[0] == arg2[0]))
                    {
                        uint64_t rax_40;
                        int512_t zmm6_20;
                        rax_40 = _powf_special(arg1[0], arg2[0], 0xffc00000, 6);
                        zmm6_20 = arg4;
                        return rax_40;
                    }
                    
                    zmm2[0] < arg2[0];
                    
                    if (rdx_17 & 1)
                        zmm5 = 0x80000000;
                }
            }
            
            zmm3 = __vpshufd_xmmdq_xmmdq_immb(arg1, 0xee) - 1.0;
        }
        
        if (rcx_18 < 0x3f880000 && (zmm3[0] & 0x7fffffffffffffff) < 0x3fb0000000000000)
        {
            zmm5 = __vmovsd_xmmdq_xmmdq_xmmq_10(__vpshufd_xmmdq_xmmdq_immb(zmm5, 0x44), zmm3[0])
                / (zmm3 + 2.0)[0];
            zmm2 = zmm5;
            zmm5 = zmm5 * zmm3[0];
            zmm2 = zmm2 + zmm2[0];
            arg2 = zmm2 * zmm2[0];
            zmm4 =
                __vmulpd_xmmdq_xmmdq_memdq(__vpshufd_xmmdq_xmmdq_immb(arg2, 0x44), data_140031d40);
            zmm2 = zmm2 * arg2[0];
            zmm4 = __vaddpd_xmmdq_xmmdq_memdq(zmm4, data_140031d50);
            double temp0_54[0x2] = __vmulpd_xmmdq_xmmdq_xmmdq(
                __vunpcklpd_xmmdq_xmmdq_xmmdq(zmm2, arg2 * arg2[0] * zmm2[0]), zmm4);
            arg2 = __vpshufd_xmmdq_xmmdq_immb(temp0_54, 0xee);
            zmm2 = arg2 + temp0_54[0] - zmm5[0];
            zmm5 = __vpshufd_xmmdq_xmmdq_immb(zmm5, 0xee);
            zmm3 = zmm3 + zmm2[0];
            goto label_1400142ae;
        }
        
        zmm2 = __vpshufd_xmmdq_xmmdq_immb(arg1, 0xee) & data_140031da0;
        double rcx_20 = zmm2[0];
        int32_t rcx_22 = (rcx_20 >> 0x2c) + 0;
        uint64_t rax_22 = rcx_22;
        zmm2 |= data_140031d80;
        zmm3 = __vcvtdq2pd_xmmdq_xmmq(__vpsubq_xmmdq_xmmdq_memdq(
            __vpsrlq_xmmdq_xmmdq_immb(__vpshufd_xmmdq_xmmdq_immb(zmm2, 0xee), 0x34), 
            data_140031d90)[0]);
        arg2 = (((rcx_22 | 0x3fe00) << 0x2c) - zmm2[0]) * *(&data_140034e50 + (rax_22 << 3));
        arg2 = arg2 * __vfmadd213sd_xmmdq_xmmq_memq(
            __vfmadd213sd_xmmdq_xmmq_memq(__vmovsd_xmmdq_memq(0.33333333333333331), arg2[0], 0.5), 
            arg2[0], 1.0);
        arg1 =
            arg1 * (zmm3 * 0.69314718055994529 + *(&data_140031db0 + (rax_22 << 3)) - arg2[0])[0];
        
        if (arg1 > 88.72283935546875)
        {
            zmm2 = __vorps_xmmdq_xmmdq_xmmdq(0x7f800000, zmm5);
            uint64_t rax_39;
            int512_t zmm6_19;
            rax_39 = _powf_special(arg1[0], arg2[0], zmm2, 9);
            zmm6_19 = arg4;
            return rax_39;
        }
        
        if (arg1 <= -103.2789306640625)
        {
            zmm2 = __vorps_xmmdq_xmmdq_xmmdq({0}, zmm5);
            uint64_t rax_38;
            int512_t zmm6_18;
            rax_38 = _powf_special(arg1[0], arg2[0], zmm2, 7);
            zmm6_18 = arg4;
            return rax_38;
        }
        
        uint128_t temp0_35 =
            __vcvtpd2dq_xmmdq_xmmdq(__vmulpd_xmmdq_xmmdq_memdq(arg1, data_140031d70));
        double temp0_37[0x2] = __vfnmadd231sd_xmmdq_xmmq_memq(arg1, 
            __vcvtdq2pd_xmmdq_xmmq(temp0_35)[0], 0.010830424696249145);
        arg1 = temp0_37 * __vfmadd213sd_xmmdq_xmmq_memq(
            __vfmadd213sd_xmmdq_xmmq_memq(__vmovsd_xmmdq_memq(0.16666666666666666), temp0_37[0], 
                0.5), 
            temp0_37[0], 1.0)[0];
        uint64_t rax_23 = 0x3f & temp0_35;
        uint32_t temp0_41[0x4] = __vmovsd_xmmdq_memq(*(&data_140034c50 + (rax_23 << 3)));
        double temp0_42[0x2] = _mm_fmadd_sd(arg1, temp0_41[0], temp0_41[0]);
        temp0_42[0] = __vpaddq_xmmdq_xmmdq_xmmdq(
            __vpsllq_xmmdq_xmmdq_immb(__vpsrad_xmmdq_xmmdq_immb(temp0_35, 6), 0x34), temp0_42);
        __vorps_xmmdq_xmmdq_xmmdq(temp0_42, zmm5);
        return rax_23;
    }
    
    int32_t temp0[0x4] = _mm_unpacklo_epi32(arg2, arg1[0]);
    zmm5 = {0};
    int32_t rcx = arg1[0];
    int32_t rax_1 = temp0[0] & 0x7fffffff;
    int32_t rcx_1 = rcx & 0x7fffffff;
    
    if (rax_1 >= 0x7f800000)
    {
        if (rax_1 > 0x7f800000)
        {
            if (rcx_1 > 0x7f800000)
            {
                if (rcx == 0xffc00000)
                {
                    uint64_t rax_16;
                    int512_t zmm6_6;
                    rax_16 = _powf_special(arg1[0], temp0[0], temp0[0] | 0x400000, 5);
                    zmm6_6 = arg4;
                    return rax_16;
                }
                
                uint64_t rax_13;
                int512_t zmm6_5;
                rax_13 = _powf_special(arg1[0], temp0[0], arg1[0] | 0x400000, 5);
                zmm6_5 = arg4;
                return rax_13;
            }
            
            if (rcx != 0x3f800000)
            {
                uint64_t rax_12;
                int512_t zmm6_4;
                rax_12 = _powf_special(arg1[0], temp0[0], temp0[0] | 0x400000, 4);
                zmm6_4 = arg4;
                return rax_12;
            }
            
            if (rax_1 >= 0x7fc00000)
                return rax_1;
            
            uint64_t rax_8;
            int512_t zmm6_2;
            rax_8 = _powf_special(arg1[0], temp0[0], 0x3f800000, 4);
            zmm6_2 = arg4;
            return rax_8;
        }
        
        if (rcx_1 > 0x7f800000)
        {
        label_1400147e5:
            uint64_t rax_9;
            int512_t zmm6_3;
            rax_9 = _powf_special(arg1[0], temp0[0], arg1[0] | 0x400000, 3);
            zmm6_3 = arg4;
            return rax_9;
        }
        
        if (rcx_1 == 0x3f800000)
            return rax_1;
        
        rax_1 = temp0[0];
        
        if (!TEST_BITD(rax_1, 0x1f))
            return rax_1;
        
        int32_t rdx_9 = 1;
        rax_1 = 0;
        
        if (!rcx_1)
            return rax_1;
        
        if (rcx_1)
            rdx_9 = 0;
        
        if (rcx_1 < 0x3f800000)
            rax_1 = 0x7f800000;
        
        arg1 = rax_1;
        
        if (!rdx_9)
            return rax_1;
        
        return _powf_special(arg1[0], temp0[0], arg1, 2);
    }
    
    if (rax_1 <= 0x3f800000)
    {
        if (!rax_1)
        {
            if (rcx_1 <= 0x7f800000 || rcx_1 >= 0x7fc00000)
                return rax_1;
            
            uint64_t rax_7;
            int512_t zmm6_1;
            rax_7 = _powf_special(arg1[0], temp0[0], rcx_1 | 0x400000, 3);
            zmm6_1 = arg4;
            return rax_7;
        }
        
        if (temp0[0] == 0x3f800000)
        {
            if ((arg1[0] & 0x7fffffff) <= 0x7f800000)
                return rax_1;
            
            uint64_t rax_6;
            int512_t zmm6;
            rax_6 = _powf_special(arg1[0], temp0[0], arg1[0] | 0x400000, 3);
            zmm6 = arg4;
            return rax_6;
        }
    }
    
    if (rcx_1 >= 0x7f800000)
    {
        if (!rax_1)
            return rax_1;
        
        int32_t rcx_11 = arg1[0];
        
        if (rcx_11 == 0x7f800000)
        {
            temp0[0];
            return rax_1;
        }
        
        if (rcx_11 != 0xff800000)
            goto label_1400147e5;
        
        if ((rax_1 & 0x7f800000) <= 0x4b000000)
        {
            int32_t var_18_3 = arg3 | 0x1f80;
            zmm2[0] = temp0[0];
            zmm2[0] - temp0[0];
            
            if (zmm2[0] == temp0[0])
                zmm2[0] < temp0[0];
        }
        
        return 0;
    }
    
    arg1 = _mm_cvtps_pd(temp0[0]);
    
    if (rcx < 0x3f880000)
    {
        if (rcx <= 0)
        {
            if (!rcx_1)
            {
                int32_t rdx_7 = temp0[0];
                int32_t r10 = 0;
                bool cond:10_1 = rdx_7 < 0;
                bool cond:11_1 = rdx_7 > 0;
                
                if (rdx_7 < 0)
                    rdx_7 = 0x7f800000;
                
                if (cond:10_1)
                    r10 = 0x7f800000;
                
                if (cond:11_1)
                    rdx_7 = 0;
                
                int32_t rcx_8 = -0x80000000;
                int32_t r8_1 = rax_1 & 0x7f800000;
                
                if (r8_1 > 0x4b000000)
                    rcx_8 = 0;
                
                if (r8_1 <= 0x4b000000)
                {
                    int32_t var_18_2 = arg3 | 0x1f80;
                    int32_t r8_4 = temp0[0];
                    zmm2[0] = r8_4;
                    zmm2[0] - temp0[0];
                    bool z_2 = zmm2[0] == temp0[0];
                    
                    if (!z_2)
                        rcx_8 = 0;
                    
                    if (z_2)
                    {
                        zmm2[0] < temp0[0];
                        bool c_5 = r8_4 & 1;
                        
                        if (!c_5)
                            rcx_8 = 0;
                        
                        if (c_5)
                            rcx_8 = rcx & 0x80000000;
                    }
                }
                
                arg1 = rcx_8 | rdx_7;
                
                if (r10)
                    return _powf_special(arg1[0], temp0[0], arg1, 2);
                
                return 0;
            }
            
            if ((rax_1 & 0x7f800000) <= 0x4b000000)
            {
                int32_t var_18_1 = arg3 | 0x1f80;
                int32_t rdx_3 = temp0[0];
                zmm2[0] = rdx_3;
                zmm2[0] - temp0[0];
                
                if (!(zmm2[0] == temp0[0]))
                {
                    uint64_t rax_19;
                    int512_t zmm6_9;
                    rax_19 = _powf_special(arg1[0], temp0[0], 0xffc00000, 6);
                    zmm6_9 = arg4;
                    return rax_19;
                }
                
                zmm2[0] < temp0[0];
                
                if (rdx_3 & 1)
                    zmm5 = 0x80000000;
            }
        }
        
        zmm3 = _mm_shuffle_epi32(arg1, 0xee);
        zmm3[0] = zmm3[0] - 1.0;
    }
    
    if (rcx < 0x3f880000 && (zmm3[0] & 0x7fffffffffffffff) < 0x3fb0000000000000)
    {
        zmm7 = data_140031d40;
        arg2 = zmm3;
        arg2[0] = arg2[0] + 2.0;
        zmm3[0] = zmm3[0] / arg2[0];
        zmm2 = zmm3;
        zmm3[0] = zmm3[0] * zmm3[0];
        zmm2[0] = zmm2[0] + zmm2[0];
        arg2 = zmm2;
        arg2[0] = arg2[0] * zmm2[0];
        zmm4 = _mm_mul_pd(_mm_shuffle_epi32(arg2, 0x44), zmm7);
        zmm2[0] = zmm2[0] * arg2[0];
        zmm4 = __addpd_xmmpd_mempd(zmm4, data_140031d50);
        arg2[0] = arg2[0] * arg2[0];
        arg2[0] = arg2[0] * zmm2[0];
        double temp0_19[0x2] = _mm_mul_pd(_mm_unpacklo_pd(zmm2, arg2[0]), zmm4);
        arg2 = _mm_shuffle_epi32(temp0_19, 0xee);
        temp0_19[0] = temp0_19[0] + arg2[0];
        temp0_19[0] = temp0_19[0] - zmm3[0];
        zmm3[0] = zmm3[0] + temp0_19[0];
        goto label_1400142ae;
    }
    
    zmm2 = _mm_shuffle_epi32(arg1, 0xee) & data_140031da0;
    double rcx_2 = zmm2[0];
    int32_t rcx_4 = (rcx_2 >> 0x2c) + 0;
    uint64_t rax_2 = rcx_4;
    arg2 = (rcx_4 | 0x3fe00) << 0x2c;
    zmm2 |= data_140031d80;
    zmm3 = _mm_cvtepi32_pd(__psubq_xmmdq_memdq(_mm_srli_epi64(_mm_shuffle_epi32(zmm2, 0xee), 0x34), 
        data_140031d90)[0]);
    arg2[0] = arg2[0] - zmm2[0];
    arg2[0] = arg2[0] * *(&data_140034e50 + (rax_2 << 3));
    zmm2 = arg2;
    zmm4 = 0x3fd5555555555555 * arg2[0];
    arg2[0] = arg2[0] * zmm2[0];
    zmm4 = zmm4 + 0.5;
    arg2[0] = arg2[0] * zmm4;
    arg2[0] = arg2[0] + zmm2[0];
    zmm3[0] = zmm3[0] * 0.69314718055994529;
    zmm3[0] = zmm3[0] + *(&data_140031db0 + (rax_2 << 3));
    zmm3[0] = zmm3[0] - arg2[0];
label_1400142ae:
    arg1[0] = arg1[0] * zmm3[0];
    
    if (arg1[0] > 88.72283935546875)
    {
        zmm2 = _mm_or_ps(0x7f800000, zmm5);
        uint64_t rax_18;
        int512_t zmm6_8;
        rax_18 = _powf_special(arg1[0], arg2[0], zmm2, 9);
        zmm6_8 = arg4;
        return rax_18;
    }
    
    if (arg1[0] <= -103.2789306640625)
    {
        zmm2 = _mm_or_ps({0}, zmm5);
        uint64_t rax_17;
        int512_t zmm6_7;
        rax_17 = _powf_special(arg1[0], arg2[0], zmm2, 7);
        zmm6_7 = arg4;
        return rax_17;
    }
    
    zmm4 = _mm_cvtpd_epi32(__mulpd_xmmpd_mempd(arg1, data_140031d70));
    double temp0_9[0x2] = _mm_cvtepi32_pd(zmm4);
    temp0_9[0] = temp0_9[0] * 0.010830424696249145;
    arg1[0] = arg1[0] - temp0_9[0];
    arg2 = arg1;
    zmm3 = 0x3fc5555555555555;
    zmm3[0] = zmm3[0] * arg1[0];
    arg1[0] = arg1[0] * arg2[0];
    zmm3[0] = zmm3[0] + 0.5;
    arg1[0] = arg1[0] * zmm3[0];
    arg1[0] = arg1[0] + arg2[0];
    uint64_t rax_3 = 0x3f & zmm4;
    arg1[0] = arg1[0] * *(&data_140034c50 + (rax_3 << 3));
    arg1[0] = arg1[0] + *(&data_140034c50 + (rax_3 << 3));
    arg1[0] = _mm_add_epi64(_mm_slli_epi64(_mm_srai_epi32(zmm4, 6), 0x34), arg1);
    _mm_or_ps(arg1, zmm5);
    return rax_3;
}

int512_t sub_140014f10(int128_t arg1 @ zmm0, int128_t arg2, int128_t arg3) __pure
{
    int512_t zmm7;
    zmm7 = arg3;
    int512_t zmm6;
    zmm6 = arg2;
    return arg1 + arg1;
}

char* __strncnt(char* arg1, int64_t arg2)
{
    char* result = nullptr;
    
    if (*arg1)
    {
        while (result != arg2)
        {
            result = &result[1];
            
            if (!*(result + arg1))
                break;
        }
    }
    
    return result;
}

uint64_t __acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(char* arg1, void* arg2, uint32_t arg3)
{
    int32_t rbx = 0;
    
    if (!arg1)
    {
        if (*(arg2 + 0x28))
        {
            _free_base(*(arg2 + 0x10));
            *(arg2 + 0x28) = 0;
        }
        
        __builtin_memset(arg2 + 0x10, 0, 0x18);
    }
    else
    {
        int32_t rdx_3;
        
        if (*arg1)
        {
            int32_t var_10_1 = 0;
            int64_t var_18_1 = 0;
            int32_t rax_4 = __acrt_MultiByteToWideChar(arg3, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
                arg1, 0xffffffff);
            int64_t r14_1 = rax_4;
            
            if (rax_4)
            {
                int64_t rcx_5 = *(arg2 + 0x18);
                
                if (r14_1 <= rcx_5)
                {
                label_1400151c0:
                    int32_t var_10_2 = rcx_5;
                    int64_t var_18_2 = *(arg2 + 0x10);
                    int32_t rax_10 = __acrt_MultiByteToWideChar(arg3, 
                        MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg1, 0xffffffff);
                    
                    if (!rax_10)
                    {
                        __acrt_errno_map_os_error(GetLastError());
                        rbx = *_errno();
                    }
                    else
                        *(arg2 + 0x20) = rax_10 - 1;
                }
                else
                {
                    if (*(arg2 + 0x28))
                    {
                        _free_base(*(arg2 + 0x10));
                        *(arg2 + 0x28) = 0;
                    }
                    
                    int64_t rax_7;
                    int32_t rdx_4;
                    rax_7 = _malloc_base(r14_1 * 2);
                    *(arg2 + 0x10) = rax_7;
                    rcx_5 = 0;
                    rdx_3 = ~(rdx_4 - rdx_4) & 0xc;
                    
                    if (!rdx_3)
                        rcx_5 = r14_1;
                    
                    *(arg2 + 0x28) = !rdx_3;
                    *(arg2 + 0x18) = rcx_5;
                    
                    if (!rdx_3)
                        goto label_1400151c0;
                    
                    rbx = rdx_3;
                }
            }
            else
            {
                __acrt_errno_map_os_error(GetLastError());
                rbx = *_errno();
            }
        }
        else
        {
            if (!*(arg2 + 0x18))
            {
                if (*(arg2 + 0x28))
                {
                    _free_base(*(arg2 + 0x10));
                    *(arg2 + 0x28) = 0;
                }
                
                int64_t rax_1;
                int32_t rdx;
                rax_1 = _malloc_base(2);
                *(arg2 + 0x10) = rax_1;
                rdx_3 = ~(rdx - rdx) & 0xc;
                int64_t rcx_2;
                rcx_2 = !rdx_3;
                *(arg2 + 0x28) = !rdx_3;
                *(arg2 + 0x18) = rcx_2;
            }
            
            if (*(arg2 + 0x18) || !rdx_3)
                **(arg2 + 0x10) = 0;
            else
                rbx = rdx_3;
        }
    }
    
    return rbx;
}

uint64_t __acrt_wcs_to_mbs_cp<struct __crt_win32_buffer_no_resizing>(int16_t* arg1, void* arg2, int32_t arg3)
{
    int32_t rbx = 0;
    
    if (!arg1)
    {
        if (*(arg2 + 0x28))
            *(arg2 + 0x28) = 0;
        
        __builtin_memset(arg2 + 0x10, 0, 0x18);
    }
    else if (*arg1)
    {
        int64_t var_10_1 = 0;
        int64_t var_18_1 = 0;
        int32_t rax_3 = __acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, 0, 0);
        
        if (rax_3)
        {
            int64_t rcx_2 = *(arg2 + 0x18);
            
            if (rax_3 <= rcx_2)
            {
                int64_t var_10_2 = 0;
                int64_t var_18_2 = 0;
                int32_t rax_7 =
                    __acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, *(arg2 + 0x10), rcx_2);
                
                if (!rax_7)
                {
                    __acrt_errno_map_os_error(GetLastError());
                    rbx = *_errno();
                }
                else
                    *(arg2 + 0x20) = rax_7 - 1;
            }
            else
            {
                if (*(arg2 + 0x28))
                    *(arg2 + 0x28) = 0;
                
            label_140015262:
                *_errno() = 0x22;
                *(arg2 + 0x28) = 0;
                *(arg2 + 0x18) = 0;
                rbx = 0x22;
            }
        }
        else
        {
            __acrt_errno_map_os_error(GetLastError());
            rbx = *_errno();
        }
    }
    else
    {
        if (!*(arg2 + 0x18))
        {
            if (*(arg2 + 0x28))
                *(arg2 + 0x28) = 0;
            
            goto label_140015262;
        }
        
        **(arg2 + 0x10) = 0;
    }
    
    return rbx;
}

int64_t internal_isupper_l(int32_t arg1, int64_t* arg2)
{
    int64_t rbx = arg1;
    int32_t result;
    
    if (!arg2)
    {
        int64_t rax_1 = __pctype_func();
        
        if (rbx + 1 > 0x100)
            result = 0;
        else
            result = *(rax_1 + (rbx << 1)) & 1;
    }
    else
    {
        int64_t* r8_1 = *arg2;
        
        if (r8_1[1] > 1)
            result = _isctype_l(rbx, 1, arg2);
        else if (rbx + 1 > 0x100)
            result = 0;
        else
            result = *(*r8_1 + (rbx << 1)) & 1;
    }
    
    result = result;
    return result;
}

uint64_t _tolower_l(int32_t arg1, int128_t* arg2)
{
    int64_t rbx = arg1;
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg2);
    void* var_20;
    
    if (rbx < 0x100)
    {
        if (internal_isupper_l(rbx, &var_20))
            rbx = *(*(var_20 + 0x110) + rbx);
        
        goto label_1400153c0;
    }
    
    int16_t arg_8 = 0;
    char arg_a = 0;
    int32_t rcx_4;
    
    if (*(var_20 + 8) <= 1)
    {
    label_14001541a:
        rcx_4 = 1;
        *_errno() = 0x2a;
        arg_8 = rbx;
        *(&arg_8 + 1) = 0;
    }
    else
    {
        char rsi_2 = rbx >> 8;
        
        if (!_isleadbyte_l(rsi_2, &var_20))
            goto label_14001541a;
        
        arg_8 = rsi_2;
        rcx_4 = 2;
        *(&arg_8 + 1) = rbx;
        arg_a = 0;
    }
    
    void* rdx_2 = var_20;
    int16_t arg_18 = 0;
    char arg_1a = 0;
    int32_t rax_7 = __acrt_LCMapStringA(&var_20, *(rdx_2 + 0x138), 0x100, &arg_8, rcx_4, &arg_18, 
        3, *(rdx_2 + 0xc), 1);
    char var_10;
    
    if (!rax_7)
    {
    label_1400153c0:
        
        if (var_10)
        {
            void* rax_2 = var_28;
            *(rax_2 + 0x3a8) &= 0xfffffffd;
        }
    }
    else
    {
        rbx = arg_18;
        
        if (rax_7 == 1)
            goto label_1400153c0;
        
        rbx = rbx << 8 | *(&arg_18 + 1);
        
        if (var_10)
        {
            void* rcx_7 = var_28;
            *(rcx_7 + 0x3a8) &= 0xfffffffd;
        }
    }
    return rbx;
}

uint64_t tolower(int32_t arg1)
{
    if (data_140043088)
        arg1 = _tolower_l(arg1, nullptr);
    else if (arg1 - 0x41 <= 0x19)
        arg1 += 0x20;
    
    return arg1;
}

uint64_t wcscpy_s(int16_t* arg1, int64_t arg2, int64_t arg3)
{
    int32_t rbx = 0;
    
    if (!arg1 || !arg2)
        goto label_140015502;
    
    if (arg3)
    {
        int16_t* r9_1 = arg1;
        int64_t i;
        
        do
        {
            int16_t rax_3 = *(arg3 - arg1 + r9_1);
            *r9_1 = rax_3;
            r9_1 = &r9_1[1];
            
            if (!rax_3)
                break;
            
            i = arg2;
            arg2 -= 1;
        } while (i != 1);
        
        if (!arg2)
        {
            *arg1 = 0;
            rbx = 0x22;
            *_errno() = rbx;
            _invalid_parameter_noinfo();
        }
    }
    else
    {
        *arg1 = 0;
    label_140015502:
        rbx = 0x16;
        *_errno() = rbx;
        _invalid_parameter_noinfo();
    }
    
    return rbx;
}

void* strnlen(char* arg1, void* arg2, int64_t arg3 @ r10)
{
    int32_t rax_10 = data_140040e20;
    char* r9 = arg1;
    void* result;
    
    if (rax_10 >= 5)
    {
        uint64_t r8_2 = arg1 & 0x1f;
        void* r10_1 = (arg3 - arg3) & (0x20 - r8_2);
        char* rax_1 = r9;
        
        if (arg2 < r10_1)
            r10_1 = arg2;
        
        int64_t rcx = arg1 + r10_1;
        
        if (r9 != rcx)
        {
            while (*rax_1)
            {
                rax_1 = &rax_1[1];
                
                if (rax_1 == rcx)
                    break;
            }
        }
        
        result = rax_1 - r9;
        
        if (result != r10_1)
            return result;
        
        arg1 = rax_1;
        void* r8_7 = ((arg2 - r10_1) & 0xffffffffffffffe0) + rax_1;
        
        if (rax_1 != r8_7)
        {
            do
            {
                uint8_t zmm1[0x20];
                zmm1[0] = {0};
                zmm1 = __vpcmpeqb_ymmqq_ymmqq_memqq(zmm1, *arg1);
                bool cond:0_1 = _mm256_movemask_epi8(zmm1);
                _mm256_zeroupper();
                
                if (cond:0_1)
                    break;
                
                arg1 = &arg1[0x20];
            } while (arg1 != r8_7);
        }
        
        for (; arg1 != r9 + arg2; arg1 = &arg1[1])
        {
            if (!*arg1)
                break;
        }
    }
    else if (rax_10 < 1)
    {
        int64_t rax_8 = arg1 + arg2;
        
        if (r9 != rax_8)
        {
            while (*arg1)
            {
                arg1 = &arg1[1];
                
                if (arg1 == rax_8)
                    break;
            }
        }
    }
    else
    {
        uint64_t rcx_2 = arg1 & 0xf;
        void* r10_3 = (arg3 - arg3) & (0x10 - rcx_2);
        char* rax_5 = r9;
        
        if (arg2 < r10_3)
            r10_3 = arg2;
        
        void* rcx_4 = r10_3 + r9;
        
        if (r9 != rcx_4)
        {
            while (*rax_5)
            {
                rax_5 = &rax_5[1];
                
                if (rax_5 == rcx_4)
                    break;
            }
        }
        
        result = rax_5 - r9;
        
        if (result != r10_3)
            return result;
        
        arg1 = rax_5;
        void* r8_11 = ((arg2 - r10_3) & 0xfffffffffffffff0) + rax_5;
        
        if (rax_5 != r8_11)
        {
            do
            {
                if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq({0}, *arg1)))
                    break;
                
                arg1 = &arg1[0x10];
            } while (arg1 != r8_11);
        }
        
        for (; arg1 != r9 + arg2; arg1 = &arg1[1])
        {
            if (!*arg1)
                break;
        }
    }
    return arg1 - r9;
}

int64_t wcsnlen(int16_t* arg1, uint64_t arg2, int64_t arg3 @ r11)
{
    int32_t rax_20 = data_140040e20;
    int16_t* i_1;
    int64_t result;
    int16_t* i;
    
    if (rax_20 < 5)
    {
        if (rax_20 < 1)
        {
            void* rax_18 = &arg1[arg2];
            i_1 = arg1;
            
            if (arg1 != rax_18)
            {
                while (*i_1)
                {
                    i_1 = &i_1[1];
                    
                    if (i_1 == rax_18)
                        break;
                }
            }
        }
        else if (!(arg1 & 1))
        {
            uint64_t rcx_2 = arg1 & 0xf;
            int16_t* rdx_3 = arg1;
            uint64_t r11_5 = ((arg3 - arg3) & (0x10 - rcx_2)) >> 1;
            
            if (arg2 < r11_5)
                r11_5 = arg2;
            
            void* rax_11 = &arg1[r11_5];
            
            if (arg1 != rax_11)
            {
                while (*rdx_3)
                {
                    rdx_3 = &rdx_3[1];
                    
                    if (rdx_3 == rax_11)
                        break;
                }
            }
            
            result = (rdx_3 - arg1) >> 1;
            
            if (result != r11_5)
                return result;
            
            for (i = &arg1[result]; i != &arg1[((arg2 - r11_5) & 0xfffffffffffffff0) + result]; 
                i = &i[8])
            {
                if (_mm_movemask_epi8(__pcmpeqw_xmmdq_memdq({0}, *i)))
                    break;
            }
            
            for (; i != &arg1[arg2]; i = &i[1])
            {
                if (!*i)
                    break;
            }
            
            i_1 = i;
        }
        else
        {
            void* rax_9 = &arg1[arg2];
            i_1 = arg1;
            
            if (arg1 != rax_9)
            {
                while (*i_1)
                {
                    i_1 = &i_1[1];
                    
                    if (i_1 == rax_9)
                        break;
                }
            }
        }
    }
    else if (!(arg1 & 1))
    {
        uint64_t rcx = arg1 & 0x1f;
        int16_t* rdx = arg1;
        uint64_t r11_2 = ((arg3 - arg3) & (0x20 - rcx)) >> 1;
        
        if (arg2 < r11_2)
            r11_2 = arg2;
        
        void* rax_2 = &arg1[r11_2];
        
        if (arg1 != rax_2)
        {
            while (*rdx)
            {
                rdx = &rdx[1];
                
                if (rdx == rax_2)
                    break;
            }
        }
        
        result = (rdx - arg1) >> 1;
        
        if (result != r11_2)
            return result;
        
        for (i = &arg1[result]; i != &arg1[((arg2 - r11_2) & 0xffffffffffffffe0) + result]; 
            i = &i[0x10])
        {
            uint16_t zmm1[0x10];
            zmm1[0] = {0};
            zmm1 = __vpcmpeqw_ymmqq_ymmqq_memqq(zmm1, *i);
            bool cond:0_1 = _mm256_movemask_epi8(zmm1);
            _mm256_zeroupper();
            
            if (cond:0_1)
                break;
        }
        
        for (; i != &arg1[arg2]; i = &i[1])
        {
            if (!*i)
                break;
        }
        
        i_1 = i;
    }
    else
    {
        void* rax = &arg1[arg2];
        i_1 = arg1;
        
        if (arg1 != rax)
        {
            while (*i_1)
            {
                i_1 = &i_1[1];
                
                if (i_1 == rax)
                    break;
            }
        }
    }
    return (i_1 - arg1) >> 1;
}

int64_t sub_140015878(int64_t arg1)
{
    data_140042f10 = arg1;
}

int64_t sub_140015880(int64_t arg1)
{
    int64_t rax = _query_new_handler();
    
    if (rax && rax(arg1))
        return 1;
    
    return 0;
}

int64_t _query_new_handler()
{
    sub_14001182c(0);
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t result = RORQ(__security_cookie_1 ^ data_140042f10, __security_cookie_1 & 0x3f);
    sub_140011880(0);
    return result;
}

uint64_t sub_1400158e4(int32_t arg1, int64_t arg2)
{
    int64_t* rax = __acrt_getptd_noexit();
    
    if (rax)
    {
        int32_t* rcx = *rax;
        int32_t* rax_1 = rcx;
        
        if (rcx == &rcx[0x30])
        {
        label_140015930:
            rax_1 = nullptr;
        }
        else
        {
            while (*rax_1 != arg1)
            {
                rax_1 = &rax_1[4];
                
                if (rax_1 == &rcx[0x30])
                    goto label_140015930;
            }
        }
        
        if (rax_1)
        {
            int64_t r8_2 = *(rax_1 + 8);
            
            if (r8_2)
            {
                if (r8_2 == 5)
                {
                    *(rax_1 + 8) = 0;
                    return r8_2 - 4;
                }
                
                if (r8_2 != 1)
                {
                    int64_t rbp_1 = rax[1];
                    rax[1] = arg2;
                    
                    if (rax_1[1] != 8)
                    {
                        uint64_t rcx_1 = rax_1[1];
                        *(rax_1 + 8) = 0;
                        r8_2(rcx_1);
                    }
                    else
                    {
                        void* i = &rcx[0xc];
                        
                        for (void* rdx = i + 0x90; i != rdx; i += 0x10)
                            *(i + 8) = 0;
                        
                        int32_t rdi_1 = rax[2];
                        int32_t rdx_1;
                        
                        if (*rax_1 == 0xc000008d)
                        {
                            rdx_1 = 0x82;
                            rax[2] = rdx_1;
                        }
                        else if (*rax_1 == 0xc000008e)
                        {
                            rdx_1 = 0x83;
                            rax[2] = rdx_1;
                        }
                        else if (*rax_1 == 0xc000008f)
                        {
                            rdx_1 = 0x86;
                            rax[2] = rdx_1;
                        }
                        else if (*rax_1 == 0xc0000090)
                        {
                            rdx_1 = 0x81;
                            rax[2] = rdx_1;
                        }
                        else if (*rax_1 == 0xc0000091)
                        {
                            rdx_1 = 0x84;
                            rax[2] = rdx_1;
                        }
                        else if (*rax_1 == 0xc0000092)
                        {
                            rdx_1 = 0x8a;
                            rax[2] = rdx_1;
                        }
                        else if (*rax_1 == 0xc0000093)
                        {
                            rdx_1 = 0x85;
                            rax[2] = rdx_1;
                        }
                        else if (*rax_1 == 0xc00002b4)
                        {
                            rdx_1 = 0x8e;
                            rax[2] = rdx_1;
                        }
                        else
                        {
                            rdx_1 = rdi_1;
                            
                            if (*rax_1 == 0xc00002b5)
                            {
                                rdx_1 = 0x8d;
                                rax[2] = rdx_1;
                            }
                        }
                        
                        r8_2(8, rdx_1);
                        rax[2] = rdi_1;
                    }
                    
                    rax[1] = rbp_1;
                }
                
                return 0xffffffff;
            }
        }
    }
    
    return 0;
}

uint64_t sub_140015a68()
{
    return data_140042f18;
}

int64_t sub_140015a70(int32_t arg1)
{
    data_140042f18 = arg1;
}

int64_t __acrt_has_user_matherr()
{
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t result;
    result = RORQ(__security_cookie_1 ^ data_140042f20, __security_cookie_1 & 0x3f);
    return result;
}

int64_t sub_140015a98(int64_t arg1)
{
    data_140042f20 = arg1;
}

int64_t sub_140015aa0(int64_t arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t rdx_1 = RORQ(__security_cookie_1 ^ data_140042f20, __security_cookie_1 & 0x3f);
    
    if (rdx_1)
        /* tailcall */
        return rdx_1(arg1, rdx_1);
    
    return 0;
}

int64_t __setusermatherr(int64_t arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    data_140042f20 = RORQ(arg1, 0x40 - (__security_cookie_1 & 0x3f)) ^ __security_cookie_1;
}

uint32_t parse_command_line<char>(char* arg1, int64_t* arg2, char* arg3, int64_t* arg4, int64_t* arg5)
{
    uint64_t rsi;
    uint64_t arg_18 = rsi;
    char* rbx = arg3;
    int64_t* r14 = arg2;
    char* rdi = arg1;
    *arg5 = 0;
    *arg4 = 1;
    
    if (arg2)
    {
        *arg2 = rbx;
        r14 = &r14[1];
    }
    
    int64_t rbp;
    rbp = 0;
    uint32_t i;
    
    while (true)
    {
        if (*rdi != 0x22)
        {
            *arg5 += 1;
            
            if (rbx)
            {
                i = *rdi;
                *rbx = i;
                rbx = &rbx[1];
            }
            
            rsi = *rdi;
            rdi = &rdi[1];
            i = _ismbblead(rsi);
            
            if (i)
            {
                *arg5 += 1;
                
                if (rbx)
                {
                    i = *rdi;
                    *rbx = i;
                    rbx = &rbx[1];
                }
                
                rdi = &rdi[1];
            }
            
            if (!rsi)
            {
                rdi -= 1;
                break;
            }
        }
        else
        {
            rsi = 0x22;
            rbp = !rbp;
            rdi = &rdi[1];
        }
        
        if (!rbp)
        {
            if (rsi != 0x20 && rsi != 9)
                continue;
            
            if (!rbx)
                break;
            
            rbx[-1] = 0;
            break;
        }
    }
    
    rsi = 0;
    
    while (true)
    {
        i = *rdi;
        
        if (!i)
            break;
        
        while (i == 0x20 || i == 9)
        {
            rdi = &rdi[1];
            i = *rdi;
        }
        
        if (!i)
            break;
        
        if (r14)
        {
            *r14 = rbx;
            r14 = &r14[1];
        }
        
        *arg4 += 1;
        
        while (true)
        {
            int32_t rdx = 1;
            i = 0;
            
            while (true)
            {
                arg1 = *rdi;
                
                if (arg1 != 0x5c)
                    break;
                
                rdi = &rdi[1];
                i += 1;
            }
            
            if (arg1 == 0x22)
            {
                if (!(1 & i))
                {
                    if (!rsi || rdi[1] != 0x22)
                    {
                        rdx = 0;
                        rsi = !rsi;
                    }
                    else
                        rdi = &rdi[1];
                }
                
                i u>>= 1;
            }
            
            while (i)
            {
                i -= 1;
                
                if (rbx)
                {
                    *rbx = 0x5c;
                    rbx = &rbx[1];
                }
                
                *arg5 += 1;
            }
            
            i = *rdi;
            
            if (!i)
                break;
            
            if (!rsi)
            {
                if (i == 0x20)
                    break;
                
                if (i == 9)
                    break;
            }
            
            if (rdx)
            {
                if (rbx)
                {
                    *rbx = i;
                    rbx = &rbx[1];
                    i = *rdi;
                }
                
                int32_t rax;
                rax = _ismbblead(i);
                
                if (rax)
                {
                    *arg5 += 1;
                    rdi = &rdi[1];
                    
                    if (rbx)
                    {
                        rax = *rdi;
                        *rbx = rax;
                        rbx = &rbx[1];
                    }
                }
                
                *arg5 += 1;
            }
            
            rdi = &rdi[1];
        }
        
        if (rbx)
        {
            *rbx = 0;
            rbx = &rbx[1];
        }
        
        *arg5 += 1;
    }
    
    if (r14)
        *r14 = 0;
    
    *arg4 += 1;
    return i;
}

int64_t __acrt_allocate_buffer_for_argv(int64_t arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 < 0x1fffffffffffffff && arg2 < -1 / arg3)
    {
        int64_t rcx = arg1 << 3;
        int64_t r9_1 = arg2 * arg3;
        
        if (~rcx > r9_1)
        {
            int64_t result = _calloc_base(rcx + r9_1, 1);
            _free_base(0);
            return result;
        }
    }
    
    return 0;
}

uint64_t _configure_narrow_argv(int32_t arg1)
{
    int32_t rdi = 0;
    
    if (arg1)
    {
        if (arg1 - 1 <= 1)
        {
            __acrt_initialize_multibyte();
            __acrt_GetModuleFileNameA(nullptr, &data_140042f30, 0x104);
            char* rsi_1 = data_140043078;
            data_140043058 = &data_140042f30;
            
            if (!rsi_1 || !*rsi_1)
                rsi_1 = &data_140042f30;
            
            int64_t arg_18 = 0;
            int64_t arg_20 = 0;
            parse_command_line<char>(rsi_1, nullptr, nullptr, &arg_18, &arg_20);
            int64_t r15_1 = arg_18;
            int64_t* rax_3 = __acrt_allocate_buffer_for_argv(r15_1, arg_20, 1);
            
            if (rax_3)
            {
                parse_command_line<char>(rsi_1, rax_3, &rax_3[r15_1], &arg_18, &arg_20);
                
                if (arg1 != 1)
                {
                    int64_t* arg_10 = nullptr;
                    int32_t rax_7 = j_sub_14001f6b0(rax_3, &arg_10);
                    
                    if (!rax_7)
                    {
                        int64_t* rdx_4 = arg_10;
                        int64_t rcx_7 = 0;
                        int64_t* rax_8 = rdx_4;
                        
                        if (*rdx_4)
                        {
                            do
                            {
                                rax_8 = &rax_8[1];
                                rcx_7 += 1;
                            } while (*rax_8);
                        }
                        
                        data_140043060 = rcx_7;
                        arg_10 = nullptr;
                        data_140043068 = rdx_4;
                        _free_base(0);
                        arg_10 = nullptr;
                        _free_base(rax_3);
                    }
                    else
                    {
                        _free_base(arg_10);
                        arg_10 = nullptr;
                        _free_base(rax_3);
                        rdi = rax_7;
                    }
                }
                else
                {
                    int32_t rax_6 = arg_18 - 1;
                    data_140043068 = rax_3;
                    data_140043060 = rax_6;
                    _free_base(nullptr);
                }
            }
            else
            {
                *_errno() = 0xc;
                _free_base(0);
                rdi = 0xc;
            }
        }
        else
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            rdi = 0x16;
        }
    }
    
    return rdi;
}

uint64_t common_initialize_environment_nolock<char>()
{
    int32_t rdi = 0;
    
    if (data_140043038)
        return 0;
    
    __acrt_initialize_multibyte();
    char* rax_1 = __dcrt_get_narrow_environment_from_os();
    
    if (rax_1)
    {
        char** rax_2 = sub_140015f10(rax_1);
        
        if (rax_2)
        {
            data_140043050 = rax_2;
            data_140043038 = rax_2;
        }
        else
            rdi = -1;
        
        _free_base(0);
    }
    else
        rdi = -1;
    
    _free_base(rax_1);
    return rdi;
}

char** sub_140015f10(char* arg1)
{
    char* r14 = arg1;
    char** result = nullptr;
    int64_t rcx = 0;
    char* r8 = r14;
    
    for (char i = *r14; i; i = *r8)
    {
        int64_t rax_1 = rcx + 1;
        
        if (i == 0x3d)
            rax_1 = rcx;
        
        rcx = rax_1;
        int64_t rax_2 = -1;
        
        do
            rax_2 += 1;
         while (r8[rax_2]);
        
        r8 = &r8[1 + rax_2];
    }
    
    char** result_2 = _calloc_base(rcx + 1, 8);
    char** result_1 = result_2;
    
    if (result_2)
    {
        char** result_3 = result_2;
        
        while (true)
        {
            result_2 = *r14;
            
            if (!result_2)
            {
                result = result_1;
                break;
            }
            
            int64_t rbp_1 = -1;
            
            do
                rbp_1 += 1;
             while (r14[rbp_1]);
            
            if (result_2 != 0x3d)
            {
                char* rax_3 = _calloc_base(rbp_1 + 1, 1);
                
                if (!rax_3)
                {
                    sub_140016018(result_1);
                    _free_base(0);
                    break;
                }
                
                if (strcpy_s(rax_3, rbp_1 + 1, r14))
                {
                    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                    /* no return */
                }
                
                *result_3 = rax_3;
                result_3 = &result_3[1];
                _free_base(0);
            }
            
            r14 = &r14[rbp_1 + 1];
        }
    }
    
    _free_base(0);
    return result;
}

void sub_140016018(int64_t* arg1)
{
    if (!arg1)
        return;
    
    int64_t i = *arg1;
    int64_t* rdi_1 = arg1;
    
    for (; i; i = *rdi_1)
    {
        _free_base(i);
        rdi_1 = &rdi_1[1];
    }
    
    _free_base(arg1);
}

wchar16* initialize_environment_by_cloning_nolock<char>()
{
    int64_t* rdi = data_140043040;
    
    if (rdi)
    {
        while (true)
        {
            wchar16* result = *rdi;
            
            if (!result)
                return result;
            
            int64_t var_10_1 = 0;
            int64_t var_18_1 = 0;
            int32_t rax_1 = __acrt_WideCharToMultiByte(0, 0, result, 0xffffffff, 0, 0);
            int64_t rsi_1 = rax_1;
            
            if (!rax_1)
                break;
            
            char* rax_2 = _calloc_base(rsi_1, 1);
            
            if (rax_2)
            {
                int64_t var_10_2 = 0;
                int64_t var_18_2 = 0;
                
                if (__acrt_WideCharToMultiByte(0, 0, *rdi, 0xffffffff, rax_2, rsi_1))
                {
                    j_sub_140020a70(rax_2, 0);
                    _free_base(0);
                    rdi = &rdi[1];
                    continue;
                }
            }
            
            _free_base(rax_2);
            break;
        }
    }
    
    return 0xffffffff;
}

void sub_140016130(int64_t* arg1)
{
    int64_t* rcx = *arg1;
    
    if (rcx != data_140043050)
        sub_140016018(rcx);
}

void sub_14001614c(int64_t* arg1)
{
    int64_t* rcx = *arg1;
    
    if (rcx != data_140043048)
        sub_140016018(rcx);
}

int64_t __dcrt_get_or_create_narrow_environment_nolock()
{
    int64_t result = data_140043038;
    
    if (result)
        return result;
    
    if (data_140043040 != result)
    {
        int32_t rax = common_initialize_environment_nolock<char>();
        int32_t rax_1;
        
        if (rax)
            rax_1 = initialize_environment_by_cloning_nolock<char>();
        
        if (!rax || !rax_1)
            return data_140043038;
    }
    
    return 0;
}

int64_t __dcrt_uninitialize_environments_nolock()
{
    sub_140016130(&data_140043038);
    sub_14001614c(&data_140043040);
    sub_140016018(data_140043050);
    /* tailcall */
    return sub_140016018(data_140043048);
}

int64_t _get_initial_narrow_environment()
{
    int64_t result = data_140043050;
    
    if (!result)
    {
        result = data_140043038;
        
        if (!result)
        {
            int32_t rax;
            int32_t rax_1;
            
            if (data_140043040 != result)
            {
                rax = common_initialize_environment_nolock<char>();
                
                if (rax)
                    rax_1 = initialize_environment_by_cloning_nolock<char>();
            }
            
            if (data_140043040 == result || (rax && rax_1))
                result = 0;
            else
                result = data_140043038;
        }
        
        data_140043050 = result;
    }
    
    return result;
}

uint64_t j_common_initialize_environment_nolock<char>()
{
    /* tailcall */
    return common_initialize_environment_nolock<char>();
}

void sub_140016234(int64_t* arg1, int64_t arg2)
{
    int64_t* rbx = arg1;
    int64_t rsi = 0;
    uint64_t rdi_3 = (arg2 - arg1 + 7) >> 3;
    
    if (arg1 > arg2)
        rdi_3 = 0;
    
    if (!rdi_3)
        return;
    
    do
    {
        int64_t rax = *rbx;
        
        if (rax)
            rax();
        
        rbx = &rbx[1];
        rsi += 1;
    } while (rsi != rdi_3);
}

int64_t sub_140016298(int64_t* arg1, int64_t arg2)
{
    int64_t* rbx = arg1;
    
    for (bool cond:0 = arg1 == arg2; !cond:0; cond:0 = rbx == arg2)
    {
        int64_t rax_1 = *rbx;
        
        if (rax_1)
        {
            int32_t result = rax_1();
            
            if (result)
                return result;
        }
        
        rbx = &rbx[1];
    }
    
    return 0;
}

int64_t _set_fmode(int32_t arg1)
{
    if (!((arg1 - 0x4000) & 0xffff3fff) && arg1 != 0xc000)
    {
        data_1400437e0;
        data_1400437e0 = arg1;
        return 0;
    }
    
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    return 0x16;
}

PWSTR __acrt_initialize_command_line()
{
    data_140043078 = GetCommandLineA();
    data_140043080 = GetCommandLineW();
    PWSTR result;
    result = 1;
    return result;
}

int64_t sub_140016340() __pure
{
    return &data_140043060;
}

int64_t sub_140016348() __pure
{
    return &data_140043068;
}

int64_t sub_140016350(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    _copytlocinfo_nolock(**arg3, *(*arg3[1] + 0x90));
    int16_t* rax_2 = sub_1400170a0(**arg3, *arg3[3], *arg3[4]);
    *arg3[2] = rax_2;
    
    if (!rax_2)
    {
        __acrt_release_locale_ref(**arg3);
        __acrt_free_locale(**arg3);
    }
    else
    {
        int16_t* rcx_6 = *arg3[4];
        
        if (rcx_6)
        {
            void* r8_2 = &data_140041208 - rcx_6;
            uint32_t rax_4;
            uint32_t i;
            
            do
            {
                rax_4 = *rcx_6;
                i = *(rcx_6 + r8_2);
                
                if (rax_4 != i)
                    break;
                
                rcx_6 = &rcx_6[1];
            } while (i);
            
            if (rax_4 - i)
            {
                data_140043088;
                data_140043088 = 1;
            }
        }
        
        _updatetlocinfoEx_nolock(*arg3[1] + 0x90, **arg3);
        __acrt_release_locale_ref(**arg3);
        void* rdx_5 = *arg3[1];
        
        if (!(*(rdx_5 + 0x3a8) & 2) && !(data_140041310 & 1))
        {
            _updatetlocinfoEx_nolock(&data_1400436b8, *(rdx_5 + 0x90));
            int64_t* rax_9 = data_1400436b8;
            data_140041018 = rax_9[0x1f];
            data_140040f58 = *rax_9;
            data_140041098 = rax_9[1];
        }
    }
    
    return sub_140011880(*arg4);
}

int64_t sub_14001648c(int64_t arg1, int32_t* arg2, int64_t arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    int64_t* rbx = &data_1400436b8;
    
    while (true)
    {
        int64_t* var_18_1 = rbx;
        
        if (rbx == &data_1400436c0)
            break;
        
        if (*rbx != &data_1400410a0)
            *rbx = _updatetlocinfoEx_nolock(rbx, &data_1400410a0);
        
        rbx = &rbx[1];
    }
    
    return sub_140011880(*arg4);
}

int64_t* sub_1400164fc(int64_t arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
{
    int64_t* arg_20 = arg4;
    <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(arg3);
    int64_t* result = *arg4;
    void* rcx_1 = *result;
    *(rcx_1 + 0x3a8) &= 0xffffffef;
    return result;
}

int64_t <lambda_2a444430fde8c29194d880d93eed5e8f>::operator()(int64_t* arg1)
{
    int64_t rax = _calloc_base(1, 0x158);
    **arg1 = rax;
    int64_t result = _free_base(0);
    
    if (!rax)
        return result;
    
    int64_t var_38 = *arg1;
    int64_t var_30_1 = arg1[1];
    int64_t var_28_1 = arg1[2];
    int64_t var_20_1 = arg1[3];
    int64_t var_18_1 = arg1[4];
    int32_t arg_10 = 4;
    int32_t arg_18 = 4;
    void arg_8;
    return sub_140016350(&arg_8, &arg_18, &var_38, &arg_10);
}

int16_t* sub_1400165b8(int16_t* arg1)
{
    if (arg1)
    {
        int64_t r11;
        int64_t rax_1 = wcsnlen(arg1, 0x55, r11);
        
        if (rax_1 < 0x55)
        {
            int16_t* result = _malloc_base((rax_1 << 1) + 2);
            
            if (result)
            {
                if (!wcsncpy_s(result, rax_1 + 1, arg1, rax_1 + 1))
                    return result;
                
                _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                /* no return */
            }
        }
    }
    
    return nullptr;
}

uint64_t sub_14001663c()
{
    int32_t temp0 = data_140043088;
    data_140043088 = 1;
    return temp0;
}

int64_t __acrt_uninitialize_locale()
{
    int32_t arg_10 = 4;
    int32_t arg_18 = 4;
    void arg_8;
    return sub_14001648c(&arg_8, &arg_18, &arg_8, &arg_10);
}

int16_t* sub_140016678(int16_t* arg1, int64_t arg2, void* arg3)
{
    if (wcscpy_s(arg1, arg2, arg3))
    {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        /* no return */
    }
    
    if (*(arg3 + 0x80))
    {
        int16_t* var_18_1 = arg3 + 0x80;
        sub_140016da8(arg1, arg2, 2);
    }
    
    int16_t* result = arg3 + 0x100;
    
    if (!*result)
        return result;
    
    int16_t* result_1 = result;
    return sub_140016da8(arg1, arg2, 2);
}

int64_t sub_14001671c(uint128_t* arg1, int16_t* arg2)
{
    int16_t* rbx = arg2;
    int16_t* rbp = arg1;
    sub_14000c550(arg1, 0, 0x1ca);
    
    if (*rbx)
    {
        if (*rbx != 0x2e || !rbx[1])
        {
            int32_t rsi_1 = 0;
            
            while (true)
            {
                int64_t rax_5 = wcscspn(rbx, &data_140032868);
                
                if (rax_5)
                {
                    int16_t* r14_1 = &rbx[rax_5];
                    int16_t rdi_1 = *r14_1;
                    
                    if (rsi_1)
                    {
                        int16_t* rcx_2;
                        uint64_t rdx_1;
                        
                        if (rsi_1 != 1)
                        {
                            if (rsi_1 == 2 && rax_5 < 0x10 && (!rdi_1 || rdi_1 == 0x2c))
                            {
                                rcx_2 = &rbp[0x80];
                                rdx_1 = 0x10;
                                goto label_140016843;
                            }
                        }
                        else if (rax_5 < 0x40 && rdi_1 != 0x5f)
                        {
                            rcx_2 = &rbp[0x40];
                            rdx_1 = rsi_1 + 0x3f;
                        label_140016843:
                            
                            if (wcsncpy_s(rcx_2, rdx_1, rbx, rax_5))
                                break;
                            
                            goto label_14001684c;
                        }
                    }
                    else if (rax_5 < 0x40)
                    {
                        int32_t rax_2 = wcsncpy_s(rbp, rsi_1 + 0x40, rbx, rax_5);
                        
                        if (rax_2)
                            break;
                        
                        if (rdi_1 != 0x2e)
                        {
                        label_14001684c:
                            
                            if (rdi_1 == 0x2c)
                                return 0;
                            
                            if (!rdi_1)
                                return 0;
                            
                            goto label_14001685f;
                        }
                        
                        rsi_1 = rax_2 + 1;
                        
                        if (r14_1[1] == 0x75)
                        {
                        label_14001685f:
                            rbx = &r14_1[1];
                            rsi_1 += 1;
                            continue;
                        }
                        else if (r14_1[1] == 0x55)
                            goto label_14001684c;
                    }
                }
                
                return 0xffffffff;
            }
            
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
        
        if (wcsncpy_s(&rbp[0x80], 0x10, &rbx[1], 0xf))
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
        
        rbp[0x8f] = 0;
    }
    
    return 0;
}

uint64_t _configthreadlocale(int32_t arg1)
{
    void* rax;
    int32_t rcx;
    rax = __acrt_getptd();
    int32_t r8 = *(rax + 0x3a8);
    
    if (arg1 == 0xffffffff)
        *data_140041310 = 0xffffffff;
    else if (arg1)
    {
        int32_t r8_1;
        
        if (arg1 == 1)
            r8_1 = r8 | 2;
        else
        {
            if (arg1 != 2)
            {
                *_errno() = 0x16;
                _invalid_parameter_noinfo();
                return 0xffffffff;
            }
            
            r8_1 = r8 & 0xfffffffd;
        }
        
        *(rax + 0x3a8) = r8_1;
    }
    
    return rcx - rcx + 2;
}

void _copytlocinfo_nolock(int128_t* arg1, int128_t* arg2)
{
    if (!arg2 || !arg1 || arg1 == arg2)
        return;
    
    int64_t i_1 = 2;
    int128_t* r8_1 = arg1;
    int64_t i;
    
    do
    {
        *r8_1 = *arg2;
        r8_1[1] = arg2[1];
        r8_1[2] = arg2[2];
        r8_1[3] = arg2[3];
        r8_1[4] = arg2[4];
        r8_1[5] = arg2[5];
        r8_1[6] = arg2[6];
        r8_1 = &r8_1[8];
        int128_t zmm1 = arg2[7];
        arg2 = &arg2[8];
        r8_1[-1] = zmm1;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *r8_1 = *arg2;
    r8_1[1] = arg2[1];
    r8_1[2] = arg2[2];
    r8_1[3] = arg2[3];
    r8_1[4] = arg2[4];
    r8_1[5] = arg2[5];
    arg1[1] = 0;
    sub_1400220e8(arg1);
}

int16_t* sub_1400169c4(int16_t* arg1, int16_t* arg2, int64_t arg3, int16_t* arg4, int64_t arg5, int32_t* arg6)
{
    void var_288;
    int64_t rax_1 = __security_cookie ^ &var_288;
    int16_t* result = arg2;
    
    if (!arg1)
    {
    label_140016c3d:
        __security_check_cookie(rax_1 ^ &var_288);
        return nullptr;
    }
    
    void* rax_2 = __acrt_getptd();
    int32_t var_258 = 0;
    
    if (wcsncpy_s(arg4, arg5, rax_2 + 0x2f0, 0x55))
    {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        /* no return */
    }
    
    if (*arg1 == 0x43 && !arg1[1])
    {
        if (wcscpy_s(result, arg3, &data_140032840))
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
        
        if (arg6)
            *arg6 = 0;
        
        __security_check_cookie(rax_1 ^ &var_288);
        return result;
    }
    
    int64_t rbx_1 = -1;
    int64_t r14_1 = -1;
    
    do
        r14_1 += 1;
     while (arg1[r14_1]);
    
    if (r14_1 < 0x83)
    {
        int16_t* rax_7 = rax_2 + 0x1c2;
        uint32_t rcx_4;
        uint32_t i;
        
        do
        {
            rcx_4 = *rax_7;
            i = *(rax_7 + arg1 - (rax_2 + 0x1c2));
            
            if (rcx_4 != i)
                break;
            
            rax_7 = &rax_7[1];
        } while (i);
        
        if (!(rcx_4 - i))
            goto label_140016d2a;
        
        int16_t* rax_8 = rax_2 + 0xbc;
        int64_t r8_4 = arg1 - rax_8;
        uint32_t rcx_6;
        uint32_t i_1;
        
        do
        {
            rcx_6 = *rax_8;
            i_1 = *(rax_8 + r8_4);
            
            if (rcx_6 != i_1)
                break;
            
            rax_8 = &rax_8[1];
        } while (i_1);
        
        if (!(rcx_6 - i_1))
            goto label_140016d2a;
        
        goto label_140016b21;
    }
    
label_140016b21:
    int32_t r15;
    r15 = !__acrt_can_use_vista_locale_apis();
    int16_t var_228;
    int64_t rbx_2;
    int32_t* r15_1;
    
    if (sub_14001671c(&var_228, arg1))
    {
        r15_1 = rax_2 + 0xb8;
    label_140016bb4:
        int32_t rax_16;
        
        if (r14_1 >= 0x83 || !var_228)
        {
        label_140016d5c:
            
            do
                rbx_1 += 1;
             while (arg4[rbx_1]);
            
            rax_16 = wcsncpy_s(rax_2 + 0x2f0, 0x55, arg4, rbx_1 + 1);
        label_140016c35:
            
            if (!rax_16)
                goto label_140016c3d;
        }
        else
        {
            if (!sub_1400195d8(&var_228))
                goto label_140016d5c;
            
            int16_t var_128;
            
            if (var_128)
            {
                if (!_wcsicmp(&var_128, u"utf8"))
                    goto label_140016c86;
                
                if (!_wcsicmp(&var_128, u"utf-8"))
                    goto label_140016c86;
                
                do
                    rbx_1 += 1;
                 while (arg4[rbx_1]);
                
                rax_16 = wcsncpy_s(rax_2 + 0x2f0, 0x55, arg4, rbx_1 + 1);
                goto label_140016c35;
            }
            
            int32_t rax_18;
            
            if (!sub_14001948c(arg1, 0x20001004, &var_258, 2))
            {
            label_140016c86:
                rax_18 = 0xfde9;
                var_258 = 0xfde9;
            }
            else
            {
                rax_18 = var_258;
                
                if (!rax_18)
                    goto label_140016c86;
            }
            
            rbx_2 = r14_1 + 1;
            *r15_1 = rax_18;
            
            if (!wcsncpy_s(rax_2 + 0x1c2, 0x83, arg1, rbx_2))
            {
                int32_t rax_21 = wcsncpy_s(arg4, arg5, arg1, rbx_2);
                
                if (!rax_21 && !wcsncpy_s(rax_2 + 0x2f0, rax_21 + 0x55, &var_228, rbx_2))
                    goto label_140016cf1;
            }
        }
    }
    else
    {
        int16_t* r8_5 = &var_228;
        r15_1 = rax_2 + 0xb8;
        int16_t* rcx_9 = &var_228;
        uint32_t* rdx_3 = r15_1;
        int32_t rax_11;
        
        if (!r15)
            rax_11 = sub_140022ca8(rcx_9, rdx_3, r8_5);
        else
            rax_11 = __acrt_get_qualified_locale_downlevel(rcx_9, rdx_3, r8_5);
        
        if (!rax_11)
            goto label_140016bb4;
        
        sub_140016678(rax_2 + 0x1c2, 0x83, &var_228);
        int32_t rax_12;
        
        if (arg4)
        {
            int16_t var_108[0x58];
            
            do
                rbx_1 += 1;
             while (var_108[rbx_1]);
            
            rax_12 = wcsncpy_s(arg4, arg5, &var_108, rbx_1 + 1);
        }
        
        if (!arg4 || !rax_12)
        {
            rbx_2 = r14_1 + 1;
        label_140016cf1:
            
            if (!*arg1 || r14_1 >= 0x83)
            {
                *(rax_2 + 0xbc) = 0;
            label_140016d22:
                result = arg2;
            label_140016d2a:
                
                if (arg6)
                    *arg6 = *(rax_2 + 0xb8);
                
                if (wcscpy_s(result, arg3, rax_2 + 0x1c2))
                {
                    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                    /* no return */
                }
                
                __security_check_cookie(rax_1 ^ &var_288);
                return rax_2 + 0x1c2;
            }
            
            if (!wcsncpy_s(rax_2 + 0xbc, 0x83, arg1, rbx_2))
                goto label_140016d22;
        }
    }
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    /* no return */
}

void sub_140016da8(int16_t* arg1, int64_t arg2, int32_t arg3)
{
    if (arg3 <= 0)
        return;
    
    int32_t arg_18 = arg3;
    int64_t r9;
    int64_t arg_20 = r9;
    int32_t rbx_1 = 0;
    int32_t* rdi_1 = &arg_18;
    
    do
    {
        rdi_1 = &rdi_1[2];
        
        if (wcscat_s(arg1, arg2, *rdi_1))
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
        
        rbx_1 += 1;
    } while (rbx_1 < arg_18);
}

int64_t _wsetlocale(int32_t arg1, int64_t arg2)
{
    int64_t arg_10 = arg2;
    int32_t arg_8 = arg1;
    int64_t result = 0;
    int64_t var_40 = 0;
    
    if (arg1 > 5)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0;
    }
    
    void* arg_20 = __acrt_getptd();
    __acrt_eagerly_load_locale_apis();
    sub_14002241c();
    void* rax_3 = arg_20;
    *(rax_3 + 0x3a8) |= 0x10;
    void** var_38 = &arg_20;
    int64_t* var_30 = &var_40;
    void** var_28_1 = &arg_20;
    int64_t* var_20_1 = &result;
    int32_t* var_18_1 = &arg_8;
    int64_t* var_10_1 = &arg_10;
    void arg_18;
    sub_1400164fc(&arg_18, &arg_18, &var_30, &var_38);
    return result;
}

int32_t* sub_140016eb4(void* arg1)
{
    int32_t rdi = 1;
    int32_t* result = _malloc_base(0x6a6);
    int32_t* result_1 = result;
    
    if (result)
    {
        int16_t* result_2 = &result[1];
        *result_2 = 0;
        int64_t* r15_1 = arg1 + 0x48;
        *result = 1;
        int64_t var_30_1 = *r15_1;
        void* const var_38_1 = &data_14003283c;
        sub_140016da8(result_2, 0x351, 3);
        
        for (wchar16 const (** const i)[0xb] = &data_140032738; i < &data_140032798; )
        {
            if (wcscat_s(result_2, 0x351, &data_140032838))
            {
                _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                /* no return */
            }
            
            int64_t r10_1 = r15_1[4];
            int16_t* rax_2 = *r15_1;
            void* rdx_2 = r10_1 - rax_2;
            uint32_t j;
            uint32_t r8_1;
            
            do
            {
                r8_1 = *rax_2;
                j = *(rax_2 + rdx_2);
                
                if (r8_1 != j)
                    break;
                
                rax_2 = &rax_2[1];
            } while (j);
            
            int64_t var_30_2 = r10_1;
            int32_t rax_3 = 0;
            
            if (!(r8_1 - j))
                rax_3 = rdi;
            
            rdi = rax_3;
            i = &i[3];
            r15_1 = &r15_1[4];
            void* const var_38_2 = &data_14003283c;
            *i;
            sub_140016da8(result_2, 0x351, 3);
        }
        
        if (rdi)
        {
            _free_base(result_1);
            int32_t* rcx_9 = *(arg1 + 0x38);
            
            if (rcx_9)
            {
                int32_t rax_6 = *rcx_9;
                *rcx_9 -= 1;
                
                if (rax_6 == 1)
                    _free_base(*(arg1 + 0x38));
            }
            
            int32_t* rcx_11 = *(arg1 + 0x30);
            
            if (rcx_11)
            {
                int32_t rax_8 = *rcx_11;
                *rcx_11 -= 1;
                
                if (rax_8 == 1)
                    _free_base(*(arg1 + 0x30));
            }
            
            result = *(arg1 + 0x68);
            __builtin_memset(arg1 + 0x20, 0, 0x20);
        }
        else
        {
            int32_t* rcx_3 = *(arg1 + 0x38);
            
            if (rcx_3)
            {
                int32_t rax_4 = *rcx_3;
                *rcx_3 -= 1;
                
                if (rax_4 == 1)
                    _free_base(*(arg1 + 0x38));
            }
            
            int32_t* rdx_3 = *(arg1 + 0x30);
            
            if (rdx_3)
            {
                int32_t rcx_5 = *rdx_3;
                *rdx_3 -= 1;
                
                if (rcx_5 == 1)
                    _free_base(*(arg1 + 0x30));
            }
            
            *(arg1 + 0x30) = 0;
            result = result_2;
            *(arg1 + 0x20) = 0;
            *(arg1 + 0x38) = result_1;
            *(arg1 + 0x28) = result_2;
        }
    }
    
    return result;
}

int16_t* sub_1400170a0(void* arg1, int32_t arg2, int16_t* arg3)
{
    void var_238;
    int64_t rax_1 = __security_cookie ^ &var_238;
    int16_t* rbx = arg3;
    int16_t* result;
    
    if (!arg2)
    {
        int32_t rbp_1 = 1;
        int32_t rsi_1 = 0;
        
        if (!rbx)
            result = sub_140016eb4(arg1);
        else
        {
            int16_t var_208[0x88];
            
            if (*arg3 != 0x4c || arg3[1] != 0x43 || arg3[2] != 0x5f)
            {
                void var_f8;
                result = sub_1400169c4(rbx, &var_208, 0x83, &var_f8, 0x55, nullptr);
                
                if (result)
                {
                    int32_t i = 0;
                    int64_t* r14_3 = arg1 + 0x28;
                    
                    do
                    {
                        if (i)
                        {
                            int16_t (* rax_12)[0x88] = &var_208;
                            uint32_t rcx_10;
                            uint32_t j;
                            
                            do
                            {
                                rcx_10 = *rax_12;
                                j = *(rax_12 + *r14_3 - &var_208);
                                
                                if (rcx_10 != j)
                                    break;
                                
                                rax_12 = &(*rax_12)[1];
                            } while (j);
                            
                            int64_t rax_13;
                            
                            if (rcx_10 - j)
                                rax_13 = sub_140017334(arg1, i, &var_208);
                            
                            if (!(rcx_10 - j) || rax_13)
                                rsi_1 += 1;
                            else
                                rbp_1 = 0;
                        }
                        
                        i += 1;
                        r14_3 = &r14_3[4];
                    } while (i <= 5);
                    
                    if (rbp_1 || rsi_1)
                        result = sub_140016eb4(arg1);
                    else
                        result = nullptr;
                }
            }
            else
            {
                while (true)
                {
                    int16_t* rax_4 = wcspbrk(rbx, &data_140032830);
                    
                    if (rax_4)
                    {
                        int64_t rbp_4 = (rax_4 - rbx) >> 1;
                        
                        if (rbp_4 && *rax_4 != 0x3b)
                        {
                            int32_t r12_1 = 1;
                            
                            for (int16_t** i_1 = &data_140032738; i_1 <= &data_140032798; 
                                i_1 = &i_1[3])
                            {
                                if (!wcsncmp(*i_1, rbx, rbp_4))
                                {
                                    int64_t rax_6 = -1;
                                    
                                    do
                                        rax_6 += 1;
                                     while ((*i_1)[rax_6]);
                                    
                                    if (rbp_4 == rax_6)
                                        break;
                                }
                                
                                r12_1 += 1;
                            }
                            
                            int64_t rax_7 = wcscspn(&rax_4[1], &data_140032838);
                            
                            if (rax_7 || rax_4[1] == 0x3b)
                            {
                                if (r12_1 <= 5)
                                {
                                    if (wcsncpy_s(&var_208, 0x83, &rax_4[1], rax_7))
                                    {
                                        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                                        /* no return */
                                    }
                                    
                                    if (rax_7 * 2 >= 0x106)
                                    {
                                        __report_rangecheckfailure();
                                        /* no return */
                                    }
                                    
                                    var_208[rax_7] = 0;
                                    
                                    if (sub_140017334(arg1, r12_1, &var_208))
                                        rsi_1 += 1;
                                }
                                
                                int16_t* rax_11 = &rax_4[1 + rax_7];
                                int16_t rcx_6 = *rax_11;
                                
                                if (rcx_6)
                                    rcx_6 = rax_11[1];
                                
                                rbx = &rax_11[1];
                                
                                if (!*rax_11)
                                    rbx = rax_11;
                                
                                if (!rcx_6)
                                    break;
                                
                                continue;
                            }
                        }
                    }
                    
                    result = nullptr;
                    goto label_14001725c;
                }
                
                if (!rsi_1)
                    result = nullptr;
                else
                    result = sub_140016eb4(arg1);
            }
        }
    }
    else if (!rbx)
        result = *((arg2 << 5) + arg1 + 0x28);
    else
        result = sub_140017334(arg1, arg2, arg3);
    
label_14001725c:
    __security_check_cookie(rax_1 ^ &var_238);
    return result;
}

int64_t sub_140017334(void* arg1, int32_t arg2, int16_t* arg3)
{
    void var_368;
    int64_t rax_1 = __security_cookie ^ &var_368;
    int64_t r12 = arg2;
    void* rax_2 = __acrt_getptd();
    int32_t var_328;
    int16_t var_308;
    int16_t var_1f8[0x58];
    int64_t result;
    
    if (!sub_1400169c4(arg3, &var_308, 0x83, &var_1f8, 0x55, &var_328))
        result = 0;
    else
    {
        int16_t* rcx_1 = &var_308;
        int64_t rbx_2 = r12 << 5;
        result = *(rbx_2 + arg1 + 0x28);
        uint32_t rdx_1;
        uint32_t i;
        
        do
        {
            rdx_1 = *rcx_1;
            i = *(rcx_1 + result - &var_308);
            
            if (rdx_1 != i)
                break;
            
            rcx_1 = &rcx_1[1];
        } while (i);
        
        if (rdx_1 - i)
        {
            int64_t rsi_1 = -1;
            
            do
                rsi_1 += 1;
             while ((&var_308)[rsi_1]);
            
            int32_t* rax_4 = _malloc_base((rsi_1 << 1) + 6);
            
            if (!rax_4)
                result = 0;
            else
            {
                int64_t rcx_3 = *(rbx_2 + arg1 + 0x28);
                int64_t rcx_4 = *(arg1 + (r12 << 3) + 0x128);
                int32_t rcx_5 = *(arg1 + 0xc);
                
                if (wcscpy_s(&rax_4[1], rsi_1 + 1, &var_308))
                {
                    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                    /* no return */
                }
                
                bool cond:0_1 = var_308 != 0x43;
                *(rbx_2 + arg1 + 0x28) = &rax_4[1];
                int16_t var_306;
                int16_t* rax_7;
                
                if (cond:0_1 || var_306)
                    rax_7 = sub_1400165b8(&var_1f8);
                else
                    rax_7 = nullptr;
                
                *(arg1 + (r12 << 3) + 0x128) = rax_7;
                
                if (r12 == 2)
                {
                    int32_t r8_1 = 0;
                    *(arg1 + 0xc) = var_328;
                    int64_t i_1 = 0;
                    int64_t rcx_8 = *(rax_2 + 0x2e8);
                    
                    do
                    {
                        if (*(arg1 + 0xc) == *(rax_2 + (i_1 << 3) + 0x2c8))
                        {
                            if (r8_1)
                            {
                                int64_t rdx_4 = r8_1;
                                *(rax_2 + 0x2c8) = *(rax_2 + (rdx_4 << 3) + 0x2c8);
                                *(rax_2 + (rdx_4 << 3) + 0x2c8) = rcx_8;
                            }
                            
                            break;
                        }
                        
                        int64_t rax_10 = *(rax_2 + (i_1 << 3) + 0x2c8);
                        r8_1 += 1;
                        *(rax_2 + (i_1 << 3) + 0x2c8) = rcx_8;
                        i_1 += 1;
                        rcx_8 = rax_10;
                    } while (i_1 < 5);
                    
                    if (r8_1 == 5)
                    {
                        int32_t* var_340;
                        var_340 = *(arg1 + 0xc);
                        int32_t i_2 = 0;
                        void var_148;
                        
                        if (__acrt_GetStringTypeA(nullptr, r8_1 - 4, &data_1400326a0, r8_1 + 0x7a, 
                            &var_148, var_340, 1))
                        {
                            int16_t* rax_14 = &var_148;
                            
                            do
                            {
                                i_2 += 1;
                                *rax_14 &= 0x1ff;
                                rax_14 = &rax_14[1];
                            } while (i_2 < 0x7f);
                            
                            i_2 = !memcmp(&var_148, data_140041030, 0xfe);
                        }
                        
                        *(rax_2 + 0x2cc) = i_2;
                        *(rax_2 + 0x2c8) = *(arg1 + 0xc);
                    }
                    
                    *(arg1 + 0x1c) = *(rax_2 + 0x2cc);
                }
                else if (r12 == 1)
                    *(arg1 + 0x14) = var_328;
                else if (r12 == 5)
                    *(arg1 + 0x18) = var_328;
                
                if (!(&data_140032730)[r12 * 3](arg1, &data_140032730))
                {
                    if (rcx_3 != &data_140041208)
                    {
                        int32_t* rax_26 = *(rbx_2 + arg1 + 0x38);
                        int32_t rcx_15 = *rax_26;
                        *rax_26 -= 1;
                        
                        if (rcx_15 == 1)
                        {
                            _free_base(*(rbx_2 + arg1 + 0x38));
                            _free_base(*(rbx_2 + arg1 + 0x30));
                            _free_base(*(arg1 + (r12 << 3) + 0x128));
                            *(rbx_2 + arg1 + 0x28) = 0;
                            *(arg1 + (r12 << 3) + 0x128) = 0;
                        }
                    }
                    
                    *rax_4 = 1;
                    result = *(rbx_2 + arg1 + 0x28);
                    *(rbx_2 + arg1 + 0x38) = rax_4;
                }
                else
                {
                    *(rbx_2 + arg1 + 0x28) = rcx_3;
                    _free_base(*(arg1 + (r12 << 3) + 0x128));
                    *(arg1 + (r12 << 3) + 0x128) = rcx_4;
                    _free_base(rax_4);
                    *(arg1 + 0xc) = rcx_5;
                    result = 0;
                }
            }
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_368);
    return result;
}

uint64_t sub_140017688()
{
    return data_14004308c;
}

uint64_t _set_new_mode(int32_t arg1)
{
    if (arg1 <= 1)
    {
        int32_t temp0_1 = data_14004308c;
        data_14004308c = arg1;
        return temp0_1;
    }
    
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    return 0xffffffff;
}

int64_t sub_1400176bc() __pure
{
    return &data_140043090;
}

uint64_t __crt_seh_guarded_call<class <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d>& __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1>,int32_t>::operator()<class <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d>& __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    int32_t rax = <lambda_22ebabd17bc4fa466a2aca6d8deb888d>::operator()(arg3);
    sub_140011880(*arg4);
    return rax;
}

uint64_t sub_140017700(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    int32_t rax = sub_1400178ec(arg3);
    sub_140011880(*arg4);
    return rax;
}

int64_t <lambda_22ebabd17bc4fa466a2aca6d8deb888d>::operator()(int64_t* arg1)
{
    void* rbx = **arg1;
    
    if (rbx)
    {
        uint64_t __security_cookie_4 = __security_cookie;
        char rcx_1 = __security_cookie_4 & 0x3f;
        int64_t rbx_3 = RORQ(*(rbx + 0x10) ^ __security_cookie_4, rcx_1);
        int64_t rsi_3 = RORQ(__security_cookie_4 ^ *rbx, rcx_1);
        int64_t r9_3 = RORQ(*(rbx + 8) ^ __security_cookie_4, rcx_1);
        
        if (r9_3 != rbx_3)
        {
        label_140017867:
            *r9_3 = RORQ(*arg1[1], 0x40 - (__security_cookie_4 & 0x3f)) ^ __security_cookie_4;
            uint64_t __security_cookie_1 = __security_cookie;
            ***arg1 = RORQ(rsi_3, 0x40 - (__security_cookie_1 & 0x3f)) ^ __security_cookie_1;
            uint64_t __security_cookie_2 = __security_cookie;
            *(**arg1 + 8) =
                RORQ(r9_3 + 8, 0x40 - (__security_cookie_2 & 0x3f)) ^ __security_cookie_2;
            uint64_t __security_cookie_3 = __security_cookie;
            *(**arg1 + 0x10) =
                RORQ(rbx_3, 0x40 - (__security_cookie_3 & 0x3f)) ^ __security_cookie_3;
            return 0;
        }
        
        int64_t rbx_5 = (rbx_3 - rsi_3) >> 3;
        int64_t rdi_1 = rbx_5;
        
        if (rbx_5 > 0x200)
            rdi_1 = 0x200;
        
        int64_t rdi_2 = rdi_1 + rbx_5;
        
        if (rdi_1 == -(rbx_5))
            rdi_2 = 0x20;
        
        int64_t r14_1;
        
        if (rdi_2 >= rbx_5)
        {
            r14_1 = _recalloc_base(rsi_3, rdi_2, 8);
            _free_base(0);
        }
        
        if (rdi_2 >= rbx_5 && r14_1)
        {
        label_140017806:
            __security_cookie_4 = __security_cookie;
            r9_3 = r14_1 + (rbx_5 << 3);
            rbx_3 = r14_1 + (rdi_2 << 3);
            rsi_3 = r14_1;
            uint64_t rcx_7 = (rbx_3 - r9_3 + 7) >> 3;
            
            if (r9_3 > rbx_3)
                rcx_7 = 0;
            
            if (rcx_7)
            {
                int64_t rcx_8;
                int64_t rdi_4;
                rdi_4 = __memfill_u64(r9_3, __security_cookie_4, rcx_7);
                __security_cookie_4 = __security_cookie;
            }
            
            goto label_140017867;
        }
        
        rdi_2 = rbx_5 + 4;
        r14_1 = _recalloc_base(rsi_3, rdi_2, 8);
        _free_base(0);
        
        if (r14_1)
            goto label_140017806;
    }
    
    return 0xffffffff;
}

int64_t sub_1400178ec(int64_t* arg1)
{
    void* rbx = **arg1;
    
    if (!rbx)
        return 0xffffffff;
    
    uint64_t __security_cookie_1 = __security_cookie;
    char rcx_1 = __security_cookie_1 & 0x3f;
    int64_t rdi_3 = RORQ(__security_cookie_1 ^ *rbx, rcx_1);
    int64_t rbx_3 = RORQ(*(rbx + 8) ^ __security_cookie_1, rcx_1);
    
    if (rdi_3 - 1 <= -3)
    {
        uint64_t __security_cookie_2 = __security_cookie_1;
        char rcx_3 = __security_cookie_1 & 0x3f;
        int64_t r15_1 = rdi_3;
        int64_t rbp_1 = rbx_3;
        
        while (true)
        {
            rbx_3 -= 8;
            
            if (rbx_3 < rdi_3)
                break;
            
            int64_t rax_3 = *rbx_3;
            
            if (rax_3 != __security_cookie_2)
            {
                *rbx_3 = __security_cookie_2;
                RORQ(rax_3 ^ __security_cookie_1, rcx_3)();
                __security_cookie_1 = __security_cookie;
                rcx_3 = __security_cookie_1 & 0x3f;
                int64_t* rdx_1 = **arg1;
                int64_t r9_3 = RORQ(*rdx_1 ^ __security_cookie_1, rcx_3);
                int64_t rax_9 = RORQ(rdx_1[1] ^ __security_cookie_1, rcx_3);
                
                if (r9_3 == r15_1 && rax_9 == rbp_1)
                    continue;
                
                r15_1 = r9_3;
                rdi_3 = r9_3;
                rbp_1 = rax_9;
                rbx_3 = rax_9;
            }
        }
        
        if (rdi_3 != -1)
        {
            _free_base(rdi_3);
            __security_cookie_1 = __security_cookie;
        }
        
        ***arg1 = __security_cookie_1;
        *(**arg1 + 8) = __security_cookie_1;
        *(**arg1 + 0x10) = __security_cookie_1;
    }
    
    return 0;
}

int64_t sub_140017a04(int64_t arg1)
{
    /* tailcall */
    return _register_onexit_function(&data_140043098, arg1);
}

uint64_t _execute_onexit_table(int64_t arg1)
{
    int64_t arg_8 = arg1;
    int64_t* var_18 = &arg_8;
    int32_t arg_18 = 2;
    int32_t arg_20 = 2;
    void arg_10;
    return sub_140017700(&arg_10, &arg_20, &var_18, &arg_18);
}

int64_t _initialize_onexit_table(int64_t* arg1)
{
    if (!arg1)
        return 0xffffffff;
    
    if (*arg1 == arg1[2])
    {
        uint64_t __security_cookie_1 = __security_cookie;
        *arg1 = __security_cookie_1;
        arg1[1] = __security_cookie_1;
        arg1[2] = __security_cookie_1;
    }
    
    return 0;
}

uint64_t _register_onexit_function(int64_t arg1, int64_t arg2)
{
    int64_t arg_10 = arg2;
    int64_t arg_8 = arg1;
    int64_t* var_20 = &arg_8;
    int64_t* var_18 = &arg_10;
    int32_t arg_20 = 2;
    int32_t var_28 = 2;
    void arg_18;
    return __crt_seh_guarded_call<class <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d>& __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1>,int32_t>::operator()<class <lambda_638799b9deba96c50f710eeac98168cd>,class <lambda_22ebabd17bc4fa466a2aca6d8deb888d>& __ptr64,class <lambda_a6f7d7db0129f75315ebf26d50c089f1> >(
        &arg_18, &var_28, &var_20, &arg_20);
}

int64_t sub_140017ac0()
{
    data_1400436b8 = &data_1400410a0;
    wchar16 const (** rax)[0x21];
    rax = 1;
    return &*(data_140041000 + 1);
}

int64_t initialize_c()
{
    _initialize_onexit_table(&data_140043098);
    _initialize_onexit_table(&data_1400430b0);
    int64_t result;
    result = 1;
    return result;
}

int64_t uninitialize_environment()
{
    __dcrt_uninitialize_environments_nolock();
    int64_t result;
    result = 1;
    return result;
}

int64_t initialize_pointers()
{
    uint64_t __security_cookie_1 = __security_cookie;
    sub_14000e850(__security_cookie_1);
    sub_140015878(__security_cookie_1);
    sub_14001e590(__security_cookie_1);
    sub_140015a98(__security_cookie_1);
    sub_14000ec0c(__security_cookie_1);
    int64_t result;
    result = 1;
    return result;
}

int64_t uninitialize_vcruntime()
{
    /* tailcall */
    return __vcrt_uninitialize(0);
}

int64_t uninitialize_allocated_memory()
{
    int32_t* rcx = data_1400437d0;
    int32_t result = *rcx;
    *rcx -= 1;
    
    if (result == 1)
    {
        int64_t rcx_1 = data_1400437d0;
        
        if (rcx_1 != &data_1400416c0)
        {
            _free_base(rcx_1);
            data_1400437d0 = &data_1400416c0;
        }
    }
    
    result = 1;
    return result;
}

int64_t uninitialize_allocated_io_buffers()
{
    _free_base(data_1400436a8);
    int64_t rcx_1 = data_1400436b0;
    data_1400436a8 = 0;
    _free_base(rcx_1);
    int64_t rcx_2 = data_140043068;
    data_1400436b0 = 0;
    _free_base(rcx_2);
    int64_t rcx_3 = data_140043070;
    data_140043068 = 0;
    _free_base(rcx_3);
    data_140043070 = 0;
    int64_t result;
    result = 1;
    return result;
}

int64_t sub_140017bec()
{
    /* tailcall */
    return sub_140023a1c(&data_140032880, &data_140032980);
}

int64_t __acrt_uninitialize(char arg1)
{
    if (!arg1)
        /* tailcall */
        return sub_140023a9c(&data_140032880, &data_140032980);
    
    if (data_140042cb8)
        _flushall();
    
    int64_t result;
    result = 1;
    return result;
}

uint64_t strcpy_s(char* arg1, int64_t arg2, int64_t arg3)
{
    int32_t rbx = 0;
    
    if (!arg1 || !arg2)
        goto label_140017c51;
    
    if (arg3)
    {
        char* r9_1 = arg1;
        int64_t i;
        
        do
        {
            char rax = *(arg3 - arg1 + r9_1);
            *r9_1 = rax;
            r9_1 = &r9_1[1];
            
            if (!rax)
                break;
            
            i = arg2;
            arg2 -= 1;
        } while (i != 1);
        
        if (!arg2)
        {
            *arg1 = 0;
            rbx = 0x22;
            *_errno() = rbx;
            _invalid_parameter_noinfo();
        }
    }
    else
    {
        *arg1 = 0;
    label_140017c51:
        rbx = 0x16;
        *_errno() = rbx;
        _invalid_parameter_noinfo();
    }
    
    return rbx;
}

uint64_t wcsncmp(int16_t* arg1, int16_t* arg2, int64_t arg3)
{
    if (!arg3)
        return 0;
    
    while (true)
    {
        int64_t temp0_1 = arg3;
        arg3 -= 1;
        int16_t rax_2;
        
        if (temp0_1 != 1)
            rax_2 = *arg1;
        
        if (temp0_1 == 1 || !rax_2 || rax_2 != *arg2)
            return *arg1 - *arg2;
        
        arg1 = &arg1[1];
        arg2 = &arg2[1];
    }
}

uint64_t __crt_strtox::parse_integer<unsigned long,class __crt_strtox::c_string_character_source<char> >(int128_t* arg1, int64_t* arg2, int32_t arg3, char arg4)
{
    int64_t r15;
    r15 = arg4;
    int32_t r14 = arg3;
    
    if (*arg2 && (!r14 || arg3 - 2 <= 0x22))
    {
        void* var_38;
        _LocaleUpdate::_LocaleUpdate(&var_38, arg1);
        char* r12_1 = *arg2;
        int32_t rsi_1 = 0;
        int64_t* var_30;
        int64_t* rdx_1 = var_30;
        int64_t rdi;
        rdi = *r12_1;
        char* r8 = &r12_1[1];
        uint64_t rcx_2;
        
        while (true)
        {
            *arg2 = r8;
            int32_t rax_3;
            
            if (rdx_1[1] <= 1)
                rax_3 = *(*rdx_1 + (rdi << 1)) & 8;
            else
            {
                rax_3 = _isctype_l(rdi, 8, &var_30);
                r8 = *arg2;
                rdx_1 = var_30;
            }
            
            if (!rax_3)
                break;
            
            char* rax_6 = *arg2;
            rdi = *rax_6;
            r8 = &rax_6[1];
        }
        
        uint32_t rax_7 = r15;
        uint32_t r15_2 = rax_7 | 2;
        
        if (rdi != 0x2d)
            r15_2 = rax_7;
        
        if (rdi == 0x2d || rdi == 0x2b)
        {
            rdi = *r8;
            r8 = &r8[1];
            *arg2 = r8;
        }
        
        int32_t rdx_2 = 0x10;
        
        if (!r14 || r14 == 0x10)
        {
            int32_t rax_12;
            
            if (rdi - 0x30 <= 9)
                rax_12 = rdi - 0x30;
            else if (rdi - 0x61 <= 0x19)
                rax_12 = rdi - 0x57;
            else if (rdi - 0x41 > 0x19)
                rax_12 = -1;
            else
                rax_12 = rdi - 0x37;
            
            if (!rax_12)
            {
                rcx_2 = *r8;
                *arg2 = &r8[1];
                
                if (!((rcx_2 - 0x58) & 0xdf))
                {
                    rdi = r8[1];
                    r8 = &r8[2];
                    *arg2 = r8;
                    
                    if (r14)
                        rdx_2 = r14;
                    
                    r14 = rdx_2;
                }
                else
                {
                    int32_t rax_19 = 8;
                    
                    if (r14)
                        rax_19 = r14;
                    
                    *arg2 = r8;
                    r14 = rax_19;
                    
                    if (rcx_2 && *r8 != rcx_2)
                    {
                        *_errno() = 0x16;
                        _invalid_parameter_noinfo();
                        r8 = *arg2;
                    }
                }
            }
            else
            {
                int32_t rax_17 = 0xa;
                
                if (r14)
                    rax_17 = r14;
                
                r14 = rax_17;
            }
        }
        
        uint32_t temp0_1 = COMBINE(0, 0xffffffff) / r14;
        
        while (true)
        {
            int32_t rax_23;
            
            if (rdi - 0x30 <= 9)
                rax_23 = rdi - 0x30;
            else if (rdi - 0x61 <= 0x19)
                rax_23 = rdi - 0x57;
            else if (rdi - 0x41 > 0x19)
                rax_23 = -1;
            else
                rax_23 = rdi - 0x37;
            
            if (rax_23 == 0xffffffff)
                break;
            
            if (rax_23 >= r14)
                break;
            
            int32_t rcx_4;
            
            if (rsi_1 < temp0_1 || (rsi_1 == temp0_1 && rax_23 <= COMBINE(0, 0xffffffff) % r14))
            {
                rcx_4 = 8;
                rsi_1 = rsi_1 * r14 + rax_23;
            }
            else
                rcx_4 = 0xc;
            
            char* rax_28 = *arg2;
            r15_2 |= rcx_4;
            rdi = *rax_28;
            r8 = &rax_28[1];
            *arg2 = r8;
        }
        
        *arg2 = r8 - 1;
        
        if (rdi && *(r8 - 1) != rdi)
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
        }
        
        char var_20;
        
        if (r15_2 & 8)
        {
            if (r15_2 & 4)
            {
            label_140017f52:
                *_errno() = 0x22;
                
                if (r15_2 & 1)
                {
                    if (!(r15_2 & 2))
                    {
                        if (var_20)
                        {
                            void* rcx_10 = var_38;
                            *(rcx_10 + 0x3a8) &= 0xfffffffd;
                        }
                        
                        int64_t* rdx_5 = arg2[1];
                        
                        if (rdx_5)
                            *rdx_5 = *arg2;
                        
                        return 0x7fffffff;
                    }
                    
                    if (var_20)
                    {
                        void* rcx_8 = var_38;
                        *(rcx_8 + 0x3a8) &= 0xfffffffd;
                    }
                    
                    int64_t* rdx_4 = arg2[1];
                    
                    if (rdx_4)
                        *rdx_4 = *arg2;
                    
                    return 0x80000000;
                }
                
                rsi_1 = -1;
            }
            else
            {
                if (r15_2 & 1)
                {
                    if (!(r15_2 & 2))
                    {
                        if (rsi_1 > 0x7fffffff)
                            goto label_140017f52;
                        
                        goto label_140017f8a;
                    }
                    
                    if (rsi_1 > 0x80000000)
                        goto label_140017f52;
                }
                
            label_140017f8a:
                
                if (r15_2 & 2)
                    rsi_1 = -(rsi_1);
            }
            
            if (var_20)
            {
                void* rcx_6 = var_38;
                *(rcx_6 + 0x3a8) &= 0xfffffffd;
            }
            
            int64_t* rax_33 = arg2[1];
            
            if (rax_33)
                *rax_33 = *arg2;
            
            return rsi_1;
        }
        
        *arg2 = r12_1;
        
        if (var_20)
        {
            void* rax_30 = var_38;
            *(rax_30 + 0x3a8) &= 0xfffffffd;
        }
    }
    else
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    int64_t* rcx_5 = arg2[1];
    
    if (rcx_5)
        *rcx_5 = *arg2;
    
    return 0;
}

uint64_t __crt_strtox::parse_integer<unsigned long,class __crt_strtox::c_string_character_source<wchar_t> >(int128_t* arg1, int64_t* arg2, int32_t arg3, char arg4)
{
    int64_t rsi;
    rsi = arg4;
    int32_t r14 = arg3;
    
    if (*arg2 && (!r14 || arg3 - 2 <= 0x22))
    {
        void* var_48;
        _LocaleUpdate::_LocaleUpdate(&var_48, arg1);
        int16_t* r15_1 = *arg2;
        int32_t rbp_1 = 0;
        wchar16 rbx_1 = *r15_1;
        void* rax_3 = &r15_1[1];
        
        while (true)
        {
            *arg2 = rax_3;
            
            if (!iswctype(rbx_1, 8))
                break;
            
            int16_t* rax_4 = *arg2;
            rbx_1 = *rax_4;
            rax_3 = &rax_4[1];
        }
        
        uint32_t rax_6 = rsi;
        uint32_t rsi_2 = rax_6 | 2;
        
        if (rbx_1 != 0x2d)
            rsi_2 = rax_6;
        
        if (!(0xfffd & (rbx_1 - 0x2b)))
        {
            wchar16* rax_8 = *arg2;
            rbx_1 = *rax_8;
            *arg2 = &rax_8[1];
        }
        
        int32_t rcx_2 = 0xff10;
        
        if (!(r14 & 0xffffffef))
        {
            int32_t rax_11;
            
            if (rbx_1 < 0x30)
            {
            label_1400182ab:
                
                if (rbx_1 - 0x41 <= 0x19 || rbx_1 - 0x61 <= 0x19)
                {
                    uint32_t rcx_3 = rbx_1;
                    uint32_t rax_19 = rcx_3 - 0x20;
                    
                    if (rbx_1 - 0x61 > 0x19)
                        rax_19 = rcx_3;
                    
                    rax_11 = rax_19 - 0x37;
                }
                else
                    rax_11 = -1;
            }
            else
            {
                if (rbx_1 < 0x3a)
                    rax_11 = rbx_1 - 0x30;
                else if (rbx_1 >= 0xff10)
                {
                    if (rbx_1 >= 0xff1a)
                    {
                        rax_11 = -1;
                        goto label_1400182a0;
                    }
                    
                label_14001819c:
                    rax_11 = rbx_1 - rcx_2;
                }
                else
                {
                    if (rbx_1 < 0x660)
                        goto label_1400182ab;
                    
                    if (rbx_1 >= 0x66a)
                    {
                        if (rbx_1 < 0x6f0)
                            goto label_1400182ab;
                        
                        if (rbx_1 >= 0x6fa)
                        {
                            if (rbx_1 < 0x966)
                                goto label_1400182ab;
                            
                            if (rbx_1 >= 0x970)
                            {
                                if (rbx_1 < 0x9e6)
                                    goto label_1400182ab;
                                
                                if (rbx_1 >= 0x9f0)
                                {
                                    rcx_2 = 0xa66;
                                    
                                    if (rbx_1 < 0xa66)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xa70)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xae6;
                                    
                                    if (rbx_1 < 0xae6)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xaf0)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xb66;
                                    
                                    if (rbx_1 < 0xb66)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xb70)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xc66;
                                    
                                    if (rbx_1 < 0xc66)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xc70)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xce6;
                                    
                                    if (rbx_1 < 0xce6)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xcf0)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xd66;
                                    
                                    if (rbx_1 < 0xd66)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xd70)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xe50;
                                    
                                    if (rbx_1 < 0xe50)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xe5a)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xed0;
                                    
                                    if (rbx_1 < 0xed0)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xeda)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0xf20;
                                    
                                    if (rbx_1 < 0xf20)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0xf2a)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0x1040;
                                    
                                    if (rbx_1 < 0x1040)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0x104a)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0x17e0;
                                    
                                    if (rbx_1 < 0x17e0)
                                        goto label_1400182ab;
                                    
                                    if (rbx_1 < 0x17ea)
                                        goto label_14001819c;
                                    
                                    rcx_2 = 0x1810;
                                    
                                    if (rbx_1 - 0x1810 > 9)
                                        goto label_1400182ab;
                                    
                                    goto label_14001819c;
                                }
                                
                                rax_11 = rbx_1 - 0x9e6;
                            }
                            else
                                rax_11 = rbx_1 - 0x966;
                        }
                        else
                            rax_11 = rbx_1 - 0x6f0;
                    }
                    else
                        rax_11 = rbx_1 - 0x660;
                }
                
            label_1400182a0:
                
                if (rax_11 == 0xffffffff)
                    goto label_1400182ab;
            }
            
            int32_t rax_20;
            
            if (!rax_11)
            {
                int16_t* rax_21 = *arg2;
                int16_t rdx_2 = *rax_21;
                *arg2 = &rax_21[1];
                
                if (!(0xffdf & (rdx_2 - 0x58)))
                {
                    rbx_1 = rax_21[1];
                    *arg2 = &rax_21[2];
                    rax_20 = 0x10;
                    goto label_140018341;
                }
                
                int32_t rax_23 = 8;
                
                if (r14)
                    rax_23 = r14;
                
                *arg2 = rax_21;
                r14 = rax_23;
                
                if (rdx_2 && *rax_21 != rdx_2)
                {
                    *_errno() = 0x16;
                    _invalid_parameter_noinfo();
                }
            }
            else
            {
                rax_20 = 0xa;
            label_140018341:
                
                if (r14)
                    rax_20 = r14;
                
                r14 = rax_20;
            }
        }
        
        uint32_t temp0_1 = COMBINE(0, 0xffffffff) / r14;
        
        while (true)
        {
            int32_t rdx_5;
            
            if (rbx_1 < 0x30)
            {
            label_140018519:
                
                if (rbx_1 - 0x41 <= 0x19 || rbx_1 - 0x61 <= 0x19)
                {
                    uint32_t rcx_6 = rbx_1;
                    uint32_t rdx_10 = rcx_6 - 0x20;
                    
                    if (rbx_1 - 0x61 > 0x19)
                        rdx_10 = rcx_6;
                    
                    rdx_5 = rdx_10 - 0x37;
                }
                else
                    rdx_5 = -1;
            }
            else
            {
                if (rbx_1 < 0x3a)
                    rdx_5 = rbx_1 - 0x30;
                else if (rbx_1 < 0xff10)
                {
                    if (rbx_1 < 0x660)
                        goto label_140018519;
                    
                    if (rbx_1 < 0x66a)
                    {
                        rdx_5 = rbx_1 - 0x660;
                        goto label_140018511;
                    }
                    
                    int32_t rax_27 = 0x6f0;
                    
                    if (rbx_1 < 0x6f0)
                        goto label_140018519;
                    
                    if (rbx_1 >= 0x6fa)
                    {
                        rax_27 = 0x966;
                        
                        if (rbx_1 < 0x966)
                            goto label_140018519;
                        
                        if (rbx_1 < 0x970)
                            goto label_1400183bf;
                        
                        rax_27 = 0x9e6;
                        
                        if (rbx_1 < 0x9e6)
                            goto label_140018519;
                        
                        if (rbx_1 < 0x9f0)
                            goto label_1400183bf;
                        
                        rax_27 = 0xa66;
                        
                        if (rbx_1 < 0xa66)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xa70)
                            goto label_1400183bf;
                        
                        rax_27 = 0xae6;
                        
                        if (rbx_1 < 0xae6)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xaf0)
                            goto label_1400183bf;
                        
                        rax_27 = 0xb66;
                        
                        if (rbx_1 < 0xb66)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xb70)
                            goto label_1400183bf;
                        
                        rax_27 = 0xc66;
                        
                        if (rbx_1 < 0xc66)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xc70)
                            goto label_1400183bf;
                        
                        rax_27 = 0xce6;
                        
                        if (rbx_1 < 0xce6)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xcf0)
                            goto label_1400183bf;
                        
                        rax_27 = 0xd66;
                        
                        if (rbx_1 < 0xd66)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xd70)
                            goto label_1400183bf;
                        
                        rax_27 = 0xe50;
                        
                        if (rbx_1 < 0xe50)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xe5a)
                            goto label_1400183bf;
                        
                        rax_27 = 0xed0;
                        
                        if (rbx_1 < 0xed0)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xeda)
                            goto label_1400183bf;
                        
                        rax_27 = 0xf20;
                        
                        if (rbx_1 < 0xf20)
                            goto label_140018519;
                        
                        if (rbx_1 < 0xf2a)
                            goto label_1400183bf;
                        
                        rax_27 = 0x1040;
                        
                        if (rbx_1 < 0x1040)
                            goto label_140018519;
                        
                        if (rbx_1 < 0x104a)
                            goto label_1400183bf;
                        
                        rax_27 = 0x17e0;
                        
                        if (rbx_1 < 0x17e0)
                            goto label_140018519;
                        
                        if (rbx_1 < 0x17ea)
                            goto label_1400183bf;
                        
                        if (rbx_1 - 0x1810 > 9)
                            goto label_140018519;
                        
                        rdx_5 = rbx_1 - 0x1810;
                    }
                    else
                    {
                    label_1400183bf:
                        rdx_5 = rbx_1 - rax_27;
                    }
                }
                else if (rbx_1 >= 0xff1a)
                    rdx_5 = -1;
                else
                    rdx_5 = rbx_1 - 0xff10;
                
            label_140018511:
                
                if (rdx_5 == 0xffffffff)
                    goto label_140018519;
            }
            
            if (rdx_5 == 0xffffffff)
                break;
            
            if (rdx_5 >= r14)
                break;
            
            int32_t rcx_7;
            
            if (rbp_1 < temp0_1 || (rbp_1 == temp0_1 && rdx_5 <= COMBINE(0, 0xffffffff) % r14))
            {
                rcx_7 = 8;
                rbp_1 = rbp_1 * r14 + rdx_5;
            }
            else
                rcx_7 = 0xc;
            
            int16_t* rax_32 = *arg2;
            rbx_1 = *rax_32;
            *arg2 = &rax_32[1];
            rsi_2 |= rcx_7;
        }
        
        int16_t* rax_35 = *arg2 - 2;
        *arg2 = rax_35;
        
        if (rbx_1 && *rax_35 != rbx_1)
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
        }
        
        char var_30;
        
        if (rsi_2 & 8)
        {
            if (rsi_2 & 4)
            {
            label_140018607:
                *_errno() = 0x22;
                
                if (rsi_2 & 1)
                {
                    if (!(rsi_2 & 2))
                    {
                        if (var_30)
                        {
                            void* rcx_13 = var_48;
                            *(rcx_13 + 0x3a8) &= 0xfffffffd;
                        }
                        
                        int64_t* rdx_13 = arg2[1];
                        
                        if (rdx_13)
                            *rdx_13 = *arg2;
                        
                        return 0x7fffffff;
                    }
                    
                    if (var_30)
                    {
                        void* rcx_11 = var_48;
                        *(rcx_11 + 0x3a8) &= 0xfffffffd;
                    }
                    
                    int64_t* rdx_12 = arg2[1];
                    
                    if (rdx_12)
                        *rdx_12 = *arg2;
                    
                    return 0x80000000;
                }
                
                rbp_1 = -1;
            }
            else
            {
                if (rsi_2 & 1)
                {
                    if (!(rsi_2 & 2))
                    {
                        if (rbp_1 > 0x7fffffff)
                            goto label_140018607;
                        
                        goto label_140018641;
                    }
                    
                    if (rbp_1 > 0x80000000)
                        goto label_140018607;
                }
                
            label_140018641:
                
                if (rsi_2 & 2)
                    rbp_1 = -(rbp_1);
            }
            
            if (var_30)
            {
                void* rcx_9 = var_48;
                *(rcx_9 + 0x3a8) &= 0xfffffffd;
            }
            
            int64_t* rdx_11 = arg2[1];
            
            if (rdx_11)
                *rdx_11 = *arg2;
            
            return rbp_1;
        }
        
        *arg2 = r15_1;
        
        if (var_30)
        {
            void* rax_37 = var_48;
            *(rax_37 + 0x3a8) &= 0xfffffffd;
        }
    }
    else
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    int64_t* rcx_8 = arg2[1];
    
    if (rcx_8)
        *rcx_8 = *arg2;
    
    return 0;
}

uint64_t sub_1400186b4(int64_t arg1)
{
    int64_t var_10 = 0;
    int64_t var_18 = arg1;
    return __crt_strtox::parse_integer<unsigned long,class __crt_strtox::c_string_character_source<wchar_t> >(
        nullptr, &var_18, 0xa, 1);
}

int64_t strncmp(char* arg1, int64_t arg2, int64_t arg3)
{
    char* rdx = arg2 - arg1;
    
    if (!arg3)
        return 0;
    
    if (arg1 & 7)
        goto label_140018700;
    
    while (true)
    {
        if (((rdx + arg1) & 0xfff) <= 0xff8)
        {
            int64_t rax_4 = *arg1;
            
            if (rax_4 == *(rdx + arg1))
            {
                arg1 = &arg1[8];
                int64_t temp2_1 = arg3;
                arg3 -= 8;
                
                if (temp2_1 <= 8)
                    return 0;
                
                if (-0x7f7f7f7f7f7f7f80 & ~rax_4 & (-0x101010101010101 + rax_4))
                    return 0;
                
                continue;
            }
        }
        
    label_140018700:
        uint64_t rax_1 = *arg1;
        char temp0_1 = *(rdx + arg1);
        
        if (rax_1 != temp0_1)
            return (rax_1 - rax_1) | 1;
        
        arg1 = &arg1[1];
        int64_t temp1_1 = arg3;
        arg3 -= 1;
        
        if (temp1_1 == 1)
            return 0;
        
        if (!rax_1)
            return 0;
        
        if (arg1 & 7)
            break;
    }
}

void _free_base(int64_t arg1)
{
    if (arg1 && !HeapFree(data_1400437e8, HEAP_NONE, arg1))
    {
        BOOL* rax_1 = _errno();
        *rax_1 = __acrt_errno_from_os_error(GetLastError());
    }
}

int64_t _malloc_base(uint64_t arg1)
{
    uint64_t dwBytes = arg1;
    
    if (arg1 <= -0x20)
    {
        if (!arg1)
            dwBytes = 1;
        
        int32_t i;
        
        do
        {
            int64_t result = HeapAlloc(data_1400437e8, HEAP_NONE, dwBytes);
            
            if (result)
                return result;
            
            if (!sub_140017688())
                break;
            
            i = sub_140015880(dwBytes);
        } while (i);
    }
    
    *_errno() = 0xc;
    return 0;
}

int64_t sub_140018810(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    int32_t* rax_1 = *(**arg3 + 0x88);
    *rax_1 += 1;
    return sub_140011880(*arg4);
}

int64_t sub_140018850(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    replace_current_thread_locale_nolock(**arg3, nullptr);
    return sub_140011880(*arg4);
}

int64_t sub_140018890(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    replace_current_thread_locale_nolock(**arg3, **arg3[1]);
    return sub_140011880(*arg4);
}

int64_t sub_1400188d8(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    int32_t* rcx_2 = *(**arg3 + 0x88);
    
    if (rcx_2)
    {
        int32_t rax_1 = *rcx_2;
        *rcx_2 -= 1;
        
        if (rax_1 == 1 && rcx_2 != &data_1400416c0)
            _free_base(rcx_2);
    }
    
    return sub_140011880(*arg4);
}

int64_t construct_ptd_array(void** arg1)
{
    void** var_30 = arg1;
    int64_t* var_20 = &var_30;
    int32_t arg_18 = 5;
    int32_t arg_20 = 5;
    int64_t* var_18 = &var_30;
    int64_t* var_28;
    int64_t* var_10 = &var_28;
    int32_t var_38 = 4;
    int32_t var_34 = 4;
    var_28 = &data_1400436b8;
    arg1[5] = 1;
    *var_30 = &data_1400325c0;
    var_30[0x75] = 1;
    var_30[0x11] = &data_1400416c0;
    *(var_30 + 0xbc) = 0x43;
    *(var_30 + 0x1c2) = 0x43;
    var_30[0x74] = 0;
    void arg_10;
    sub_140018810(&arg_10, &arg_20, &var_20, &arg_18);
    return sub_140018890(&arg_10, &var_34, &var_18, &var_38);
}

void destroy_fls(int64_t* arg1)
{
    if (arg1)
    {
        destroy_ptd_array(arg1);
        _free_base(arg1);
    }
}

int64_t destroy_ptd_array(int64_t* arg1)
{
    int64_t* var_20 = arg1;
    int64_t* var_18 = &var_20;
    int32_t arg_18 = 5;
    int32_t arg_20 = 5;
    int64_t* var_10 = &var_20;
    int32_t var_28 = 4;
    int32_t var_24 = 4;
    int64_t rax = *arg1;
    
    if (rax != &data_1400325c0)
    {
        _free_base(rax);
        arg1 = var_20;
    }
    
    _free_base(arg1[0xe]);
    _free_base(var_20[0xb]);
    _free_base(var_20[0xc]);
    _free_base(var_20[0xd]);
    _free_base(var_20[9]);
    _free_base(var_20[0xa]);
    _free_base(var_20[0xf]);
    _free_base(var_20[0x10]);
    _free_base(var_20[0x78]);
    void arg_10;
    sub_1400188d8(&arg_10, &arg_20, &var_18, &arg_18);
    return sub_140018850(&arg_10, &var_24, &var_10, &var_28);
}

void replace_current_thread_locale_nolock(void* arg1, void* arg2)
{
    void* rcx = *(arg1 + 0x90);
    
    if (rcx)
    {
        __acrt_release_locale_ref(rcx);
        void* rcx_1 = *(arg1 + 0x90);
        
        if (rcx_1 != data_1400436b8 && rcx_1 != &data_1400410a0 && !*(rcx_1 + 0x10))
            __acrt_free_locale(rcx_1);
    }
    
    *(arg1 + 0x90) = arg2;
    
    if (arg2)
        sub_1400220e8(arg2);
}

void* __acrt_getptd()
{
    enum WIN32_ERROR dwErrCode = GetLastError();
    uint32_t rcx = data_140041040;
    
    if (rcx == 0xffffffff)
        goto label_140018bcd;
    
    void** rax = sub_1400193f0(rcx);
    void** rdi_1 = rax;
    void** rsi;
    
    if (!rax)
    {
        rcx = data_140041040;
    label_140018bcd:
        
        if (!sub_140019438(rcx, -1))
        {
            rdi_1 = nullptr;
            rsi = nullptr;
        }
        else
        {
            void** rax_2 = _calloc_base(1, 0x3c8);
            uint32_t rcx_1 = data_140041040;
            rdi_1 = rax_2;
            void** rcx_2;
            
            if (rax_2)
            {
                if (!sub_140019438(rcx_1, rdi_1))
                {
                    sub_140019438(data_140041040, 0);
                    rcx_2 = rdi_1;
                    goto label_140018bfc;
                }
                
                construct_ptd_array(rdi_1);
                _free_base(0);
                rsi = rdi_1;
            }
            else
            {
                sub_140019438(rcx_1, 0);
                rcx_2 = nullptr;
            label_140018bfc:
                _free_base(rcx_2);
                rdi_1 = nullptr;
                rsi = nullptr;
            }
        }
    }
    else if (rax != -1)
        rsi = rdi_1;
    else
    {
        rdi_1 = nullptr;
        rsi = nullptr;
    }
    
    int64_t rax_4 = SetLastError(dwErrCode);
    void* result = (rax_4 - rax_4) & rsi;
    
    if (result)
        return result;
    
    abort();
    /* no return */
}

void** __acrt_getptd_head()
{
    uint32_t rcx = data_140041040;
    
    if (rcx == 0xffffffff)
        goto label_140018c8c;
    
    void** result_1 = sub_1400193f0(rcx);
    void** result = result_1;
    
    if (!result_1)
    {
        rcx = data_140041040;
    label_140018c8c:
        
        if (sub_140019438(rcx, -1))
        {
            void** result_2 = _calloc_base(1, 0x3c8);
            uint32_t rcx_1 = data_140041040;
            result = result_2;
            
            if (result_2)
            {
                if (sub_140019438(rcx_1, result))
                {
                    construct_ptd_array(result);
                    _free_base(0);
                label_140018cef:
                    
                    if (result)
                        return result;
                }
                else
                {
                    sub_140019438(data_140041040, 0);
                    _free_base(result);
                }
            }
            else
            {
                sub_140019438(rcx_1, 0);
                _free_base(nullptr);
            }
        }
    }
    else if (result_1 != -1)
        goto label_140018cef;
    
    abort();
    /* no return */
}

void* __acrt_getptd_noexit()
{
    enum WIN32_ERROR dwErrCode = GetLastError();
    uint32_t rcx = data_140041040;
    
    if (rcx == 0xffffffff)
        goto label_140018d49;
    
    void** rax = sub_1400193f0(rcx);
    void** rdi_1 = rax;
    void** rsi;
    
    if (!rax)
    {
        rcx = data_140041040;
    label_140018d49:
        
        if (!sub_140019438(rcx, -1))
        {
            rdi_1 = nullptr;
            rsi = nullptr;
        }
        else
        {
            void** rax_2 = _calloc_base(1, 0x3c8);
            uint32_t rcx_1 = data_140041040;
            rdi_1 = rax_2;
            void** rcx_2;
            
            if (rax_2)
            {
                if (!sub_140019438(rcx_1, rdi_1))
                {
                    sub_140019438(data_140041040, 0);
                    rcx_2 = rdi_1;
                    goto label_140018d78;
                }
                
                construct_ptd_array(rdi_1);
                _free_base(0);
                rsi = rdi_1;
            }
            else
            {
                sub_140019438(rcx_1, 0);
                rcx_2 = nullptr;
            label_140018d78:
                _free_base(rcx_2);
                rdi_1 = nullptr;
                rsi = nullptr;
            }
        }
    }
    else if (rax != -1)
        rsi = rdi_1;
    else
    {
        rdi_1 = nullptr;
        rsi = nullptr;
    }
    
    int64_t rax_4 = SetLastError(dwErrCode);
    return (rax_4 - rax_4) & rsi;
}

void* __acrt_initialize_ptd()
{
    void* result = sub_140019360(destroy_fls);
    data_140041040 = result;
    
    if (result != 0xffffffff)
    {
        if (__acrt_getptd_noexit())
            result = 1;
        else
        {
            sub_140018e0c();
            result = 0;
        }
    }
    else
        result = 0;
    
    return result;
}

int64_t sub_140018e0c()
{
    uint32_t rcx = data_140041040;
    
    if (rcx != 0xffffffff)
    {
        sub_1400193a8(rcx);
        data_140041040 = 0xffffffff;
    }
    
    int64_t result;
    result = 1;
    return result;
}

uint64_t __acrt_get_process_end_policy()
{
    int32_t rbx = 0;
    int32_t arg_8 = 0;
    TEB* gsbase;
    
    if (gsbase->ProcessEnvironmentBlock->ProcessParameters->Flags >= 0)
        sub_140019160(&arg_8);
    
    if (gsbase->ProcessEnvironmentBlock->ProcessParameters->Flags < 0 || arg_8 != 1)
        rbx = 1;
    
    return rbx;
}

int64_t _calloc_base(int64_t arg1, int64_t arg2)
{
    if (!arg1 || -0x20 / arg1 >= arg2)
    {
        uint64_t dwBytes = arg1 * arg2;
        
        if (!dwBytes)
            dwBytes = 1;
        
        int32_t i;
        
        do
        {
            int64_t result = HeapAlloc(data_1400437e8, HEAP_ZERO_MEMORY, dwBytes);
            
            if (result)
                return result;
            
            if (!sub_140017688())
                break;
            
            i = sub_140015880(dwBytes);
        } while (i);
    }
    
    *_errno() = 0xc;
    return 0;
}

int64_t sub_140018ee4(int64_t arg1)
{
    uint64_t __security_cookie_1 = __security_cookie;
    /* tailcall */
    return RORQ(__security_cookie_1 ^ data_140043280, __security_cookie_1 & 0x3f)(arg1, 0, 0, arg1);
}

uint64_t sub_140018f0c(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    uint64_t __security_cookie_1 = __security_cookie;
    data_140043280 = RORQ(**arg3, 0x40 - (__security_cookie_1 & 0x3f)) ^ __security_cookie_1;
    BOOL rax_3 = EnumSystemLocalesW(sub_140018ee4, 1);
    data_140043280 = __security_cookie;
    sub_140011880(*arg4);
    return rax_3;
}

int64_t sub_140018f88(int32_t arg1, PSTR arg2, int32_t* arg3, int64_t arg4)
{
    uint64_t r15 = arg1;
    int32_t* rbp = arg3;
    uint64_t __security_cookie_2 = __security_cookie;
    int64_t rcx;
    rcx = __security_cookie_2 & 0x3f;
    int64_t rdx_2 = RORQ(__security_cookie_2 ^ *((r15 << 3) + &data_140043170), rcx);
    
    if (rdx_2 != -1)
    {
        if (rdx_2)
            return rdx_2;
        
        HMODULE rbx_1;
        
        if (arg3 == arg4)
        {
        label_1400190d3:
            rbx_1 = nullptr;
        }
        else
        {
            while (true)
            {
                uint64_t rsi_1 = *rbp;
                rbx_1 = *((rsi_1 << 3) + &data_1400430d0);
                
                if (!rbx_1)
                {
                    PWSTR lpLibFileName = (&data_140032980)[rsi_1];
                    HMODULE rax_3 =
                        LoadLibraryExW(lpLibFileName, nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
                    rbx_1 = rax_3;
                    
                    if (!rax_3)
                    {
                        enum WIN32_ERROR rax_4 = GetLastError();
                        
                        if (rax_4 != ERROR_INVALID_PARAMETER)
                            rbx_1 = nullptr;
                        else if (!wcsncmp(lpLibFileName, u"api-ms-", rax_4 - 0x50))
                            rbx_1 = nullptr;
                        else if (!wcsncmp(lpLibFileName, u"ext-ms-", rax_4 - 0x50))
                            rbx_1 = nullptr;
                        else
                            rbx_1 = LoadLibraryExW(lpLibFileName, nullptr, 0);
                    }
                    
                    if (rbx_1)
                    {
                        int64_t temp0_2 = *((rsi_1 << 3) + &data_1400430d0);
                        *((rsi_1 << 3) + &data_1400430d0) = rbx_1;
                        
                        if (temp0_2)
                            FreeLibrary(rbx_1);
                        
                        goto label_1400190ba;
                    }
                    
                    *((rsi_1 << 3) + &data_1400430d0);
                    *((rsi_1 << 3) + &data_1400430d0) = -1;
                }
                else if (rbx_1 != -1)
                {
                label_1400190ba:
                    
                    if (rbx_1)
                    {
                        __security_cookie_2 = __security_cookie;
                        break;
                    }
                }
                
                rbp = &rbp[1];
                
                if (rbp == arg4)
                {
                    __security_cookie_2 = __security_cookie;
                    goto label_1400190d3;
                }
            }
        }
        
        if (rbx_1)
        {
            int64_t rax_2 = GetProcAddress(rbx_1, arg2);
            
            if (rax_2)
            {
                uint64_t __security_cookie_1 = __security_cookie;
                *((r15 << 3) + &data_140043170);
                *((r15 << 3) + &data_140043170) =
                    RORQ(rax_2, 0x40 - (__security_cookie_1 & 0x3f)) ^ __security_cookie_1;
                return rax_2;
            }
            
            __security_cookie_2 = __security_cookie;
        }
        
        *((r15 << 3) + &data_140043170);
        *((r15 << 3) + &data_140043170) =
            RORQ(-1, 0x40 - (__security_cookie_2 & 0x3f)) ^ __security_cookie_2;
    }
    
    return 0;
}

int64_t sub_140019160(int64_t arg1)
{
    int64_t rax = sub_140018f88(0x1c, "AppPolicyGetProcessTerminationMethod", &data_1400330dc, 
        "AppPolicyGetProcessTerminationMethod");
    
    if (!rax)
        return 0xc0000225;
    
    /* tailcall */
    return rax(-6, arg1);
}

int64_t sub_1400191b0()
{
    int64_t rax = sub_140018f88(0, "AreFileApisANSI", &data_140032f28, &data_140032f2c);
    
    if (!rax)
        return 1;
    
    /* tailcall */
    return rax();
}

int64_t sub_1400191ec(int64_t arg1, uint32_t arg2, wchar16* arg3, int32_t arg4, wchar16* arg5, int32_t arg6, int64_t arg7, int64_t arg8, int64_t arg9)
{
    int64_t rax = sub_140018f88(1, "CompareStringEx", &data_140032f40, "CompareStringEx");
    
    if (!rax)
        return CompareStringW(sub_14001977c(arg1, 0), arg2, arg3, arg4, arg5, arg6);
    
    return rax(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

uint64_t sub_1400192c8(int64_t arg1, int32_t arg2, int64_t arg3, int64_t arg4)
{
    int64_t arg_8 = arg1;
    int64_t rax = sub_140018f88(2, "EnumSystemLocalesEx", &data_140032f58, "EnumSystemLocalesEx");
    
    if (rax)
        return rax(arg_8, arg2, arg3, arg4);
    
    int64_t* var_18 = &arg_8;
    int32_t var_24 = 4;
    int32_t var_20 = 4;
    void var_28;
    return sub_140018f0c(&var_28, &var_20, &var_18, &var_24);
}

int64_t sub_140019360(int64_t arg1)
{
    int64_t rax = sub_140018f88(3, "FlsAlloc", &data_140032f78, "FlsAlloc");
    
    if (!rax)
        /* tailcall */
        return TlsAlloc();
    
    /* tailcall */
    return rax(arg1);
}

int64_t sub_1400193a8(uint32_t arg1)
{
    int64_t rax = sub_140018f88(4, "FlsFree", &data_140032f90, "FlsFree");
    
    if (!rax)
        /* tailcall */
        return TlsFree(arg1);
    
    /* tailcall */
    return rax(arg1);
}

int64_t sub_1400193f0(uint32_t arg1)
{
    int64_t rax = sub_140018f88(5, "FlsGetValue", &data_140032fa0, "FlsGetValue");
    
    if (!rax)
        /* tailcall */
        return TlsGetValue(arg1);
    
    /* tailcall */
    return rax(arg1);
}

int64_t sub_140019438(uint32_t arg1, int64_t arg2)
{
    int64_t rax = sub_140018f88(6, "FlsSetValue", &data_140032fb8, "FlsSetValue");
    
    if (!rax)
        return TlsSetValue(arg1, arg2);
    
    return rax(arg1, arg2);
}

int64_t sub_14001948c(int64_t arg1, uint32_t arg2, wchar16* arg3, int32_t arg4)
{
    int64_t rax = sub_140018f88(0xb, "GetLocaleInfoEx", &data_140032fe8, "GetLocaleInfoEx");
    
    if (!rax)
        return GetLocaleInfoW(sub_14001977c(arg1, 0), arg2, arg3, arg4);
    
    return rax(arg1, arg2, arg3, arg4);
}

uint64_t sub_140019510(int16_t* arg1, int32_t arg2)
{
    int64_t rax =
        sub_140018f88(0xf, "GetUserDefaultLocaleName", &data_140033018, "GetUserDefaultLocaleName");
    
    if (!rax)
        return sub_140019630(GetUserDefaultLCID(), arg1, arg2, 0);
    
    return rax(arg1, arg2);
}

int64_t sub_140019574(CRITICAL_SECTION* arg1, uint32_t arg2, int32_t arg3)
{
    int64_t rax = sub_140018f88(0x12, "InitializeCriticalSectionEx", &data_140033040, 
        "InitializeCriticalSectionEx");
    
    if (!rax)
        return InitializeCriticalSectionAndSpinCount(arg1, arg2);
    
    return rax(arg1, arg2, arg3);
}

int64_t sub_1400195d8(int64_t arg1)
{
    int64_t rax = sub_140018f88(0x13, "IsValidLocaleName", &data_140033068, "IsValidLocaleName");
    
    if (!rax)
        /* tailcall */
        return IsValidLocale(sub_14001977c(arg1, 0), LCID_INSTALLED);
    
    /* tailcall */
    return rax(arg1);
}

uint64_t sub_140019630(int32_t arg1, int16_t* arg2, int32_t arg3, int32_t arg4)
{
    int64_t rax = sub_140018f88(0x15, "LCIDToLocaleName", &data_1400330a0, "LCIDToLocaleName");
    
    if (!rax)
        return sub_140023bc0(arg1, arg2, arg3);
    
    return rax(arg1, arg2, arg3, arg4);
}

int64_t sub_1400196a0(int64_t arg1, uint32_t arg2, wchar16* arg3, int32_t arg4, PWSTR arg5, int32_t arg6, int64_t arg7, int64_t arg8, int64_t arg9)
{
    int64_t rax = sub_140018f88(0x14, "LCMapStringEx", &data_140033088, "LCMapStringEx");
    
    if (!rax)
        return LCMapStringW(sub_14001977c(arg1, 0), arg2, arg3, arg4, arg5, arg6);
    
    return rax(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

uint64_t sub_14001977c(int64_t arg1, int32_t arg2)
{
    int64_t rax = sub_140018f88(0x16, "LocaleNameToLCID", &data_1400330c0, "LocaleNameToLCID");
    
    if (!rax)
        return __acrt_DownlevelLocaleNameToLCID(arg1);
    
    return rax(arg1, arg2);
}

int64_t __acrt_can_use_vista_locale_apis()
{
    int64_t result;
    result = sub_140018f88(1, "CompareStringEx", &data_140032f40, "CompareStringEx");
    return result;
}

int64_t __acrt_eagerly_load_locale_apis()
{
    sub_140018f88(0, "AreFileApisANSI", &data_140032f28, &data_140032f2c);
    sub_140018f88(1, "CompareStringEx", &data_140032f40, "CompareStringEx");
    sub_140018f88(2, "EnumSystemLocalesEx", &data_140032f58, "EnumSystemLocalesEx");
    sub_140018f88(8, "GetDateFormatEx", &data_140032fd0, "GetDateFormatEx");
    sub_140018f88(0xb, "GetLocaleInfoEx", &data_140032fe8, "GetLocaleInfoEx");
    sub_140018f88(0xe, "GetTimeFormatEx", &data_140033000, "GetTimeFormatEx");
    sub_140018f88(0xf, "GetUserDefaultLocaleName", &data_140033018, "GetUserDefaultLocaleName");
    sub_140018f88(0x13, "IsValidLocaleName", &data_140033068, "IsValidLocaleName");
    sub_140018f88(0x14, "LCMapStringEx", &data_140033088, "LCMapStringEx");
    sub_140018f88(0x15, "LCIDToLocaleName", &data_1400330a0, "LCIDToLocaleName");
    /* tailcall */
    return sub_140018f88(0x16, "LocaleNameToLCID", &data_1400330c0, "LocaleNameToLCID");
}

uint64_t __acrt_initialize_winapi_thunks(int64_t arg1)
{
    int64_t rcx_3;
    int64_t rdi;
    rdi = __memfill_u64(&data_140043170, __security_cookie, ~(arg1 - arg1) & 0x22);
    uint64_t result;
    result = 1;
    return result;
}

void* __acrt_uninitialize_winapi_thunks(char arg1)
{
    if (!arg1)
    {
        for (int64_t* i = &data_1400430d0; i != &data_140043170; i = &i[1])
        {
            HMODULE hLibModule = *i;
            
            if (hLibModule)
            {
                if (hLibModule != -1)
                    FreeLibrary(hLibModule);
                
                *i = 0;
            }
        }
    }
    
    void* result;
    result = 1;
    return result;
}

uint64_t _fcloseall()
{
    int32_t var_18 = 0;
    sub_14001182c(8);
    int32_t rbx = 3;
    
    while (true)
    {
        int32_t var_14_1 = rbx;
        
        if (rbx == data_140042cb0)
            break;
        
        int64_t rdi_1 = rbx;
        void* rcx_1 = *(data_140042cb8 + (rdi_1 << 3));
        
        if (rcx_1)
        {
            if (*(rcx_1 + 0x14) >> 0xd & 1
                    && fclose(*(data_140042cb8 + (rdi_1 << 3))) != 0xffffffff)
                var_18 += 1;
            
            DeleteCriticalSection(*(data_140042cb8 + (rdi_1 << 3)) + 0x30);
            _free_base(*(data_140042cb8 + (rdi_1 << 3)));
            *(data_140042cb8 + (rdi_1 << 3)) = 0;
        }
        
        rbx += 1;
    }
    
    sub_140011880(8);
    return var_18;
}

uint8_t __acrt_stdio_free_buffer_nolock(void* arg1)
{
    uint8_t result = *(arg1 + 0x14) >> 0xd;
    
    if (result & 1)
    {
        result = *(arg1 + 0x14) >> 6;
        
        if (result & 1)
        {
            _free_base(*(arg1 + 8));
            *(arg1 + 0x14) &= 0xfffffebf;
            result = 0;
            __builtin_memset(arg1, 0, 0x14);
        }
    }
    
    return result;
}

BYTE* initialize_inherited_file_handles_nolock()
{
    STARTUPINFOW startupInfo;
    BYTE* lpReserved2 = GetStartupInfoW(&startupInfo);
    
    if (startupInfo.cbReserved2)
    {
        lpReserved2 = startupInfo.lpReserved2;
        
        if (lpReserved2)
        {
            char* rsi_1 = &lpReserved2[4];
            uint64_t i_1 = 0x2000;
            int64_t* rbx_2 = &rsi_1[*lpReserved2];
            
            if (*lpReserved2 < 0x2000)
                i_1 = *lpReserved2;
            
            lpReserved2 = __acrt_lowio_ensure_fh_exists(i_1);
            
            if (i_1 > data_140043690)
                i_1 = data_140043690;
            
            if (i_1)
            {
                int64_t rbp_1 = 0;
                uint64_t i;
                
                do
                {
                    if (*rbx_2 != -1 && *rbx_2 != -2 && *rsi_1 & 1)
                    {
                        if (!(*rsi_1 & 8))
                            lpReserved2 = GetFileType(*rbx_2);
                        
                        if (*rsi_1 & 8 || lpReserved2)
                        {
                            int64_t rcx_5 = (&data_140043290)[rbp_1 >> 6];
                            uint64_t rdx_1 = (rbp_1 & 0x3f) * 9;
                            *(rcx_5 + (rdx_1 << 3) + 0x28) = *rbx_2;
                            lpReserved2 = *rsi_1;
                            *(rcx_5 + (rdx_1 << 3) + 0x38) = lpReserved2;
                        }
                    }
                    
                    rbp_1 += 1;
                    rsi_1 = &rsi_1[1];
                    rbx_2 = &rbx_2[1];
                    i = i_1;
                    i_1 -= 1;
                } while (i != 1);
            }
        }
    }
    
    return lpReserved2;
}

void* const initialize_stdio_handles_nolock()
{
    int32_t i = 0;
    int64_t* r14 = nullptr;
    void* const result;
    
    do
    {
        int64_t i_1 = i;
        uint64_t rbx_1 = (i_1 & 0x3f) * 9;
        int64_t rdi_1 = (&data_140043290)[i_1 >> 6];
        result = *(rdi_1 + (rbx_1 << 3) + 0x28) + 2;
        
        if (result <= 1)
        {
            *(rdi_1 + (rbx_1 << 3) + 0x38) = 0x81;
            enum STD_HANDLE nStdHandle;
            
            if (!i)
                nStdHandle = STD_INPUT_HANDLE;
            else if (i == 1)
                nStdHandle = STD_OUTPUT_HANDLE;
            else
                nStdHandle = STD_ERROR_HANDLE;
            
            HANDLE hFile = GetStdHandle(nStdHandle);
            
            if (hFile + 1 <= 1)
                result = nullptr;
            else
                result = GetFileType(hFile);
            
            if (!result)
            {
                *(rdi_1 + (rbx_1 << 3) + 0x38) |= 0x40;
                *(rdi_1 + (rbx_1 << 3) + 0x28) = -2;
                result = data_140042cb8;
                
                if (result)
                {
                    result = *(r14 + result);
                    *(result + 0x18) = 0xfffffffe;
                }
            }
            else
            {
                uint32_t rcx_5 = result;
                *(rdi_1 + (rbx_1 << 3) + 0x28) = hFile;
                
                if (rcx_5 == 2)
                    *(rdi_1 + (rbx_1 << 3) + 0x38) |= 0x40;
                else if (rcx_5 == 3)
                    *(rdi_1 + (rbx_1 << 3) + 0x38) |= 8;
            }
        }
        else
            *(rdi_1 + (rbx_1 << 3) + 0x38) |= 0x80;
        
        i += 1;
        r14 = &r14[1];
    } while (i != 3);
    
    return result;
}

int64_t __acrt_initialize_lowio()
{
    sub_14001182c(7);
    char rbx = 0;
    
    if (!__acrt_lowio_ensure_fh_exists(0))
    {
        initialize_inherited_file_handles_nolock();
        initialize_stdio_handles_nolock();
        rbx = 1;
    }
    
    sub_140011880(7);
    int64_t result;
    result = rbx;
    return result;
}

int64_t __acrt_uninitialize_lowio()
{
    for (int64_t i = 0; i < 0x400; i += 8)
    {
        CRITICAL_SECTION* rcx_1 = *(i + &data_140043290);
        
        if (rcx_1)
        {
            __acrt_lowio_destroy_handle_array(rcx_1);
            *(i + &data_140043290) = 0;
        }
    }
    
    int64_t result;
    result = 1;
    return result;
}

uint64_t strtol(int64_t arg1, int64_t* arg2, int32_t arg3)
{
    int64_t var_18 = arg1;
    int64_t* var_10 = arg2;
    
    if (arg2)
        *arg2 = arg1;
    
    return __crt_strtox::parse_integer<unsigned long,class __crt_strtox::c_string_character_source<char> >(
        nullptr, &var_18, arg3, 1);
}

uint64_t _mbtowc_l(int16_t* arg1, char* arg2, uint64_t arg3, int128_t* arg4)
{
    if (!arg2 || !arg3)
    {
        data_140043698 = 0;
        return 0;
    }
    
    if (!*arg2)
    {
        if (arg1)
            *arg1 = 0;
        
        return 0;
    }
    
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg4);
    void* var_20;
    void* rax_1 = var_20;
    int32_t rcx_2;
    
    if (*(rax_1 + 0xc) == 0xfde9)
    {
        rcx_2 = __crt_mbstring::__mbrtowc_utf8(arg1, arg2, arg3, &data_140043698);
        
        if (rcx_2 < 0)
            rcx_2 = -1;
    }
    else if (*(rax_1 + 0x138))
    {
        if (!_isleadbyte_l(*arg2, &var_20))
        {
            int32_t rax_9;
            rax_9 = arg1;
            int32_t var_30_2 = rax_9;
            int16_t* var_38_2 = arg1;
            
            if (__acrt_MultiByteToWideChar(*(var_20 + 0xc), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
                    arg2, 1))
                rcx_2 = 1;
            else
            {
                rcx_2 = -1;
                *_errno() = 0x2a;
            }
        }
        else
        {
            void* rcx_4 = var_20;
            uint64_t r9 = *(rcx_4 + 8);
            
            if (r9 > 1 && arg3 >= r9)
            {
                int32_t rax_6;
                rax_6 = arg1;
                int32_t var_30_1 = rax_6;
                int16_t* var_38_1 = arg1;
                int32_t rax_7 = __acrt_MultiByteToWideChar(*(rcx_4 + 0xc), 
                    MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, r9);
                rcx_4 = var_20;
                
                if (rax_7 || (arg3 >= *(rcx_4 + 8) && arg2[1]))
                    rcx_2 = *(rcx_4 + 8);
                else
                {
                    rcx_2 = -1;
                    *_errno() = 0x2a;
                }
            }
            else if (arg3 < *(rcx_4 + 8) || !arg2[1])
            {
                rcx_2 = -1;
                *_errno() = 0x2a;
            }
            else
                rcx_2 = *(rcx_4 + 8);
        }
    }
    else
    {
        if (arg1)
            *arg1 = *arg2;
        
        rcx_2 = 1;
    }
    
    char var_10;
    
    if (var_10)
    {
        void* rax_4 = var_28;
        *(rax_4 + 0x3a8) &= 0xfffffffd;
    }
    
    return rcx_2;
}

int64_t mbtowc(int16_t* arg1, char* arg2, uint64_t arg3)
{
    /* tailcall */
    return _mbtowc_l(arg1, arg2, arg3, nullptr);
}

uint64_t _wctomb_s_l(int32_t* arg1, char* arg2, void* arg3, wchar16 arg4, int128_t* arg5)
{
    wchar16 arg_20 = arg4;
    
    if (!arg2 && arg3)
    {
        if (arg1)
            *arg1 &= arg2;
        
        return 0;
    }
    
    if (arg1)
        *arg1 = 0xffffffff;
    
    int32_t rbx_1;
    
    if (arg3 <= 0x7fffffff)
    {
        void* var_38;
        _LocaleUpdate::_LocaleUpdate(&var_38, arg5);
        void* var_30;
        int32_t rcx_1 = *(var_30 + 0xc);
        int64_t arg_10;
        
        if (rcx_1 == 0xfde9)
        {
            uint32_t rdx_1 = arg_20;
            arg_10 = 0;
            int32_t rax_3 = __crt_mbstring::__c32rtomb_utf8(arg2, rdx_1, &arg_10);
            
            if (arg1)
                *arg1 = rax_3;
            
            if (rax_3 <= 4)
                rbx_1 = 0;
            else
                rbx_1 = *_errno();
        }
        else if (*(var_30 + 0x138))
        {
            arg_10 = 0;
            int64_t* var_40_1 = &arg_10;
            int64_t var_48_1 = 0;
            int32_t rax_7 = __acrt_WideCharToMultiByte(rcx_1, 0, &arg_20, 1, arg2, arg3);
            
            if (!rax_7)
            {
                if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
                {
                    if (arg2 && arg3)
                        sub_14000c550(arg2, 0, arg3);
                    
                    goto label_14001a078;
                }
                
                rbx_1 = 0x2a;
                *_errno() = 0x2a;
            }
            else if (arg_10)
            {
                rbx_1 = 0x2a;
                *_errno() = 0x2a;
            }
            else
            {
                if (arg1)
                    *arg1 = rax_7;
                
                rbx_1 = 0;
            }
        }
        else
        {
            wchar16 rax_5 = arg_20;
            
            if (rax_5 <= 0xff)
            {
                if (!arg2)
                    goto label_140019ffe;
                
                if (!arg3)
                {
                label_14001a078:
                    rbx_1 = 0x22;
                    *_errno() = 0x22;
                    _invalid_parameter_noinfo();
                }
                else
                {
                    *arg2 = rax_5;
                label_140019ffe:
                    
                    if (!arg1)
                        rbx_1 = 0;
                    else
                    {
                        *arg1 = 1;
                        rbx_1 = 0;
                    }
                }
            }
            else
            {
                if (arg2 && arg3)
                    sub_14000c550(arg2, 0, arg3);
                
                rbx_1 = 0x2a;
                *_errno() = 0x2a;
            }
        }
        char var_20;
        
        if (var_20)
        {
            void* rcx_4 = var_38;
            *(rcx_4 + 0x3a8) &= 0xfffffffd;
        }
    }
    else
    {
        rbx_1 = 0x16;
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return rbx_1;
}

uint64_t wctomb_s(int32_t* arg1, char* arg2, void* arg3, wchar16 arg4)
{
    return _wctomb_s_l(arg1, arg2, arg3, arg4, nullptr);
}

uint64_t sub_14001a0a0(void* arg1, int64_t* arg2)
{
    uint64_t result = data_1400436b8;
    
    if (*arg2 != result)
    {
        result = *(arg1 + 0x3a8);
        
        if (!(*data_140041310 & result))
        {
            result = sub_14002241c();
            *arg2 = result;
        }
    }
    
    return result;
}

uint64_t __acrt_update_multibyte_info(void* arg1, int64_t* arg2)
{
    uint64_t result = data_1400437d0;
    
    if (*arg2 != result)
    {
        result = *(arg1 + 0x3a8);
        
        if (!(*data_140041310 & result))
        {
            result = __acrt_update_thread_multibyte_data();
            *arg2 = result;
        }
    }
    
    return result;
}

uint64_t fp_format_a(int64_t* arg1, char* arg2, void* arg3, char* arg4, int64_t arg5, int32_t arg6, char arg7, int32_t arg8, int128_t* arg9)
{
    *arg2 = 0;
    char* rbx = arg2;
    int32_t i = 0;
    
    if (arg6 >= 0)
        i = arg6;
    
    void* var_48;
    _LocaleUpdate::_LocaleUpdate(&var_48, arg9);
    int32_t rdi;
    
    if (arg3 > i + 0xb)
    {
        int64_t* rcx_2 = *arg1;
        
        if ((rcx_2 >> 0x34 & 0x7ff) != 0x7ff)
        {
            if (rcx_2 < 0)
            {
                *rbx = 0x2d;
                rbx = &rbx[1];
                rcx_2 = *arg1;
            }
            
            char* r15_1 = &rbx[1];
            uint64_t rbp_1 = 0x3ff;
            uint32_t r12_1 = arg7 ^ 1;
            
            if (0x7ff0000000000000 & rcx_2)
                *rbx = 0x31;
            else
            {
                *rbx = 0x30;
                rbp_1 = (0x3ff - 0x3ff) & 0x3fe;
            }
            
            char* rsi_1 = &r15_1[1];
            int64_t rax_11;
            void* var_40;
            
            if (i)
                rax_11 = ***(var_40 + 0xf8);
            else
                rax_11 = 0;
            *r15_1 = rax_11;
            int16_t rdx_4;
            
            if ((*arg1 & 0xfffffffffffff) > 0)
            {
                int16_t r8_1 = 0x30;
                uint64_t r9_1 = 0xf000000000000;
                
                while (i > 0)
                {
                    rcx_2 = r8_1;
                    uint16_t rax_18 = ((*arg1 & r9_1 & 0xfffffffffffff) >> rcx_2) + 0x30;
                    
                    if (rax_18 > 0x39)
                        rax_18 += (r12_1 << 5) + 7;
                    
                    *rsi_1 = rax_18;
                    i -= 1;
                    rsi_1 = &rsi_1[1];
                    r9_1 u>>= 4;
                    int16_t temp2_1 = r8_1;
                    r8_1 -= 4;
                    
                    if (temp2_1 - 4 < 0)
                        break;
                }
                
                if (r8_1 >= 0)
                {
                    rcx_2 = r8_1;
                    
                    if ((*arg1 & r9_1 & 0xfffffffffffff) >> rcx_2 > 8)
                    {
                        char* rcx_6 = &rsi_1[-1];
                        
                        while (true)
                        {
                            r8_1 = *rcx_6;
                            
                            if ((r8_1 - 0x46) & 0xdf)
                                break;
                            
                            *rcx_6 = 0x30;
                            rcx_6 -= 1;
                        }
                        
                        if (rcx_6 == r15_1)
                            rcx_6[-1] += 1;
                        else
                        {
                            if (r8_1 != 0x39)
                                rdx_4 = r8_1 + 1;
                            else
                                rdx_4 = ((r12_1 << 5) + 7) + 0x3a;
                            
                            *rcx_6 = rdx_4;
                        }
                    }
                }
            }
            
            if (i > 0)
            {
                rdx_4 = 0x30;
                sub_14000c550(rsi_1, rdx_4, i);
                rsi_1 = &rsi_1[i];
            }
            
            if (*r15_1)
                r15_1 = rsi_1;
            
            r12_1 <<= 5;
            r12_1 += 0x50;
            *r15_1 = r12_1;
            uint64_t rax_26 = *arg1 >> 0x34 & 0x7ff;
            uint64_t rcx_8 = rax_26;
            uint64_t rcx_9 = rcx_8 - rbp_1;
            uint64_t rdx_5 = rcx_9;
            
            if (rcx_8 - rbp_1 < 0)
                rcx_9 = rbp_1 - rax_26;
            
            char rax_27 = 0x2b;
            char* r8_3 = &r15_1[2];
            
            if (rdx_5 < 0)
                rax_27 = 0x2d;
            
            r15_1[1] = rax_27;
            r15_1[2] = 0x30;
            
            if (rcx_9 >= 0x3e8)
            {
                r8_3 = &r15_1[3];
                r15_1[2] = 0x30 + rcx_9 / 0x3e8;
                rcx_9 = rcx_9 % 0x3e8;
            }
            
            if (r8_3 != &r15_1[2] || rcx_9 >= 0x64)
            {
                *r8_3 = 0x30 + rcx_9 / 0x64;
                r8_3 = &r8_3[1];
                rcx_9 = rcx_9 % 0x64;
            }
            
            if (r8_3 != &r15_1[2] || rcx_9 >= 0xa)
            {
                *r8_3 = 0x30 + rcx_9 / 0xa;
                r8_3 = &r8_3[1];
                rcx_9 = rcx_9 % 0xa;
            }
            
            rcx_9 += 0x30;
            *r8_3 = rcx_9;
            r8_3[1] = 0;
            rdi = 0;
        }
        else
        {
            int32_t rax_8 = fp_format_e(arg1, rbx, arg3, arg4, arg5, i, 0, arg8, nullptr);
            rdi = rax_8;
            
            if (!rax_8)
            {
                char* rax_9 = sub_140027f4c(rbx, 0x65);
                
                if (rax_9)
                {
                    *rax_9 = ((arg7 ^ 1) << 5) + 0x50;
                    rax_9[3] = 0;
                }
                
                rdi = 0;
            }
            else
                *rbx = 0;
        }
    }
    else
    {
        rdi = 0x22;
        *_errno() = 0x22;
        _invalid_parameter_noinfo();
    }
    
    char var_30;
    
    if (var_30)
    {
        void* rcx_11 = var_48;
        *(rcx_11 + 0x3a8) &= 0xfffffffd;
    }
    
    return rdi;
}

int64_t fp_format_e(int64_t* arg1, char* arg2, void* arg3, char* arg4, int64_t arg5, int32_t arg6, char arg7, int32_t arg8, int128_t* arg9)
{
    int64_t rax = arg5;
    
    if (arg6 + 2 + 1 < rax)
        rax = arg6 + 2 + 1;
    
    int32_t var_18[0x4];
    int64_t r13;
    sub_140024040(*arg1, arg6 + 1, &var_18, arg4, r13, rax);
    void* rcx_1;
    rcx_1 = var_18[0] == 0x2d;
    int64_t rax_1;
    rax_1 = arg6 > 0;
    void* rdx_3 = arg3 - rax_1 - rcx_1;
    
    if (arg3 == -1)
        rdx_3 = arg3;
    
    int32_t result = __acrt_fp_strflt_to_string(rcx_1 + rax_1 + arg2, rdx_3, arg6 + 1, &var_18);
    
    if (!result)
    {
        int64_t var_38;
        var_38 = arg8;
        return sub_14001a554(arg2, arg3, arg6, arg7, var_38, &var_18, 0, arg9);
    }
    
    *arg2 = 0;
    return result;
}

int64_t sub_14001a554(char* arg1, void* arg2, int32_t arg3, char arg4, int32_t arg5, int32_t* arg6, char arg7, int128_t* arg8)
{
    int32_t rax = 0;
    int64_t rbx = arg3;
    int64_t r15;
    r15 = arg4;
    
    if (arg3 > 0)
        rax = rbx;
    
    if (arg2 <= rax + 9)
    {
        *_errno() = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
    }
    
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg8);
    
    if (arg7)
    {
        void* rdx_1;
        rdx_1 = *arg6 == 0x2d;
        char* rdx_2 = rdx_1 + arg1;
        
        if (rbx > 0)
        {
            void* r8 = -ffffffffffffffff;
            
            do
                r8 += 1;
             while (*(rdx_2 + r8));
            
            sub_14000bee0(&rdx_2[1], rdx_2, r8 + 1);
        }
    }
    
    char* rdx_3 = arg1;
    
    if (*arg6 == 0x2d)
    {
        *arg1 = 0x2d;
        rdx_3 = &arg1[1];
    }
    
    if (rbx > 0)
    {
        *rdx_3 = rdx_3[1];
        rdx_3 = &rdx_3[1];
        void* var_20;
        int64_t* rcx_2;
        rcx_2 = ***(var_20 + 0xf8);
        *rdx_3 = rcx_2;
    }
    
    char* rbx_2 = &rdx_3[rbx + (arg7 ^ 1)];
    void* rdx_4 = arg1 - rbx_2 + arg2;
    
    if (arg2 == -1)
        rdx_4 = arg2;
    
    if (strcpy_s(rbx_2, rdx_4, "e+000"))
    {
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        /* no return */
    }
    
    if (r15)
        *rbx_2 = 0x45;
    
    if (**(arg6 + 8) != 0x30)
    {
        int32_t r8_2 = arg6[1];
        int32_t r8_3 = r8_2 - 1;
        
        if (r8_2 - 1 < 0)
        {
            r8_3 = -(r8_3);
            rbx_2[1] = 0x2d;
        }
        
        if (r8_3 >= 0x64)
        {
            int32_t rdx_7 = r8_3 / 0x64;
            rbx_2[2] += rdx_7;
            r8_3 += rdx_7 * 0xffffff9c;
        }
        
        if (r8_3 >= 0xa)
        {
            int32_t rdx_10 = r8_3 / 0xa;
            rbx_2[3] += rdx_10;
            r8_3 += rdx_10 * 0xfffffff6;
        }
        
        rbx_2[4] += r8_3;
    }
    
    if (arg5 == 2 && rbx_2[2] == 0x30)
        sub_14000bee0(&rbx_2[2], &rbx_2[3], 3);
    
    char var_10;
    
    if (var_10)
    {
        void* rax_16 = var_28;
        *(rax_16 + 0x3a8) &= 0xfffffffd;
    }
    
    return 0;
}

int64_t fp_format_f_internal(char* arg1, int64_t arg2, int32_t arg3, int32_t* arg4, char arg5, int128_t* arg6)
{
    char* rbx = arg1;
    int32_t rsi = arg3;
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg6);
    int64_t rcx_1 = arg4[1];
    
    if (arg5 && rcx_1 - 1 == rsi)
    {
        void* rax_2;
        rax_2 = *arg4 == 0x2d;
        *(rcx_1 + rax_2 + rbx - 1) = 0x30;
    }
    
    if (*arg4 == 0x2d)
    {
        *rbx = 0x2d;
        rbx = &rbx[1];
    }
    
    char* rdi = -ffffffffffffffff;
    char* rbx_1;
    
    if (arg4[1] > 0)
        rbx_1 = &rbx[arg4[1]];
    else
    {
        void* r8 = -ffffffffffffffff;
        
        do
            r8 += 1;
         while (*(rbx + r8));
        
        sub_14000bee0(&rbx[1], rbx, r8 + 1);
        *rbx = 0x30;
        rbx_1 = &rbx[1];
    }
    
    if (rsi > 0)
    {
        void* r8_2 = -ffffffffffffffff;
        
        do
            r8_2 += 1;
         while (*(rbx_1 + r8_2));
        
        sub_14000bee0(&rbx_1[1], rbx_1, r8_2 + 1);
        void* var_20;
        int64_t* rcx_4;
        rcx_4 = ***(var_20 + 0xf8);
        *rbx_1 = rcx_4;
        int32_t rax_7 = arg4[1];
        
        if (rax_7 < 0)
        {
            int32_t rax_8 = -(rax_7);
            
            if (arg5 || rax_8 < rsi)
                rsi = rax_8;
            
            if (rsi)
            {
                do
                    rdi = &rdi[1];
                 while (*(rdi + &rbx_1[1]));
                
                sub_14000bee0(&rbx_1[1 + rsi], &rbx_1[1], &rdi[1]);
            }
            
            sub_14000c550(&rbx_1[1], 0x30, rsi);
        }
    }
    
    char var_10;
    
    if (var_10)
    {
        void* rax_9 = var_28;
        *(rax_9 + 0x3a8) &= 0xfffffffd;
    }
    
    return 0;
}

int64_t fp_format_g(int64_t* arg1, char* arg2, void* arg3, char* arg4, int64_t arg5, int32_t arg6, char arg7, int32_t arg8, int128_t* arg9)
{
    int64_t rcx = *arg1;
    int64_t var_18 = 0;
    int64_t var_10 = 0;
    int64_t r13;
    sub_140024040(rcx, arg6, &var_18, arg4, r13, arg5);
    void* rcx_1;
    rcx_1 = var_18 == 0x2d;
    int32_t r14_1 = *(&var_18 + 4) - 1;
    void* rdx_2 = arg3 - rcx_1;
    char* rbx = rcx_1 + arg2;
    
    if (arg3 == -1)
        rdx_2 = arg3;
    
    int32_t result = __acrt_fp_strflt_to_string(rbx, rdx_2, arg6, &var_18);
    
    if (result)
    {
        *arg2 = 0;
        return result;
    }
    
    if (*(&var_18 + 4) - 1 < 0xfffffffc || *(&var_18 + 4) - 1 >= arg6)
    {
        int64_t var_38;
        var_38 = arg8;
        return sub_14001a554(arg2, arg3, arg6, arg7, var_38, &var_18, 1, arg9);
    }
    
    if (r14_1 < *(&var_18 + 4) - 1)
    {
        int32_t rax_2;
        
        do
        {
            rax_2 = *rbx;
            rbx = &rbx[1];
        } while (rax_2);
        
        rbx[-2] = rax_2;
    }
    
    return fp_format_f_internal(arg2, arg3, arg6, &var_18, 1, arg9);
}

int64_t sub_14001a9a0(int32_t arg1, char arg2, char* arg3, int64_t arg4, char arg5)
{
    void var_c8;
    int64_t rax_1 = __security_cookie ^ &var_c8;
    int64_t r10 = arg4;
    char* r9 = arg3;
    int32_t result;
    
    if (r10 >= arg2 + 4)
    {
        if (arg2)
        {
            r9 = &r9[1];
            *arg3 = 0x2d;
            r10 -= 1;
            *r9 = 0;
        }
        
        void* const var_78_1 = &data_140033110;
        void* const var_70_1 = &data_140033110;
        void* const var_98 = &data_140033108;
        void* const var_90_1 = &data_140033108;
        void* const var_88_1 = &data_14003310c;
        void* const var_80_1 = &data_14003310c;
        char const* const var_58_1 = "NAN(SNAN)";
        char const* const var_48_1 = "nan(snan)";
        void* const var_50_1 = &data_140033110;
        void* const var_30_1 = &data_140033110;
        char const* const var_38_1 = "NAN(IND)";
        uint64_t r11_2 = (arg1 - 1) << 2;
        char const* const var_28_1 = "nan(ind)";
        int32_t rdx_2 = (arg5 ^ 1) * 2;
        void* const var_68_1 = &data_140033114;
        void* const var_60_1 = &data_140033114;
        int64_t rcx_2 = -1;
        void* const var_40_1 = &data_140033114;
        void* const var_20_1 = &data_140033114;
        
        do
            rcx_2 += 1;
         while ((&var_98)[rdx_2 + r11_2][rcx_2]);
        
        int32_t rax_6;
        rax_6 = r10 <= rcx_2;
        result = strcpy_s(r9, r10, (&var_98)[rdx_2 + rax_6 + r11_2]);
        
        if (result)
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
    }
    else
    {
        *arg3 = 0;
        result = 0xc;
    }
    
    __security_check_cookie(rax_1 ^ &var_c8);
    return result;
}

int64_t __acrt_fp_format(int64_t* arg1, char* arg2, void* arg3, char* arg4, int64_t arg5, int32_t arg6, int32_t arg7, int64_t arg8, int128_t* arg9)
{
    void* rdi = arg3;
    
    if (!arg2 || !rdi || !arg4 || !arg5)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    
    int32_t r10_1 = 1;
    
    if (arg6 == 0x41 || arg6 - 0x45 <= 2)
        arg3 = 1;
    else
        arg3 = 0;
    
    if (!(arg8 & 8))
    {
        int64_t r11_1 = *arg1;
        
        if ((r11_1 >> 0x34 & 0x7ff) == 0x7ff)
        {
            int64_t rax_7 = r11_1 & 0xfffffffffffff;
            
            if (rax_7)
            {
                r10_1 = r11_1 >= 0 || rax_7 != 0x8000000000000 ? (1 & ~(r11_1 >> 0x33)) | 2 : 4;
            }
            
            int64_t rdx;
            rdx = r11_1 >> 0x3f;
            return sub_14001a9a0(r10_1, rdx, arg2, rdi, arg3);
        }
    }
    
    int32_t rdx_3 = (arg8 >> 4 & 1) | 2;
    
    if (arg6 != 0x41)
    {
        if (arg6 == 0x45)
            return fp_format_e(arg1, arg2, rdi, arg4, arg5, arg7, arg3, rdx_3, arg9);
        
        if (arg6 == 0x46)
        {
        label_14001ac53:
            int64_t rcx_9 = *arg1;
            int64_t var_18 = 0;
            int64_t var_10_1 = 0;
            int64_t r13;
            sub_140024040(rcx_9, arg7, &var_18, arg4, r13, arg5);
            void* const rcx_10;
            rcx_10 = var_18 == 0x2d;
            void* rdx_7 = rdi - rcx_10;
            
            if (rdi == -1)
                rdx_7 = rdi;
            
            int32_t result =
                __acrt_fp_strflt_to_string(rcx_10 + arg2, rdx_7, *(&var_18 + 4) + arg7, &var_18);
            
            if (!result)
            {
                int32_t var_40;
                var_40 = arg9;
                return fp_format_f_internal(arg2, rdi, arg7, &var_18, 0, var_40);
            }
            
            *arg2 = 0;
            return result;
        }
        
        if (arg6 == 0x47)
            return fp_format_g(arg1, arg2, rdi, arg4, arg5, arg7, arg3, rdx_3, arg9);
        
        if (arg6 != 0x61)
        {
            if (arg6 == 0x65)
                return fp_format_e(arg1, arg2, rdi, arg4, arg5, arg7, arg3, rdx_3, arg9);
            
            if (arg6 == 0x66)
                goto label_14001ac53;
            
            return fp_format_g(arg1, arg2, rdi, arg4, arg5, arg7, arg3, rdx_3, arg9);
        }
    }
    
    return fp_format_a(arg1, arg2, rdi, arg4, arg5, arg7, arg3, rdx_3, arg9);
}

uint64_t _fileno(void* arg1)
{
    if (arg1)
        return *(arg1 + 0x18);
    
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    return 0xffffffff;
}

int64_t _get_printf_count_output()
{
    int64_t result;
    result = data_1400436a0 == (__security_cookie | 1);
    return result;
}

uint64_t __acrt_stdio_begin_temporary_buffering_nolock(uint64_t* arg1)
{
    uint64_t result;
    
    if (!_isatty(_fileno(arg1)))
        result = 0;
    else
    {
        int64_t* rdi_1;
        
        if (arg1 != sub_14000eda8(1))
        {
            if (arg1 == sub_14000eda8(2))
            {
                rdi_1 = &data_1400436b0;
                goto label_14001adf3;
            }
            
            result = 0;
        }
        else
        {
            rdi_1 = &data_1400436a8;
        label_14001adf3:
            data_140042cc0 += 1;
            
            if (*(arg1 + 0x14) & 0x4c0)
                result = 0;
            else
            {
                *(arg1 + 0x14) |= 0x282;
                result = *rdi_1;
                
                if (result)
                {
                label_14001ae4c:
                    arg1[1] = result;
                    *arg1 = *rdi_1;
                    arg1[2] = 0x1000;
                    arg1[4] = 0x1000;
                }
                else
                {
                    *rdi_1 = _malloc_base(0x1000);
                    _free_base(0);
                    result = *rdi_1;
                    
                    if (result)
                        goto label_14001ae4c;
                    
                    arg1[2] = 2;
                    arg1[1] = arg1 + 0x1c;
                    *arg1 = arg1 + 0x1c;
                    arg1[4] = 2;
                }
                
                result = 1;
            }
        }
    }
    
    return result;
}

void __acrt_stdio_end_temporary_buffering_nolock(char arg1, int64_t* arg2)
{
    if (!arg1 || !(*(arg2 + 0x14) >> 9 & 1))
        return;
    
    __acrt_stdio_flush_nolock(arg2);
    *(arg2 + 0x14) &= 0xfffffd7f;
    arg2[4] = 0;
    arg2[1] = 0;
    *arg2 = 0;
}

uint64_t __crt_seh_guarded_call<class <lambda_751a882b2c74d4b022dec766aa51a29a>,class <lambda_628dfdc04ba53c8bfc02c9951375f3f5>& __ptr64,class <lambda_f6c7be5f7998530c34de24c7437d6b54>,int32_t>::operator()<class <lambda_751a882b2c74d4b022dec766aa51a29a>,class <lambda_628dfdc04ba53c8bfc02c9951375f3f5>& __ptr64,class <lambda_f6c7be5f7998530c34de24c7437d6b54> >(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_140021020(*arg2);
    int64_t rcx_1 = **arg3;
    int32_t rbx_1;
    
    if (!(*((&data_140043290)[rcx_1 >> 6] + (rcx_1 & 0x3f) * 0x48 + 0x38) & 1))
    {
        *_errno() = 9;
        rbx_1 = -1;
    }
    else
        rbx_1 = _close_nolock(rcx_1);
    
    sub_140021048(*arg4);
    return rbx_1;
}

uint64_t _close(int32_t arg1)
{
    int32_t arg_8 = arg1;
    int64_t rdx = arg1;
    
    if (rdx != 0xfffffffe)
    {
        if (arg1 >= 0 && rdx < data_140043690
            && *((&data_140043290)[rdx >> 6] + (rdx & 0x3f) * 0x48 + 0x38) & 1)
        {
            int32_t arg_18 = rdx;
            int32_t arg_20 = rdx;
            int32_t* var_18 = &arg_8;
            void arg_10;
            return __crt_seh_guarded_call<class <lambda_751a882b2c74d4b022dec766aa51a29a>,class <lambda_628dfdc04ba53c8bfc02c9951375f3f5>& __ptr64,class <lambda_f6c7be5f7998530c34de24c7437d6b54>,int32_t>::operator()<class <lambda_751a882b2c74d4b022dec766aa51a29a>,class <lambda_628dfdc04ba53c8bfc02c9951375f3f5>& __ptr64,class <lambda_f6c7be5f7998530c34de24c7437d6b54> >(
                &arg_10, &arg_20, &var_18, &arg_18);
        }
        
        *__doserrno() = 0;
        *_errno() = 9;
        _invalid_parameter_noinfo();
    }
    else
    {
        *__doserrno() = 0;
        *_errno() = 9;
    }
    
    return 0xffffffff;
}

int64_t _close_nolock(int32_t arg1)
{
    int64_t rdi = arg1;
    enum WIN32_ERROR rbx_2;
    
    if (_get_osfhandle(rdi) != -1)
    {
        void* rax_1 = data_140043290;
        int64_t rax_2;
        int64_t rax_3;
        
        if ((rdi == 1 && *(rax_1 + 0xc8) & rdi) || (rdi == 2 && *(rax_1 + 0x80) & 1))
        {
            rax_2 = _get_osfhandle(2);
            rax_3 = _get_osfhandle(1);
        }
        
        if (((rdi == 1 && *(rax_1 + 0xc8) & rdi) || (rdi == 2 && *(rax_1 + 0x80) & 1))
                && rax_3 == rax_2)
            rbx_2 = NO_ERROR;
        else if (CloseHandle(_get_osfhandle(rdi)))
            rbx_2 = NO_ERROR;
        else
            rbx_2 = GetLastError();
    }
    else
        rbx_2 = NO_ERROR;
    
    _free_osfhnd(rdi);
    *((&data_140043290)[rdi >> 6] + (rdi & 0x3f) * 0x48 + 0x38) = 0;
    
    if (!rbx_2)
        return 0;
    
    __acrt_errno_map_os_error(rbx_2);
    return 0xffffffff;
}

uint64_t __acrt_stdio_free_stream(void* arg1)
{
    *(arg1 + 0x18) = 0xffffffff;
    __builtin_memset(arg1, 0, 0x18);
    *(arg1 + 0x1c) = 0;
    *(arg1 + 0x28) = 0;
    return *(arg1 + 0x14);
}

uint64_t __crt_seh_guarded_call<class <lambda_a37b2b86f63e897a80ea819b0eb08c01>,class <lambda_38ce7e780aa69e748d6df282ebc68efe>& __ptr64,class <lambda_99fb1378e971ab6e7edea83e3a7a83a2>,int32_t>::operator()<class <lambda_a37b2b86f63e897a80ea819b0eb08c01>,class <lambda_38ce7e780aa69e748d6df282ebc68efe>& __ptr64,class <lambda_99fb1378e971ab6e7edea83e3a7a83a2> >(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_140021020(*arg2);
    int64_t rcx_1 = **arg3;
    int32_t rbx_1;
    
    if (!(*((&data_140043290)[rcx_1 >> 6] + (rcx_1 & 0x3f) * 0x48 + 0x38) & 1))
    {
        *_errno() = 9;
        rbx_1 = -1;
    }
    else
    {
        rbx_1 = 0;
        
        if (!FlushFileBuffers(_get_osfhandle(rcx_1)))
        {
            int32_t* rax_6 = __doserrno();
            *rax_6 = GetLastError();
            *_errno() = 9;
            rbx_1 = -1;
        }
    }
    
    sub_140021048(*arg4);
    return rbx_1;
}

uint64_t _commit(int32_t arg1)
{
    int32_t arg_8 = arg1;
    int64_t rdx = arg1;
    
    if (rdx != 0xfffffffe)
    {
        if (arg1 >= 0 && rdx < data_140043690
            && *((&data_140043290)[rdx >> 6] + (rdx & 0x3f) * 0x48 + 0x38) & 1)
        {
            int32_t arg_18 = rdx;
            int32_t arg_20 = rdx;
            int32_t* var_18 = &arg_8;
            void arg_10;
            return __crt_seh_guarded_call<class <lambda_a37b2b86f63e897a80ea819b0eb08c01>,class <lambda_38ce7e780aa69e748d6df282ebc68efe>& __ptr64,class <lambda_99fb1378e971ab6e7edea83e3a7a83a2>,int32_t>::operator()<class <lambda_a37b2b86f63e897a80ea819b0eb08c01>,class <lambda_38ce7e780aa69e748d6df282ebc68efe>& __ptr64,class <lambda_99fb1378e971ab6e7edea83e3a7a83a2> >(
                &arg_10, &arg_20, &var_18, &arg_18);
        }
        
        *_errno() = 9;
        _invalid_parameter_noinfo();
    }
    else
        *_errno() = 9;
    
    return 0xffffffff;
}

int64_t* sub_14001b1c4(int64_t* arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    void var_138;
    int64_t rax_1 = __security_cookie ^ &var_138;
    int64_t rbx = arg2;
    char* rdi = arg3;
    int32_t var_78 = arg3;
    void* r13_1 = &arg3[arg4];
    void* var_a8 = r13_1;
    uint64_t r14 = (rbx & 0x3f) * 9;
    int64_t r12_1 = rbx >> 6;
    HANDLE hFile = *((&data_140043290)[r12_1] + (r14 << 3) + 0x28);
    uint32_t rax_5 = GetConsoleCP();
    void* var_e8;
    _LocaleUpdate::_LocaleUpdate(&var_e8, nullptr);
    int32_t r10 = 0;
    int32_t var_b0 = 0;
    int64_t var_c8 = 0;
    char* rsi = rdi;
    uint64_t var_e0;
    int32_t rdx = *(var_e0 + 0xc);
    int32_t var_b4 = rdx;
    bool cond:1;
    char var_d0;
    
    if (rdi >= r13_1)
    {
    label_14001b5a7:
        cond:1 = !var_d0;
    }
    else
    {
        int32_t rbx_1 = 0;
        int64_t rax_7 = rbx >> 6;
        int64_t var_70_1 = rax_7;
        
        while (true)
        {
            uint64_t rcx_1;
            rcx_1 = *rsi;
            uint8_t buffer = rcx_1;
            int32_t var_f4 = 0;
            int32_t r15_1 = 1;
            
            if (rdx != 0xfde9)
            {
                int64_t rdx_7 = (&data_140043290)[r12_1];
                rcx_1 = *(rdx_7 + (r14 << 3) + 0x3d);
                char* rdx_8;
                uint64_t r8_5;
                
                if (!(rcx_1 & 4))
                {
                    if (*(__pctype_func() + (*rsi << 1)) >= 0)
                        r8_5 = 1;
                    else
                    {
                        rdi = &rdi[1];
                        
                        if (rdi >= r13_1)
                        {
                            int64_t rax_21;
                            rax_21 = *rsi;
                            *(&var_c8 + 4) = rbx_1 + 1;
                            *((&data_140043290)[r12_1] + (r14 << 3) + 0x3e) = rax_21;
                            int64_t rax_27 = (&data_140043290)[r12_1];
                            *(rax_27 + (r14 << 3) + 0x3d) |= 4;
                            cond:1 = !var_d0;
                            break;
                        }
                        
                        r8_5 = 2;
                    }
                    
                    rdx_8 = rsi;
                }
                else
                {
                    rcx_1 &= 0xfb;
                    char var_50 = *(rdx_7 + (r14 << 3) + 0x3e);
                    r8_5 = 2;
                    char rax_20 = *rsi;
                    *(rdx_7 + (r14 << 3) + 0x3d) = rcx_1;
                    rdx_8 = &var_50;
                    char var_4f_1 = rax_20;
                }
                
                if (mbtowc(&var_f4, rdx_8, r8_5) != 0xffffffff)
                    goto label_14001b49e;
            }
            else
            {
                int32_t rdx_1 = 0;
                int64_t r9 = (&data_140043290)[rax_7];
                int64_t rdi_1 = 0;
                
                while (*(r9 + (r14 << 3) + rdi_1 + 0x3e))
                {
                    rdx_1 += 1;
                    rdi_1 += 1;
                    
                    if (rdi_1 >= 5)
                        break;
                }
                
                if (rdi_1 <= 0)
                {
                    int64_t i = r13_1 - rsi;
                    int64_t rdi_3 = *(*rsi + 0x140041210);
                    int32_t rcx_8 = rdi_3 + 1;
                    
                    if (rcx_8 > i)
                    {
                        if (i > 0)
                        {
                            char* r9_7 = nullptr;
                            
                            do
                            {
                                int64_t rax_16;
                                rax_16 = *(r9_7 + rsi);
                                r10 += 1;
                                r9_7 = &r9_7[1];
                                r9_7[(rbx & 0x3f) * 0x48 + (&data_140043290)[rbx >> 6] + 0x3e] =
                                    rax_16;
                            } while (r10 < i);
                        }
                        
                        cond:1 = !var_d0;
                        *(&var_c8 + 4) = rbx_1 + i;
                        break;
                    }
                    
                    char* var_80 = rsi;
                    int64_t var_88 = 0;
                    int32_t rax_17;
                    rax_17 = rcx_8 == 4;
                    
                    if (__crt_mbstring::__mbsrtowcs_utf8(&var_f4, &var_80, rax_17 + 1, &var_88)
                        != -1)
                    {
                        rdi = &rsi[rdi_3];
                        r15_1 = rax_17 + 1;
                    label_14001b49e:
                        int64_t var_100_1 = 0;
                        rsi = &rdi[1];
                        int64_t var_108_1 = 0;
                        uint8_t buffer_1;
                        uint32_t nNumberOfBytesToWrite =
                            __acrt_WideCharToMultiByte(rax_5, 0, &var_f4, r15_1, &buffer_1, 5);
                        
                        if (!nNumberOfBytesToWrite)
                        {
                            cond:1 = !var_d0;
                            break;
                        }
                        
                        r10 = 0;
                        uint32_t numberOfBytesWritten;
                        
                        if (!WriteFile(hFile, &buffer_1, nNumberOfBytesToWrite, 
                            &numberOfBytesWritten, nullptr))
                        {
                            var_c8 = GetLastError();
                            cond:1 = !var_d0;
                            break;
                        }
                        
                        rbx_1 = rsi - var_78 + var_b0;
                        *(&var_c8 + 4) = rbx_1;
                        
                        if (numberOfBytesWritten < nNumberOfBytesToWrite)
                            goto label_14001b5a7;
                        
                        if (buffer != 0xa)
                        {
                        label_14001b558:
                            rdi = rsi;
                            
                            if (rsi >= r13_1)
                                goto label_14001b5a7;
                            
                            rax_7 = var_70_1;
                            rdx = var_b4;
                            continue;
                        }
                        else
                        {
                            buffer = 0xd;
                            BOOL rax_24;
                            rax_24 = WriteFile(hFile, &buffer, 1, &numberOfBytesWritten, nullptr);
                            r10 = 0;
                            
                            if (rax_24)
                            {
                                if (numberOfBytesWritten < 1)
                                    goto label_14001b5a7;
                                
                                rbx_1 += 1;
                                var_b0 += 1;
                                *(&var_c8 + 4) = rbx_1;
                                goto label_14001b558;
                            }
                            
                            var_c8 = GetLastError();
                        }
                    }
                }
                else
                {
                    void* i_1 = var_a8 - rsi;
                    int32_t r15_3 =
                        *(*((&data_140043290)[r12_1] + (r14 << 3) + 0x3e) + 0x140041210) + 1;
                    int32_t r13_3 = r15_3 - rdx_1;
                    int64_t r11_1 = r13_3;
                    
                    if (r11_1 > i_1)
                    {
                        int32_t rdx_11 = 0;
                        
                        if (i_1 > 0)
                        {
                            char* rsi_1 = rsi - rdi_1;
                            
                            do
                            {
                                int64_t rax_9;
                                rax_9 = rsi_1[rdi_1];
                                rdx_11 += 1;
                                int64_t rcx_17 = (&data_140043290)[r12_1] + rdi_1;
                                rdi_1 += 1;
                                *(rcx_17 + (r14 << 3) + 0x3e) = rax_9;
                            } while (rdx_11 < i_1);
                            
                            rbx_1 = *(&var_c8 + 4);
                        }
                        
                        *(&var_c8 + 4) = rbx_1 + i_1;
                        goto label_14001b5a7;
                    }
                    
                    int64_t rdx_2 = 0;
                    char var_58[0x8];
                    
                    if (rdi_1 > 0)
                    {
                        do
                        {
                            char* rcx_3 = &var_58[rdx_2];
                            rdx_2 += 1;
                            *rcx_3 = *(rcx_3 + r9 - &var_58 + (r14 << 3) + 0x3e);
                        } while (rdx_2 < rdi_1);
                    }
                    
                    if (r13_3 > 0)
                        sub_14000bee0(&var_58[rdi_1], rsi, r11_1);
                    
                    int64_t rdx_4 = 0;
                    
                    if (rdi_1 > 0)
                    {
                        do
                        {
                            int64_t rcx_6 = (&data_140043290)[r12_1] + rdx_4;
                            rdx_4 += 1;
                            *(rcx_6 + (r14 << 3) + 0x3e) = 0;
                        } while (rdx_4 < rdi_1);
                    }
                    
                    int64_t var_98 = 0;
                    char (* var_90)[0x8] = &var_58;
                    int32_t rax_11;
                    rax_11 = r15_3 == 4;
                    r15_1 = rax_11 + 1;
                    
                    if (__crt_mbstring::__mbsrtowcs_utf8(&var_f4, &var_90, rax_11 + 1, &var_98)
                        != -1)
                    {
                        r13_1 = var_a8;
                        rdi = &rsi[r13_3 - 1];
                        goto label_14001b49e;
                    }
                }
            }
            
            cond:1 = !var_d0;
            break;
        }
    }
    
    if (!cond:1)
    {
        void* rax_25 = var_e8;
        *(rax_25 + 0x3a8) &= 0xfffffffd;
    }
    
    *arg1 = var_c8;
    arg1[1] = var_b0;
    __security_check_cookie(rax_1 ^ &var_138);
    return arg1;
}

int64_t* write_text_ansi_nolock(int64_t* arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    __chkstk(0x1450);
    void var_1468;
    int64_t rax_1 = __security_cookie ^ &var_1468;
    int64_t r10 = arg2;
    void* rbp_1 = &arg3[arg4];
    char* rsi = arg3;
    HANDLE hFile = *((&data_140043290)[r10 >> 6] + (r10 & 0x3f) * 0x48 + 0x28);
    *arg1 = 0;
    arg1[1] = 0;
    
    if (arg3 < rbp_1)
    {
        do
        {
            uint8_t buffer[0x13ff];
            uint8_t (* rbx_1)[0x13ff] = &buffer;
            uint32_t rax_5;
            
            while (rsi < rbp_1)
            {
                rax_5 = *rsi;
                rsi = &rsi[1];
                
                if (rax_5 == 0xa)
                {
                    arg1[1] += 1;
                    *rbx_1 = 0xd;
                    rbx_1 = &(*rbx_1)[1];
                }
                
                *rbx_1 = rax_5;
                rbx_1 = &(*rbx_1)[1];
                void var_29;
                
                if (rbx_1 >= &var_29)
                    break;
            }
            
            uint32_t nNumberOfBytesToWrite = rbx_1 - &buffer;
            uint32_t numberOfBytesWritten[0x4];
            
            if (!WriteFile(hFile, &buffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr))
            {
                *arg1 = GetLastError();
                break;
            }
            
            rax_5 = numberOfBytesWritten[0];
            *(arg1 + 4) += rax_5;
            
            if (rax_5 < nNumberOfBytesToWrite)
                break;
        } while (rsi < rbp_1);
    }
    
    __security_check_cookie(rax_1 ^ &var_1468);
    return arg1;
}

int64_t* write_text_utf16le_nolock(int64_t* arg1, int32_t arg2, int16_t* arg3, int32_t arg4)
{
    __chkstk(0x1450);
    void var_1468;
    int64_t rax_1 = __security_cookie ^ &var_1468;
    int64_t r10 = arg2;
    void* rbp_1 = arg4 + arg3;
    int16_t* rsi = arg3;
    HANDLE hFile = *((&data_140043290)[r10 >> 6] + (r10 & 0x3f) * 0x48 + 0x28);
    *arg1 = 0;
    arg1[1] = 0;
    
    if (arg3 < rbp_1)
    {
        do
        {
            uint8_t buffer[0x13fe];
            uint8_t (* rbx_1)[0x13fe] = &buffer;
            
            while (rsi < rbp_1)
            {
                int16_t rax_5 = *rsi;
                rsi = &rsi[1];
                
                if (rax_5 == 0xa)
                {
                    arg1[1] += 2;
                    *rbx_1 = 0xd;
                    rbx_1 = &(*rbx_1)[2];
                }
                
                *rbx_1 = rax_5;
                rbx_1 = &(*rbx_1)[2];
                void var_2a;
                
                if (rbx_1 >= &var_2a)
                    break;
            }
            
            int32_t nNumberOfBytesToWrite = ((rbx_1 - &buffer) >> 1) * 2;
            uint32_t numberOfBytesWritten[0x4];
            
            if (!WriteFile(hFile, &buffer, nNumberOfBytesToWrite, &numberOfBytesWritten, nullptr))
            {
                *arg1 = GetLastError();
                break;
            }
            
            uint32_t rax_7 = numberOfBytesWritten[0];
            *(arg1 + 4) += rax_7;
            
            if (rax_7 < nNumberOfBytesToWrite)
                break;
        } while (rsi < rbp_1);
    }
    
    __security_check_cookie(rax_1 ^ &var_1468);
    return arg1;
}

int64_t* write_text_utf8_nolock(int64_t* arg1, int32_t arg2, int16_t* arg3, int32_t arg4)
{
    __chkstk(0x1470);
    void var_1498;
    int64_t rax_1 = __security_cookie ^ &var_1498;
    int64_t r10 = arg2;
    void* r14_1 = arg4 + arg3;
    int16_t* rdi = arg3;
    HANDLE hFile = *((&data_140043290)[r10 >> 6] + (r10 & 0x3f) * 0x48 + 0x28);
    *arg1 = 0;
    bool cond:0 = arg3 >= r14_1;
    arg1[1] = 0;
    
    for (; !cond:0; cond:0 = rdi >= r14_1)
    {
        wchar16 var_1448[0x354];
        wchar16 (* rax_5)[0x354] = &var_1448;
        
        while (rdi < r14_1)
        {
            int16_t rcx = *rdi;
            rdi = &rdi[1];
            
            if (rcx == 0xa)
            {
                *rax_5 = 0xd;
                rax_5 = &(*rax_5)[1];
            }
            
            *rax_5 = rcx;
            rax_5 = &(*rax_5)[1];
            void var_da0;
            
            if (rax_5 >= &var_da0)
                break;
        }
        
        int64_t var_1460_1 = 0;
        int64_t var_1468_1 = 0;
        void var_d98;
        int32_t rax_8 = __acrt_WideCharToMultiByte(0xfde9, 0, &var_1448, (rax_5 - &var_1448) >> 1, 
            &var_d98, 0xd55);
        
        if (!rax_8)
        {
        label_14001b9ff:
            *arg1 = GetLastError();
            break;
        }
        
        int32_t rsi_1 = 0;
        
        if (rax_8)
        {
            do
            {
                uint32_t numberOfBytesWritten[0x4];
                
                if (!WriteFile(hFile, &var_d98 + rsi_1, rax_8 - rsi_1, &numberOfBytesWritten, 
                        nullptr))
                    goto label_14001b9ff;
                
                rsi_1 += numberOfBytesWritten[0];
            } while (rsi_1 < rax_8);
        }
        
        *(arg1 + 4) = rdi - arg3;
    }
    
    __security_check_cookie(rax_1 ^ &var_1498);
    return arg1;
}

uint64_t _write(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    int32_t arg_8 = arg1;
    int64_t rbx = arg1;
    
    if (rbx != 0xfffffffe)
    {
        if (arg1 >= 0 && rbx < data_140043690)
        {
            int64_t rsi_2 = rbx >> 6;
            uint64_t r12_1 = (rbx & 0x3f) * 9;
            
            if (*((&data_140043290)[rsi_2] + (r12_1 << 3) + 0x38) & 1)
            {
                sub_140021020(rbx);
                int32_t rdi_1 = -1;
                
                if (*((&data_140043290)[rsi_2] + (r12_1 << 3) + 0x38) & 1)
                    rdi_1 = _write_nolock(rbx, arg2, arg3);
                else
                {
                    *_errno() = 9;
                    *__doserrno() = 0;
                }
                
                sub_140021048(rbx);
                return rdi_1;
            }
        }
        
        *__doserrno() = 0;
        *_errno() = 9;
        _invalid_parameter_noinfo();
    }
    else
    {
        *__doserrno() = 0;
        *_errno() = 9;
    }
    
    return 0xffffffff;
}

uint64_t _write_nolock(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    uint64_t r14 = arg3;
    int64_t r12 = arg1;
    
    if (arg3)
    {
        int64_t rcx;
        int64_t rsi;
        int64_t r13_2;
        uint64_t r15_1;
        
        if (arg2)
        {
            r13_2 = r12 >> 6;
            r15_1 = (r12 & 0x3f) * 9;
            rcx = (&data_140043290)[r13_2];
            rsi = *(rcx + (r15_1 << 3) + 0x39);
        }
        
        if (!arg2 || (rsi - 1 <= 1 && !(~r14 & 1)))
        {
            *__doserrno() = 0;
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0xffffffff;
        }
        
        if (*(rcx + (r15_1 << 3) + 0x38) & 0x20)
            j_common_lseek_nolock<int64_t>(r12, 0, FILE_END);
        
        int32_t rbx_1 = 0;
        int64_t var_58_1 = 0;
        int64_t var_68;
        int64_t* rax_17;
        
        if (!_isatty(r12) || *((&data_140043290)[r13_2] + (r15_1 << 3) + 0x38) >= 0)
        {
        label_14001bcd1:
            int64_t rcx_9 = (&data_140043290)[r13_2];
            
            if (*(rcx_9 + (r15_1 << 3) + 0x38) >= 0)
            {
                HANDLE hFile = *(rcx_9 + (r15_1 << 3) + 0x28);
                var_68 = 0;
                int32_t var_60_1 = 0;
                
                if (!WriteFile(hFile, arg2, r14, (&var_68 + 4), nullptr))
                    var_68 = GetLastError();
                
                rbx_1 = var_60_1;
                var_58_1 = var_68;
            }
            else
            {
                int32_t rcx_10 = rsi;
                
                if (!rsi)
                {
                    rax_17 = write_text_ansi_nolock(&var_68, r12, arg2, r14);
                label_14001bcbe:
                    rbx_1 = rax_17[1];
                    var_58_1 = *rax_17;
                }
                else
                {
                    if (rcx_10 == 1)
                    {
                        rax_17 = write_text_utf8_nolock(&var_68, r12, arg2, r14);
                        goto label_14001bcbe;
                    }
                    
                    if (rcx_10 == 2)
                    {
                        rax_17 = write_text_utf16le_nolock(&var_68, r12, arg2, r14);
                        goto label_14001bcbe;
                    }
                }
            }
        }
        else
        {
            if (!*(*(__acrt_getptd() + 0x90) + 0x138)
                    && !*((&data_140043290)[r13_2] + (r15_1 << 3) + 0x39))
                goto label_14001bcd1;
            
            enum CONSOLE_MODE mode[0x4];
            
            if (!GetConsoleMode(*((&data_140043290)[r13_2] + (r15_1 << 3) + 0x28), &mode))
                goto label_14001bcd1;
            
            if (!rsi)
            {
                rax_17 = sub_14001b1c4(&var_68, r12, arg2, r14);
                goto label_14001bcbe;
            }
            
            rsi -= 1;
            
            if (rsi <= 1)
            {
                int32_t rsi_1 = 0;
                void* r12_1 = arg2 + r14;
                var_68 = 0;
                int16_t* r14_1 = arg2;
                
                if (arg2 < r12_1)
                {
                    int32_t var_64;
                    int32_t rbx_2 = var_64;
                    
                    while (true)
                    {
                        int16_t rax_13 = *r14_1;
                        mode[0] = rax_13;
                        int16_t rax_14 = _putwch_nolock(rax_13);
                        int16_t rcx_7 = mode[0];
                        
                        if (rax_14 == rcx_7)
                        {
                            rbx_2 += 2;
                            int32_t var_64_1 = rbx_2;
                            
                            if (rcx_7 != 0xa)
                                goto label_14001bc91;
                            
                            if (_putwch_nolock(0xd) == 0xd)
                            {
                                rbx_2 += 1;
                                int32_t var_64_2 = rbx_2;
                                rsi_1 += 1;
                            label_14001bc91:
                                r14_1 = &r14_1[1];
                                
                                if (r14_1 >= r12_1)
                                    break;
                                
                                continue;
                            }
                        }
                        
                        var_68 = GetLastError();
                        break;
                    }
                }
                
                rbx_1 = rsi_1;
                var_58_1 = var_68;
            }
        }
        
        if (var_58_1 >> 0x20)
            return *(&var_58_1 + 4) - rbx_1;
        
        int32_t rcx_15 = var_58_1;
        
        if (rcx_15)
        {
            if (rcx_15 != 5)
                __acrt_errno_map_os_error(rcx_15);
            else
            {
                *_errno() = 9;
                *__doserrno() = 5;
            }
            
            return 0xffffffff;
        }
        
        if (!(*((&data_140043290)[r13_2] + (r15_1 << 3) + 0x38) & 0x40) || *arg2 != 0x1a)
        {
            *_errno() = 0x1c;
            *__doserrno() = 0;
            return 0xffffffff;
        }
    }
    
    return 0;
}

uint64_t __acrt_stdio_refill_and_read_narrow_nolock(int64_t* arg1)
{
    uint32_t rsi;
    
    if (!arg1)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        rsi = -1;
    }
    else if (!(*(arg1 + 0x14) >> 0xd & 1) || *(arg1 + 0x14) >> 0xc & 1)
        rsi = -1;
    else if (!(*(arg1 + 0x14) >> 1 & 1))
    {
        *(arg1 + 0x14) |= 1;
        
        if (!(*(arg1 + 0x14) & 0x4c0))
            __acrt_stdio_allocate_buffer_nolock(arg1);
        
        char* rbx_1 = arg1[1];
        *arg1 = rbx_1;
        int32_t rax_9 = _read(_fileno(arg1), rbx_1, arg1[4]);
        arg1[2] = rax_9;
        
        if (rax_9 + 1 <= 1)
        {
            int32_t rax_21 = -(rax_9);
            *(arg1 + 0x14) |= ((rax_21 - rax_21) & 8) + 8;
            arg1[2] = 0;
            rsi = -1;
        }
        else
        {
            if (!(*(arg1 + 0x14) & 6))
            {
                int64_t rdx_2;
                
                if (_fileno(arg1) == 0xffffffff)
                    rdx_2 = &data_140041050;
                else if (_fileno(arg1) == 0xfffffffe)
                    rdx_2 = &data_140041050;
                else
                {
                    int64_t rbx_3 = _fileno(arg1) >> 6;
                    uint64_t rax_14 = _fileno(arg1) & 0x3f;
                    rdx_2 = (&data_140043290)[rbx_3] + rax_14 * 0x48;
                }
                
                uint64_t rax_11;
                rax_11 = *(rdx_2 + 0x38);
                rax_11 &= 0x82;
                
                if (rax_11 == 0x82)
                    *(arg1 + 0x14) |= 0x20;
            }
            
            if (arg1[4] == 0x200 && *(arg1 + 0x14) >> 6 & 1 && !(*(arg1 + 0x14) >> 8 & 1))
                arg1[4] = 0x1000;
            
            arg1[2] -= 1;
            char* rax_19 = *arg1;
            rsi = *rax_19;
            *arg1 = &rax_19[1];
        }
    }
    else
    {
        *(arg1 + 0x14) |= 0x10;
        rsi = -1;
    }
    
    return rsi;
}

int64_t common_ftell<int64_t>(int64_t* arg1)
{
    int64_t* arg_8 = arg1;
    
    if (!arg1)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return -1;
    }
    
    sub_14000ee60(arg1);
    int64_t result = common_ftell_nolock<int64_t>(arg1);
    sub_14000ee6c(arg1);
    return result;
}

int64_t common_ftell_nolock<int64_t>(int64_t* arg1)
{
    if (arg1)
    {
        int64_t rsi_1 = _fileno(arg1);
        
        if (arg1[2] < 0)
            arg1[2] = 0;
        
        int64_t rax_2 = j_common_lseek<int64_t>(rsi_1, 0, FILE_CURRENT);
        
        if (rax_2 >= 0)
        {
            if (!(*(arg1 + 0x14) & 0xc0))
                return rax_2 - arg1[2];
            
            int64_t rcx_2 = rsi_1 >> 6;
            int64_t result = *arg1 - arg1[1];
            uint64_t rdx_1 = (rsi_1 & 0x3f) * 9;
            rsi_1 = *((&data_140043290)[rcx_2] + (rdx_1 << 3) + 0x39);
            
            if (*(arg1 + 0x14) & 3)
            {
                if (rsi_1 == 1 && *((&data_140043290)[rcx_2] + (rdx_1 << 3) + 0x3d) & 2)
                    return sub_14001c234(arg1, rax_2);
                
                if (*((&data_140043290)[rcx_2] + (rdx_1 << 3) + 0x38) < 0)
                    result += count_newline_bytes(arg1[1], *arg1, rsi_1);
                
                goto label_14001c08f;
            }
            
            if (*(arg1 + 0x14) >> 2 & 1)
            {
            label_14001c08f:
                
                if (!rax_2)
                    return result;
                
                if (*(arg1 + 0x14) & 1)
                    return common_ftell_read_mode_nolock(arg1, rax_2, result);
                
                if (rsi_1 == 1)
                    result u>>= 1;
                
                return result + rax_2;
            }
            
            *_errno() = 0x16;
        }
    }
    else
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return -1;
}

int64_t common_ftell_read_mode_nolock(void* arg1, int64_t arg2, int64_t arg3)
{
    int64_t r12 = _fileno(arg1);
    int64_t rax_2 = r12 >> 6;
    uint64_t r13 = (r12 & 0x3f) * 9;
    int64_t rax_3 = (&data_140043290)[rax_2];
    int64_t rsi;
    rsi = *(rax_3 + (r13 << 3) + 0x39);
    int64_t r15;
    r15 = rsi == 1;
    
    if (!*(arg1 + 0x10))
        return arg2;
    
    int64_t rbp_3 = *(arg1 + 0x10) - *(arg1 + 8) + *arg1;
    int64_t rax_5;
    
    if (*(rax_3 + (r13 << 3) + 0x38) < 0)
    {
        int64_t rdx_1;
        bool cond:0_1;
        
        if (j_common_lseek<int64_t>(r12, 0, FILE_END) != arg2)
        {
            int64_t rax_10 = j_common_lseek<int64_t>(r12, arg2, FILE_BEGIN);
            
            if (rax_10 == -1)
                return rax_10;
            
            rdx_1 = 0x200;
            
            if (rbp_3 > 0x200 || !(*(arg1 + 0x14) >> 6 & 1) || *(arg1 + 0x14) >> 8 & 1)
                rdx_1 = *(arg1 + 0x20);
            
            cond:0_1 = !(*((&data_140043290)[rax_2] + (r13 << 3) + 0x38) & 4);
        }
        else
        {
            int64_t rcx_3 = *(arg1 + 8);
            rdx_1 = count_newline_bytes(rcx_3, rcx_3 + rbp_3, rsi) + rbp_3;
            cond:0_1 = !(*(arg1 + 0x14) >> 5 & 1);
        }
        
        if (!cond:0_1)
        {
            rsi -= 1;
            int64_t rdi;
            rdi = rsi <= 1;
            rdx_1 += rdi + 1;
        }
        
        rax_5 = rdx_1;
    }
    else
        rax_5 = rbp_3;
    
    return arg3 / (r15 + 1) - rax_5 / (r15 + 1) + arg2;
}

int64_t sub_14001c234(int64_t* arg1, int64_t arg2)
{
    __chkstk(0x1050);
    void var_1078;
    int64_t rax_1 = __security_cookie ^ &var_1078;
    int64_t rdi = 0;
    int64_t r14 = _fileno(arg1);
    int64_t result;
    
    if (arg1[2])
    {
        int64_t rax_5;
        int64_t rdx;
        rdx = HIGHQ(*arg1 - arg1[1]);
        rax_5 = LOWQ(*arg1 - arg1[1]);
        int64_t rax_7 = (rax_5 - rdx) >> 1;
        int64_t rbx_2 = r14 >> 6;
        uint64_t r15_1 = (r14 & 0x3f) * 9;
        int64_t rax_8 = j_common_lseek<int64_t>(r14, 
            *((&data_140043290)[rbx_2] + (r15_1 << 3) + 0x30), FILE_BEGIN);
        int64_t rcx_3 = (&data_140043290)[rbx_2];
        uint32_t numberOfBytesRead[0x4];
        uint8_t buffer[0x1000];
        
        if (rax_8 != *(rcx_3 + (r15_1 << 3) + 0x30))
            result = -1;
        else if (!ReadFile(*(rcx_3 + (r15_1 << 3) + 0x28), &buffer, 0x1000, &numberOfBytesRead, 
                nullptr))
            result = -1;
        else if (j_common_lseek<int64_t>(r14, arg2, FILE_BEGIN) < 0)
            result = -1;
        else
        {
            uint64_t rax_11 = numberOfBytesRead[0];
            
            if (rax_7 > rax_11)
                result = -1;
            else
            {
                void* rdx_5 = &buffer[rax_11];
                uint8_t (* rcx_6)[0x1000] = &buffer;
                
                if (rax_7)
                {
                    while (rcx_6 < rdx_5)
                    {
                        if (*rcx_6 != 0xd)
                            rcx_6 = &(*rcx_6)[*(*rcx_6 + 0x140041210)];
                        else if (rcx_6 < rdx_5 - 1 && (*rcx_6)[1] == 0xa)
                            rcx_6 = &(*rcx_6)[1];
                        
                        rdi += 1;
                        rcx_6 = &(*rcx_6)[1];
                        
                        if (rdi == rax_7)
                            break;
                    }
                }
                
                result = rax_8 + rcx_6 - &buffer;
            }
        }
    }
    else
        result = arg2;
    
    __security_check_cookie(rax_1 ^ &var_1078);
    return result;
}

int64_t count_newline_bytes(int64_t arg1, int64_t arg2, char arg3)
{
    int64_t r9 = arg1;
    
    if (arg3 - 1 > 1)
    {
        int64_t result = 0;
        int64_t i = arg2 - r9;
        int64_t r10_1 = r9;
        
        if (r9 > arg2)
            i = 0;
        
        if (i)
        {
            do
            {
                int64_t result_1 = result + 1;
                
                if (*r10_1 != 0xa)
                    result_1 = result;
                
                r10_1 += 1;
                result = result_1;
            } while (r10_1 - r9 != i);
        }
        
        return result;
    }
    
    int64_t r8 = 0;
    int64_t r10 = 0;
    uint64_t rcx_3 = (arg2 - r9 + 1) >> 1;
    
    if (r9 > arg2)
        rcx_3 = 0;
    
    if (rcx_3)
    {
        do
        {
            bool cond:1_1 = *r9 != 0xa;
            int64_t rax_1 = r8 + 1;
            r9 += 2;
            
            if (cond:1_1)
                rax_1 = r8;
            
            r10 += 1;
            r8 = rax_1;
        } while (r10 != rcx_3);
    }
    
    return r8 * 2;
}

int64_t j_common_ftell<int64_t>(int64_t* arg1)
{
    /* tailcall */
    return common_ftell<int64_t>(arg1);
}

int64_t j_common_ftell_nolock<int64_t>(int64_t* arg1)
{
    /* tailcall */
    return common_ftell_nolock<int64_t>(arg1);
}

uint64_t write_buffer_nolock<char>(char arg1, int32_t* arg2)
{
    char arg_8 = arg1;
    int64_t r9 = _fileno(arg2);
    uint64_t result;
    
    if (!(arg2[5] & 0xc0))
        result = _write(r9, &arg_8, 1) == 1;
    else
    {
        int32_t rsi_1 = 0;
        int16_t* rdx = *(arg2 + 8);
        int32_t rdi_2 = *arg2 - arg2[2];
        *arg2 = rdx + 1;
        arg2[4] = arg2[8] - 1;
        
        if (rdi_2 <= 0)
        {
            int64_t rdx_1;
            
            if (r9 + 2 <= 1)
                rdx_1 = &data_140041050;
            else
                rdx_1 = (&data_140043290)[r9 >> 6] + (r9 & 0x3f) * 0x48;
            
            if (!(*(rdx_1 + 0x38) & 0x20))
                goto label_14001c4a0;
            
            if (j_common_lseek<int64_t>(r9, 0, FILE_END) != -1)
                goto label_14001c4a0;
            
            arg2[5] |= 0x10;
            result = 1;
        }
        else
        {
            rsi_1 = _write(r9, rdx, rdi_2);
        label_14001c4a0:
            result = arg_8;
            **(arg2 + 8) = result;
            result = rsi_1 == rdi_2;
        }
    }
    
    return result;
}

HANDLE stream_is_at_end_of_file_nolock(int64_t* arg1)
{
    HANDLE hFile;
    
    if (*(arg1 + 0x14) >> 3 & 1)
        hFile = 1;
    else if (!(*(arg1 + 0x14) & 0xc0) || *arg1 != arg1[1])
    {
        hFile = _get_osfhandle(arg1[3]);
        int64_t newFilePointer;
        
        if (hFile == -1)
            hFile = 0;
        else
        {
            int64_t fileSize;
            
            if (!SetFilePointerEx(hFile, 0, &newFilePointer, FILE_CURRENT))
                hFile = 0;
            else if (!GetFileSizeEx(hFile, &fileSize))
                hFile = 0;
            else
                hFile = newFilePointer == fileSize;
        }
    }
    else
        hFile = 0;
    
    return hFile;
}

uint64_t __acrt_stdio_flush_and_write_narrow_nolock(char arg1, int64_t* arg2)
{
    int32_t rax = _fileno(arg2);
    
    if (!(*(arg2 + 0x14) & 6))
        *_errno() = 9;
    else if (!(*(arg2 + 0x14) >> 0xc & 1))
    {
        if (!(*(arg2 + 0x14) & 1))
            goto label_14001c61a;
        
        char rax_7 = stream_is_at_end_of_file_nolock(arg2);
        arg2[2] = 0;
        
        if (rax_7)
        {
            *arg2 = arg2[1];
            *(arg2 + 0x14) &= 0xfffffffe;
        label_14001c61a:
            *(arg2 + 0x14) |= 2;
            *(arg2 + 0x14) &= 0xfffffff7;
            arg2[2] = 0;
            
            if (!(*(arg2 + 0x14) & 0x4c0))
            {
                void* rax_10 = sub_14000eda8(1);
                void* rax_11;
                
                if (arg2 != rax_10)
                    rax_11 = sub_14000eda8(2);
                
                int32_t rax_12;
                
                if (arg2 == rax_10 || arg2 == rax_11)
                    rax_12 = _isatty(rax);
                
                if ((arg2 != rax_10 && arg2 != rax_11) || !rax_12)
                    __acrt_stdio_allocate_buffer_nolock(arg2);
            }
            
            if (write_buffer_nolock<char>(arg1, arg2))
                return arg1;
        }
    }
    else
        *_errno() = 0x22;
    
    *(arg2 + 0x14) |= 0x10;
    return 0xffffffff;
}

uint64_t translate_text_mode_nolock<char>(int32_t arg1, char* arg2, int64_t arg3)
{
    int64_t r13 = arg1;
    int64_t r15_1 = r13 >> 6;
    uint64_t rsi = (r13 & 0x3f) * 9;
    int64_t rax_2 = (&data_140043290)[r15_1];
    HANDLE hFile = *(rax_2 + (rsi << 3) + 0x28);
    HANDLE hFile_1 = hFile;
    
    if (!arg3 || *arg2 != 0xa)
        *(rax_2 + (rsi << 3) + 0x38) &= 0xfb;
    else
        *(rax_2 + (rsi << 3) + 0x38) |= 4;
    
    void* rbp = &arg2[arg3];
    char* r14 = arg2;
    char* rbx = arg2;
    
    if (arg2 < rbp)
    {
        do
        {
            rax_2 = *r14;
            
            if (rax_2 == 0x1a)
            {
                int64_t rcx_1 = (&data_140043290)[r15_1];
                rax_2 = *(rcx_1 + (rsi << 3) + 0x38);
                
                if (rax_2 & 0x40)
                {
                    *rbx = 0x1a;
                    rbx = &rbx[1];
                }
                else
                {
                    rax_2 |= 2;
                    *(rcx_1 + (rsi << 3) + 0x38) = rax_2;
                }
                
                break;
            }
            
            char* rdx = &r14[1];
            
            if (rax_2 == 0xd)
            {
                if (rdx >= rbp)
                {
                    r14 = rdx;
                    uint8_t buffer;
                    uint32_t numberOfBytesRead;
                    
                    if (!ReadFile(hFile, &buffer, 1, &numberOfBytesRead, nullptr)
                        || !numberOfBytesRead)
                    {
                        *rbx = 0xd;
                        rbx = &rbx[1];
                    }
                    else
                    {
                        int64_t rdx_3 = r13 >> 6;
                        uint64_t r9_2 = (r13 & 0x3f) * 9;
                        
                        if (*((&data_140043290)[rdx_3] + (r9_2 << 3) + 0x38) & 0x48)
                        {
                            uint8_t buffer_1 = buffer;
                            
                            if (buffer_1 != 0xa)
                            {
                                *rbx = 0xd;
                                *((&data_140043290)[rdx_3] + (r9_2 << 3) + 0x3a) = buffer_1;
                                rbx = &rbx[1];
                            }
                            else
                            {
                                *rbx = 0xa;
                                rbx = &rbx[1];
                            }
                        }
                        else if (buffer != 0xa || rbx != arg2)
                        {
                            j_common_lseek_nolock<int64_t>(r13, -1, FILE_CURRENT);
                            
                            if (buffer != 0xa)
                            {
                                *rbx = 0xd;
                                rbx = &rbx[1];
                            }
                        }
                        else
                        {
                            *rbx = 0xa;
                            rbx = &rbx[1];
                        }
                    }
                }
                else
                {
                    int64_t rax_3;
                    rax_3 = *rdx == 0xa;
                    r14 = &r14[rax_3 + 1];
                    rax_2 = 0xa;
                    
                    if (*rdx != 0xa)
                        rax_2 = 0xd;
                    
                    *rbx = rax_2;
                    rbx = &rbx[1];
                }
                
                hFile = hFile_1;
            }
            else
            {
                *rbx = rax_2;
                r14 = rdx;
                rbx = &rbx[1];
            }
        } while (r14 < rbp);
    }
    
    return rbx - arg2;
}

uint64_t translate_text_mode_nolock<wchar_t>(int32_t arg1, int16_t* arg2, int64_t arg3)
{
    int64_t r13 = arg1;
    int64_t r15_1 = r13 >> 6;
    uint64_t rdi = (r13 & 0x3f) * 9;
    int64_t rax_2 = (&data_140043290)[r15_1];
    HANDLE hFile = *(rax_2 + (rdi << 3) + 0x28);
    HANDLE hFile_1 = hFile;
    
    if (!arg3 || *arg2 != 0xa)
        *(rax_2 + (rdi << 3) + 0x38) &= 0xfb;
    else
        *(rax_2 + (rdi << 3) + 0x38) |= 4;
    
    void* rbp = &arg2[arg3];
    int16_t* r14 = arg2;
    int16_t* rbx = arg2;
    
    if (arg2 < rbp)
    {
        do
        {
            int16_t rax_3 = *r14;
            
            if (rax_3 == 0x1a)
            {
                int64_t rcx_2 = (&data_140043290)[r15_1];
                char rax_11 = *(rcx_2 + (rdi << 3) + 0x38);
                
                if (rax_11 & 0x40)
                {
                    *rbx = 0x1a;
                    rbx = &rbx[1];
                }
                else
                    *(rcx_2 + (rdi << 3) + 0x38) = rax_11 | 2;
                
                break;
            }
            
            int16_t* rdx = &r14[1];
            
            if (rax_3 == 0xd)
            {
                if (rdx >= rbp)
                {
                    r14 = rdx;
                    int16_t buffer;
                    uint32_t numberOfBytesRead;
                    
                    if (!ReadFile(hFile, &buffer, 2, &numberOfBytesRead, nullptr)
                        || !numberOfBytesRead)
                    {
                        *rbx = 0xd;
                        rbx = &rbx[1];
                    }
                    else
                    {
                        int64_t r9_3 = r13 >> 6;
                        uint64_t r10_1 = (r13 & 0x3f) * 9;
                        
                        if (*((&data_140043290)[r9_3] + (r10_1 << 3) + 0x38) & 0x48)
                        {
                            int16_t buffer_1 = buffer;
                            
                            if (buffer_1 != 0xa)
                            {
                                int16_t buffer_2 = buffer_1;
                                *rbx = 0xd;
                                
                                for (int64_t i = 0; i < 2; )
                                {
                                    buffer_1 = *(&buffer_2 + i);
                                    int64_t rdx_2 = i + (r10_1 << 3);
                                    i += 1;
                                    *(rdx_2 + (&data_140043290)[r9_3] + 0x3a) = buffer_1;
                                }
                                
                                *((&data_140043290)[r9_3] + (r10_1 << 3) + 0x3c) = 0xa;
                            }
                            else
                                *rbx = 0xa;
                            
                            rbx = &rbx[1];
                        }
                        else if (buffer != 0xa || rbx != arg2)
                        {
                            j_common_lseek_nolock<int64_t>(r13, -2, FILE_CURRENT);
                            
                            if (buffer != 0xa)
                            {
                                *rbx = 0xd;
                                rbx = &rbx[1];
                            }
                        }
                        else
                        {
                            *rbx = 0xa;
                            rbx = &rbx[1];
                        }
                    }
                }
                else
                {
                    int64_t rax_4 = 4;
                    
                    if (*rdx != 0xa)
                        rax_4 = 2;
                    
                    r14 += rax_4;
                    int16_t rax_5 = 0xa;
                    
                    if (*rdx != 0xa)
                        rax_5 = 0xd;
                    
                    *rbx = rax_5;
                    rbx = &rbx[1];
                }
                
                hFile = hFile_1;
            }
            else
            {
                *rbx = rax_3;
                r14 = rdx;
                rbx = &rbx[1];
            }
        } while (r14 < rbp);
    }
    
    return ((rbx - arg2) >> 1) * 2;
}

int64_t sub_14001cac4(int32_t arg1, char* arg2, int64_t arg3, int32_t arg4)
{
    int64_t r14 = arg1;
    int32_t result = translate_text_mode_nolock<char>(r14, arg2, arg3);
    int64_t result_1 = result;
    
    if (!result)
        return result;
    
    int64_t rsi_2 = r14 >> 6;
    uint64_t rdi_1 = (r14 & 0x3f) * 9;
    int64_t r9_1 = (&data_140043290)[rsi_2];
    
    if (!*(r9_1 + (rdi_1 << 3) + 0x39))
        return result_1;
    
    char* rcx_1 = &arg2[result_1];
    char* rbx_1 = &rcx_1[-1];
    
    if (*rbx_1 < 0)
    {
        int32_t rdx = 1;
        
        while (!*(*rbx_1 + 0x140041210))
        {
            if (rdx > 4)
                break;
            
            if (rbx_1 < arg2)
                break;
            
            rbx_1 -= 1;
            rdx += 1;
        }
        
        uint64_t rcx_2 = *rbx_1;
        int32_t rax_3 = *(rcx_2 + 0x140041210);
        
        if (rax_3)
        {
            if (rax_3 + 1 == rdx)
                rbx_1 = &rbx_1[rdx];
            else if (!(*(r9_1 + (rdi_1 << 3) + 0x38) & 0x48))
                j_common_lseek_nolock<int64_t>(r14, -(rdx), FILE_CURRENT);
            else
            {
                char* rbx_2 = &rbx_1[1];
                *(r9_1 + (rdi_1 << 3) + 0x3a) = rcx_2;
                int32_t rax_5;
                
                if (rdx >= 2)
                {
                    rax_5 = *rbx_2;
                    rbx_2 = &rbx_2[1];
                    *((&data_140043290)[rsi_2] + (rdi_1 << 3) + 0x3b) = rax_5;
                }
                
                if (rdx == 3)
                {
                    rax_5 = *rbx_2;
                    rbx_2 = &rbx_2[1];
                    *((&data_140043290)[rsi_2] + (rdi_1 << 3) + 0x3c) = rax_5;
                }
                
                rbx_1 = rbx_2 - rdx;
            }
            
            goto label_14001cbef;
        }
        
        *_errno() = 0x2a;
    }
    else
    {
        rbx_1 = rcx_1;
    label_14001cbef:
        int32_t rbx_3 = rbx_1 - arg2;
        int32_t var_20_1 = arg4;
        int64_t r9;
        int64_t var_28_1 = r9;
        int32_t rax_9 = __acrt_MultiByteToWideChar(0xfde9, 0, arg2, rbx_3);
        
        if (rax_9)
        {
            int64_t rcx_7 = (&data_140043290)[rsi_2];
            int32_t rax_11 = rax_9 - rbx_3;
            *(rcx_7 + (rdi_1 << 3) + 0x3d) &= 0xfd;
            char rax_12 = -(rax_11);
            *(rcx_7 + (rdi_1 << 3) + 0x3d) |= (rax_12 - rax_12) & 2;
            return rax_9 * 2;
        }
        
        __acrt_errno_map_os_error(GetLastError());
    }
    
    return -1;
}

uint64_t _read(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t arg_8 = arg1;
    int64_t rdi = arg1;
    
    if (rdi != 0xfffffffe)
    {
        uint64_t r13_1;
        int64_t r15_2;
        
        if (arg1 >= 0 && rdi < data_140043690)
        {
            r15_2 = rdi >> 6;
            r13_1 = (rdi & 0x3f) * 9;
        }
        
        if (arg1 < 0 || rdi >= data_140043690
            || !(*((&data_140043290)[r15_2] + (r13_1 << 3) + 0x38) & 1))
        {
            *__doserrno() = 0;
            *_errno() = 9;
        }
        else
        {
            if (arg3 <= 0x7fffffff)
            {
                sub_140021020(rdi);
                int32_t rbx_1 = -1;
                
                if (*((&data_140043290)[r15_2] + (r13_1 << 3) + 0x38) & 1)
                    rbx_1 = _read_nolock(rdi, arg2, arg3);
                else
                {
                    *_errno() = 9;
                    *__doserrno() = 0;
                }
                
                sub_140021048(rdi);
                return rbx_1;
            }
            
            *__doserrno() = 0;
            *_errno() = 0x16;
        }
        
        _invalid_parameter_noinfo();
    }
    else
    {
        *__doserrno() = 0;
        *_errno() = 9;
    }
    
    return 0xffffffff;
}

uint64_t _read_nolock(int32_t arg1, char* arg2, int32_t arg3)
{
    int64_t r12 = arg1;
    uint64_t r13 = arg3;
    
    if (r12 != 0xfffffffe)
    {
        int64_t var_58_1;
        char var_50_1;
        uint64_t rax_4;
        int64_t rcx;
        int64_t r8_1;
        uint64_t r14_1;
        
        if (arg1 >= 0 && r12 < data_140043690)
        {
            var_50_1 = 1;
            r8_1 = r12 >> 6;
            var_58_1 = r8_1;
            r14_1 = (r12 & 0x3f) * 9;
            rcx = (&data_140043290)[r8_1];
            rax_4 = *(rcx + (r14_1 << 3) + 0x38);
        }
        
        if (arg1 < 0 || r12 >= data_140043690 || !(1 & rax_4))
        {
            *__doserrno() = 0;
            *_errno() = 9;
        }
        else
        {
            if (r13 <= 0x7fffffff)
            {
                if (!r13 || rax_4 & 2)
                    return 0;
                
                if (arg2)
                {
                    int32_t r11_1 = *(rcx + (r14_1 << 3) + 0x39);
                    char* lpBuffer_2 = nullptr;
                    HANDLE var_60_1 = *(rcx + (r14_1 << 3) + 0x28);
                    char arg_8 = r11_1;
                    int32_t rdi_2;
                    uint64_t rax_7;
                    uint32_t nNumberOfBytesToRead;
                    char* lpBuffer;
                    
                    if (r11_1 != 1)
                    {
                        if (r11_1 == 2 && !(1 & ~r13))
                            goto label_14001ce7e;
                        
                        nNumberOfBytesToRead = r13;
                        lpBuffer = arg2;
                    label_14001cf31:
                        int32_t rdi_1 = 0;
                        char* lpBuffer_1 = lpBuffer;
                        
                        if (*(rcx + (r14_1 << 3) + 0x38) & 0x48)
                        {
                            rax_7 = *(rcx + (r14_1 << 3) + 0x3a);
                            
                            if (rax_7 != 0xa && nNumberOfBytesToRead)
                            {
                                *lpBuffer = rax_7;
                                nNumberOfBytesToRead -= 1;
                                lpBuffer = &lpBuffer[1];
                                rdi_1 = 1;
                                *((&data_140043290)[r8_1] + (r14_1 << 3) + 0x3a) = 0xa;
                                
                                if (r11_1)
                                {
                                    rcx = *((&data_140043290)[r8_1] + (r14_1 << 3) + 0x3b);
                                    
                                    if (rcx != 0xa && nNumberOfBytesToRead)
                                    {
                                        *lpBuffer = rcx;
                                        rdi_1 = 2;
                                        lpBuffer = &lpBuffer[1];
                                        nNumberOfBytesToRead -= 1;
                                        *((&data_140043290)[r8_1] + (r14_1 << 3) + 0x3b) = 0xa;
                                        
                                        if (r11_1 == 1)
                                        {
                                            rcx = *((&data_140043290)[r8_1] + (r14_1 << 3) + 0x3c);
                                            
                                            if (rcx != 0xa && nNumberOfBytesToRead)
                                            {
                                                *lpBuffer = rcx;
                                                rdi_1 = 3;
                                                lpBuffer = &lpBuffer[1];
                                                nNumberOfBytesToRead -= 1;
                                                *((&data_140043290)[r8_1] + (r14_1 << 3) + 0x3c) =
                                                    0xa;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        
                        uint32_t arg_20;
                        
                        if (!_isatty(r12)
                            || *((&data_140043290)[var_58_1] + (r14_1 << 3) + 0x38) >= 0)
                        {
                        label_14001d04e:
                            var_50_1 = 0;
                        label_14001d06b:
                            
                            if (!
                                ReadFile(var_60_1, lpBuffer, nNumberOfBytesToRead, &arg_20, nullptr)
                                || arg_20 > r13)
                            {
                                enum WIN32_ERROR rax_26 = GetLastError();
                                
                                if (rax_26 == ERROR_ACCESS_DENIED)
                                {
                                    *_errno() = 9;
                                    *__doserrno() = 5;
                                    rdi_2 = -1;
                                }
                                else if (rax_26 != ERROR_BROKEN_PIPE)
                                {
                                    __acrt_errno_map_os_error(rax_26);
                                    rdi_2 = -1;
                                }
                                else
                                    rdi_2 = 0;
                            }
                            else
                            {
                                rdi_2 = rdi_1 + arg_20;
                            label_14001d09e:
                                
                                if (*((&data_140043290)[var_58_1] + (r14_1 << 3) + 0x38) < 0)
                                {
                                    int64_t r8_4 = rdi_2;
                                    
                                    if (arg_8 == 2)
                                    {
                                        uint64_t r8_5 = r8_4 >> 1;
                                        
                                        if (!var_50_1)
                                            rdi_2 = translate_text_mode_nolock<wchar_t>(r12, 
                                                lpBuffer_1, r8_5);
                                        else
                                        {
                                            char* lpBuffer_3 = lpBuffer_1;
                                            char* lpBuffer_4 = lpBuffer_1;
                                            void* r9_4 = &lpBuffer_1[r8_5 << 1];
                                            
                                            if (lpBuffer_1 < r9_4)
                                            {
                                                do
                                                {
                                                    int16_t rcx_11 = *lpBuffer_3;
                                                    
                                                    if (rcx_11 == 0x1a)
                                                    {
                                                        int64_t rax_34 =
                                                            (&data_140043290)[var_58_1];
                                                        *(rax_34 + (r14_1 << 3) + 0x38) |= 2;
                                                        break;
                                                    }
                                                    
                                                    int64_t r8_7;
                                                    
                                                    if (rcx_11 != 0xd || &lpBuffer_3[2] >= r9_4
                                                            || *(lpBuffer_3 + 2) != 0xa)
                                                        r8_7 = 2;
                                                    else
                                                    {
                                                        rcx_11 = 0xa;
                                                        r8_7 = 4;
                                                    }
                                                    
                                                    lpBuffer_3 = &lpBuffer_3[r8_7];
                                                    *lpBuffer_4 = rcx_11;
                                                    lpBuffer_4 = &lpBuffer_4[2];
                                                } while (lpBuffer_3 < r9_4);
                                            }
                                            
                                            rdi_2 = ((lpBuffer_4 - lpBuffer_1) >> 1) * 2;
                                        }
                                    }
                                    else
                                    {
                                        uint64_t var_78_1 = r13 >> 1;
                                        rdi_2 = sub_14001cac4(r12, lpBuffer, r8_4, arg2);
                                    }
                                }
                            }
                        }
                        else
                        {
                            enum CONSOLE_MODE mode;
                            
                            if (!GetConsoleMode(var_60_1, &mode))
                                goto label_14001d04e;
                            
                            if (arg_8 != 2)
                                goto label_14001d06b;
                            
                            if (ReadConsoleW(var_60_1, lpBuffer, nNumberOfBytesToRead >> 1, 
                                &arg_20, nullptr))
                            {
                                rdi_2 = rdi_1 + (arg_20 << 1);
                                goto label_14001d09e;
                            }
                            
                            __acrt_errno_map_os_error(GetLastError());
                            rdi_2 = -1;
                        }
                    }
                    else if (!(1 & ~r13))
                    {
                    label_14001ce7e:
                        *__doserrno() = 0;
                        *_errno() = 0x16;
                        _invalid_parameter_noinfo();
                        rdi_2 = -1;
                    }
                    else
                    {
                        nNumberOfBytesToRead = r13 >> 1;
                        
                        if (nNumberOfBytesToRead < 4)
                            nNumberOfBytesToRead = 4;
                        
                        lpBuffer_2 = _malloc_base(nNumberOfBytesToRead);
                        _free_base(0);
                        _free_base(0);
                        lpBuffer = lpBuffer_2;
                        
                        if (lpBuffer_2)
                        {
                            rax_7 = j_common_lseek_nolock<int64_t>(r12, 0, FILE_CURRENT);
                            r8_1 = var_58_1;
                            r11_1 = arg_8;
                            *((&data_140043290)[r8_1] + (r14_1 << 3) + 0x30) = rax_7;
                            rcx = (&data_140043290)[r8_1];
                            goto label_14001cf31;
                        }
                        
                        *_errno() = 0xc;
                        *__doserrno() = 8;
                        rdi_2 = -1;
                    }
                    _free_base(lpBuffer_2);
                    return rdi_2;
                }
            }
            
            *__doserrno() = 0;
            *_errno() = 0x16;
        }
        
        _invalid_parameter_noinfo();
    }
    else
    {
        *__doserrno() = 0;
        *_errno() = 9;
    }
    
    return 0xffffffff;
}

int64_t common_lseek<int64_t>(int32_t arg1, int64_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    int32_t arg_8 = arg1;
    int64_t rbx = arg1;
    
    if (rbx != 0xfffffffe)
    {
        if (arg1 >= 0 && rbx < data_140043690)
        {
            int64_t rsi_2 = rbx >> 6;
            uint64_t r12_1 = (rbx & 0x3f) * 9;
            
            if (*((&data_140043290)[rsi_2] + (r12_1 << 3) + 0x38) & 1)
            {
                sub_140021020(rbx);
                int64_t result = -1;
                
                if (*((&data_140043290)[rsi_2] + (r12_1 << 3) + 0x38) & 1)
                    result = common_lseek_nolock<int64_t>(rbx, arg2, arg3);
                else
                {
                    *_errno() = 9;
                    *__doserrno() = 0;
                }
                
                sub_140021048(rbx);
                return result;
            }
        }
        
        *__doserrno() = 0;
        *_errno() = 9;
        _invalid_parameter_noinfo();
    }
    else
    {
        *__doserrno() = 0;
        *_errno() = 9;
    }
    
    return -1;
}

int64_t common_lseek_nolock<int64_t>(int32_t arg1, int64_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    int64_t rbx = arg1;
    HANDLE hFile = _get_osfhandle(rbx);
    int64_t newFilePointer;
    
    if (hFile != -1)
    {
        if (SetFilePointerEx(hFile, arg2, &newFilePointer, arg3))
        {
            int64_t result = newFilePointer;
            
            if (result != -1)
            {
                uint64_t rdx_3 = (rbx & 0x3f) * 9;
                int64_t rcx_5 = (&data_140043290)[rbx >> 6];
                *(rcx_5 + (rdx_3 << 3) + 0x38) &= 0xfd;
                return result;
            }
        }
        else
            __acrt_errno_map_os_error(GetLastError());
    }
    else
        *_errno() = 9;
    return -1;
}

int64_t j_common_lseek<int64_t>(int32_t arg1, int64_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    /* tailcall */
    return common_lseek<int64_t>(arg1, arg2, arg3);
}

int64_t j_common_lseek_nolock<int64_t>(int32_t arg1, int64_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    /* tailcall */
    return common_lseek_nolock<int64_t>(arg1, arg2, arg3);
}

int64_t __acrt_stdio_allocate_buffer_nolock(int64_t* arg1)
{
    data_140042cc0 += 1;
    int32_t rdi = 0x1000;
    arg1[1] = _malloc_base(0x1000);
    _free_base(0);
    
    if (!arg1[1])
    {
        *(arg1 + 0x14) |= 0x400;
        rdi = 2;
        arg1[1] = arg1 + 0x1c;
    }
    else
        *(arg1 + 0x14) |= 0x40;
    
    arg1[4] = rdi;
    int64_t result = arg1[1];
    arg1[2] = 0;
    *arg1 = result;
    return result;
}

int64_t _mbstowcs_l_helper(int16_t* arg1, char* arg2, int64_t arg3, int128_t* arg4)
{
    char* arg_10 = arg2;
    int16_t* rdi = arg1;
    int64_t result = 0;
    
    if (arg1)
    {
        if (!arg3)
            return 0;
        
        *arg1 = 0;
    }
    
    if (!arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return -1;
    }
    
    void* var_48;
    _LocaleUpdate::_LocaleUpdate(&var_48, arg4);
    void* var_40;
    void* rax_2 = var_40;
    uint32_t rcx_1 = *(rax_2 + 0xc);
    
    if (rcx_1 == 0xfde9)
    {
        int64_t arg_8 = 0;
        result = __crt_mbstring::__mbsrtowcs_utf8(rdi, &arg_10, arg3, &arg_8);
    }
    else if (!rdi)
    {
        result = -1;
        
        if (*(rax_2 + 0x138))
        {
            int32_t var_50_3 = 0;
            int64_t var_58_3 = 0;
            int32_t rax_11 = __acrt_MultiByteToWideChar(rcx_1, 
                MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg_10, 0xffffffff);
            
            if (rax_11)
                result = rax_11 - 1;
            else
                *_errno() = 0x2a;
        }
        else
        {
            do
                result += 1;
             while (arg_10[result]);
        }
    }
    else if (*(rax_2 + 0x138))
    {
        result = -1;
        int32_t var_50_1 = arg3;
        int16_t* var_58_1 = rdi;
        int32_t rax_5 = __acrt_MultiByteToWideChar(rcx_1, MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, 
            arg_10, 0xffffffff);
        
        if (rax_5)
            result = rax_5 - 1;
        else
        {
            enum WIN32_ERROR rax_6 = GetLastError();
            int32_t result_1;
            
            if (rax_6 == ERROR_INSUFFICIENT_BUFFER)
            {
                char* r8_2 = arg_10;
                int32_t r15_1 = arg3;
                char* rsi_1 = r8_2;
                
                if (arg3)
                {
                    while (true)
                    {
                        r15_1 -= 1;
                        
                        if (*rsi_1)
                        {
                            if (_isleadbyte_l(*rsi_1, &var_40))
                            {
                                rsi_1 = &rsi_1[1];
                                
                                if (!*rsi_1)
                                    goto label_14001d54d;
                            }
                            
                            rsi_1 = &rsi_1[1];
                            
                            if (r15_1)
                                continue;
                        }
                        
                        r8_2 = arg_10;
                        break;
                    }
                }
                
                int32_t var_50_2 = arg3;
                int16_t* var_58_2 = rdi;
                result_1 =
                    __acrt_MultiByteToWideChar(*(var_40 + 0xc), MB_PRECOMPOSED, r8_2, rsi_1 - r8_2);
            }
            
            if (rax_6 == ERROR_INSUFFICIENT_BUFFER && result_1)
                result = result_1;
            else
            {
            label_14001d54d:
                *_errno() = 0x2a;
                *rdi = 0;
            }
        }
    }
    else if (arg3)
    {
        char* rcx_3 = arg_10;
        
        do
        {
            *rdi = rcx_3[result];
            
            if (!rcx_3[result])
                break;
            
            result += 1;
            rdi = &rdi[1];
        } while (result < arg3);
    }
    
    char var_30;
    
    if (var_30)
    {
        void* rcx_8 = var_48;
        *(rcx_8 + 0x3a8) &= 0xfffffffd;
    }
    
    return result;
}

uint64_t _mbstowcs_s_l(int64_t* arg1, int16_t* arg2, int64_t arg3, char* arg4, int64_t arg5, int128_t* arg6)
{
    int32_t rbx = 0;
    
    if (!arg2)
    {
        if (arg3)
            goto label_14001d662;
        
        goto label_14001d614;
    }
    
    if (arg3)
    {
    label_14001d614:
        
        if (arg2)
            *arg2 = 0;
        
        if (arg1)
            *arg1 = 0;
        
        void* var_38;
        _LocaleUpdate::_LocaleUpdate(&var_38, arg6);
        int64_t r8 = arg5;
        
        if (r8 > arg3)
            r8 = arg3;
        
        if (r8 <= 0x7fffffff)
        {
            void var_30;
            int64_t rax_2 = _mbstowcs_l_helper(arg2, arg4, r8, &var_30);
            
            if (rax_2 != -1)
            {
                int64_t rax_4 = rax_2 + 1;
                
                if (!arg2)
                    goto label_14001d6d8;
                
                if (rax_4 <= arg3)
                    goto label_14001d6d2;
                
                if (arg5 == -1)
                {
                    rax_4 = arg3;
                    rbx = 0x50;
                label_14001d6d2:
                    arg2[rax_4 - 1] = 0;
                label_14001d6d8:
                    
                    if (arg1)
                        *arg1 = rax_4;
                }
                else
                {
                    *arg2 = 0;
                    rbx = 0x22;
                    *_errno() = rbx;
                    _invalid_parameter_noinfo();
                }
            }
            else
            {
                if (arg2)
                    *arg2 = 0;
                
                rbx = *_errno();
            }
        }
        else
        {
            rbx = 0x16;
            *_errno() = rbx;
            _invalid_parameter_noinfo();
        }
        
        char var_20;
        
        if (var_20)
        {
            void* rcx_2 = var_38;
            *(rcx_2 + 0x3a8) &= 0xfffffffd;
        }
    }
    else
    {
    label_14001d662:
        rbx = 0x16;
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    
    return rbx;
}

uint64_t mbstowcs_s(int64_t* arg1, int16_t* arg2, int64_t arg3, char* arg4, int64_t arg5)
{
    return _mbstowcs_s_l(arg1, arg2, arg3, arg4, arg5, nullptr);
}

void* _wcstombs_l_helper(char* arg1, int16_t* arg2, void* arg3, int128_t* arg4)
{
    int64_t var_50 = -2;
    void var_c8;
    int64_t rax_1 = __security_cookie ^ &var_c8;
    void* rsi = arg3;
    int16_t* var_80 = arg2;
    void* result_3 = nullptr;
    int32_t var_88 = 0;
    void* result;
    
    if (arg1 && !arg3)
        result = nullptr;
    else if (arg2)
    {
        void* var_70;
        _LocaleUpdate::_LocaleUpdate(&var_70, arg4);
        uint64_t var_68;
        int32_t r10_1 = *(var_68 + 0xc);
        void* result_1;
        
        if (r10_1 == 0xfde9)
        {
            int64_t var_78 = 0;
            result_3 = __crt_mbstring::__wcsrtombs_utf8(arg1, &var_80, rsi, &var_78);
        labelid_7:
            result_1 = result_3;
        }
        else
        {
            int32_t* rax_12;
            
            if (!arg1)
            {
                if (*(var_68 + 0x138))
                {
                    int32_t* var_90_4 = &var_88;
                    int64_t var_98_4 = 0;
                    result_3 = -ffffffffffffffff;
                    int32_t rax_11 = __acrt_WideCharToMultiByte(r10_1, 0, var_80, 0xffffffff, 0, 0);
                    
                    if (!rax_11 || var_88)
                    {
                    label_14001da57:
                        rax_12 = _errno();
                    label_14001da5c:
                        *rax_12 = 0x2a;
                    labelid_7:
                        result_1 = result_3;
                    }
                    else
                        result_1 = rax_11 - 1;
                }
                else
                {
                    result_1 = nullptr;
                    int16_t* rcx_9 = var_80;
                    
                    for (int16_t i = *rcx_9; i; i = *rcx_9)
                    {
                        if (i > 0xff)
                        {
                            *_errno() = 0x2a;
                            result_1 = -ffffffffffffffff;
                            break;
                        }
                        
                        result_1 += 1;
                        rcx_9 = &rcx_9[1];
                    }
                }
            }
            else if (*(var_68 + 0x138))
            {
                int16_t* r8_1 = var_80;
                
                if (*(var_68 + 8) != 1)
                {
                    int32_t* var_90_2 = &var_88;
                    int64_t var_98_2 = 0;
                    result_3 = -ffffffffffffffff;
                    int32_t result_2 =
                        __acrt_WideCharToMultiByte(r10_1, 0, r8_1, 0xffffffff, arg1, rsi);
                    result_1 = result_2;
                    
                    if (!result_2)
                    {
                        if (var_88)
                            goto label_14001da57;
                        
                        enum WIN32_ERROR rax_6 = GetLastError();
                        
                        if (rax_6 != ERROR_INSUFFICIENT_BUFFER)
                            goto label_14001da57;
                        
                        if (rsi)
                        {
                            uint64_t r12_1 = rax_6 - 0x75;
                            int16_t* rdx_2 = var_80;
                            
                            do
                            {
                                int32_t rax_7 = *(var_68 + 8);
                                
                                if (rax_7 > r12_1)
                                    rax_7 = r12_1;
                                
                                int32_t* var_90_3 = &var_88;
                                int64_t var_98_3 = 0;
                                char var_48[0x8];
                                int32_t rax_8 = __acrt_WideCharToMultiByte(*(var_68 + 0xc), 0, 
                                    rdx_2, 1, &var_48, rax_7);
                                
                                if (!rax_8)
                                    goto label_14001da57;
                                
                                if (var_88)
                                    goto label_14001da57;
                                
                                if (rax_8 < 0)
                                    goto label_14001da57;
                                
                                int64_t rdx_3 = rax_8;
                                
                                if (rdx_3 > r12_1)
                                    goto label_14001da57;
                                
                                if (rdx_3 + result_1 > rsi)
                                    break;
                                
                                int64_t rcx_8 = 0;
                                
                                if (rdx_3 > 0)
                                {
                                    while (true)
                                    {
                                        void* rax_9;
                                        rax_9 = var_48[rcx_8];
                                        *(arg1 + result_1) = rax_9;
                                        
                                        if (!rax_9)
                                            break;
                                        
                                        rcx_8 += 1;
                                        result_1 += 1;
                                        
                                        if (rcx_8 >= rdx_3)
                                            goto label_14001d9be;
                                    }
                                    
                                    break;
                                }
                                
                            label_14001d9be:
                                rdx_2 = &var_80[1];
                                var_80 = rdx_2;
                            } while (result_1 < rsi);
                        }
                    }
                    else
                    {
                        if (var_88)
                            goto label_14001da57;
                        
                    label_14001da62:
                        result_1 -= 1;
                    }
                }
                else
                {
                    if (rsi)
                    {
                        int16_t* rax_5 = r8_1;
                        void* rcx_3 = rsi;
                        
                        while (*rax_5)
                        {
                            rax_5 = &rax_5[1];
                            void* temp0_1 = rcx_3;
                            rcx_3 -= 1;
                            
                            if (temp0_1 == 1)
                                break;
                        }
                        
                        if (rcx_3 && !*rax_5)
                            rsi = ((rax_5 - r8_1) >> 1) + 1;
                    }
                    
                    int32_t* var_90_1 = &var_88;
                    int64_t var_98_1 = 0;
                    int32_t result_5 = __acrt_WideCharToMultiByte(r10_1, 0, r8_1, rsi, arg1, rsi);
                    int64_t result_4 = result_5;
                    
                    if (!result_5 || var_88)
                    {
                    label_14001d82f:
                        rax_12 = _errno();
                        result_3 = -ffffffffffffffff;
                        goto label_14001da5c;
                    }
                    
                    result_3 = result_4 - 1;
                    
                    if (arg1[result_4 - 1])
                        result_3 = result_4;
                    
                label_14001da62_1:
                    result_1 = result_3;
                }
            }
            else
            {
                if (rsi)
                {
                    int16_t* rcx_2 = var_80;
                    
                    while (*rcx_2 <= 0xff)
                    {
                        uint64_t rax_3;
                        rax_3 = *rcx_2;
                        *(arg1 + result_3) = rax_3;
                        rax_3 = *rcx_2;
                        rcx_2 = &rcx_2[1];
                        var_80 = rcx_2;
                        
                        if (!rax_3)
                            goto label_14001da62_2;
                        
                        result_3 += 1;
                        
                        if (result_3 >= rsi)
                            goto label_14001da62_2;
                    }
                    
                    goto label_14001d82f;
                }
                
            label_14001da62_2:
                result_1 = result_3;
            }
        }
        
        char var_58;
        
        if (var_58)
        {
            void* rcx_11 = var_70;
            *(rcx_11 + 0x3a8) &= 0xfffffffd;
        }
        
        result = result_1;
    }
    else
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        result = -ffffffffffffffff;
    }
    
    __security_check_cookie(rax_1 ^ &var_c8);
    return result;
}

uint64_t _wcstombs_s_l(int64_t* arg1, char* arg2, void* arg3, int16_t* arg4, void* arg5, int128_t* arg6)
{
    int32_t r14 = 0;
    int32_t* rax_4;
    int32_t rbx_1;
    
    if (arg2)
    {
        if (arg3)
            goto label_14001dac9;
        
        rax_4 = _errno();
        rbx_1 = 0x16;
    }
    else if (!arg3)
    {
    label_14001dac9:
        
        if (arg2)
            *arg2 = 0;
        
        if (arg1)
            *arg1 = 0;
        
        void* r8 = arg5;
        
        if (r8 > arg3)
            r8 = arg3;
        
        if (r8 > 0x7fffffff)
        {
            rax_4 = _errno();
            rbx_1 = 0x16;
        }
        else
        {
            void* rax_1 = _wcstombs_l_helper(arg2, arg4, r8, arg6);
            
            if (rax_1 == -1)
            {
                if (arg2)
                    *arg2 = 0;
                
                return *_errno();
            }
            
            void* rax_5 = rax_1 + 1;
            
            if (!arg2)
                goto label_14001db66;
            
            if (rax_5 <= arg3)
                goto label_14001db5e;
            
            if (arg5 == -1)
            {
            label_14001db55:
                rax_5 = arg3;
                r14 = 0x50;
            label_14001db5e:
                *(rax_5 + arg2 - 1) = 0;
            label_14001db66:
                
                if (arg1)
                    *arg1 = rax_5;
                
                return r14;
            }
            
            *arg2 = 0;
            
            if (arg3 > rax_5)
                goto label_14001db55;
            
            rax_4 = _errno();
            rbx_1 = 0x22;
        }
    }
    else
    {
        rax_4 = _errno();
        rbx_1 = 0x16;
    }
    
    *rax_4 = rbx_1;
    _invalid_parameter_noinfo();
    return rbx_1;
}

uint64_t _isctype_l(int32_t arg1, int32_t arg2, int128_t* arg3)
{
    void var_88;
    int64_t rax_1 = __security_cookie ^ &var_88;
    int64_t rdi = arg1;
    void* var_40;
    _LocaleUpdate::_LocaleUpdate(&var_40, arg3);
    uint64_t result;
    int64_t* var_38;
    char var_28;
    uint32_t rax_4;
    
    if (rdi + 1 > 0x100)
    {
        char rsi_2 = rdi >> 8;
        uint8_t var_48;
        int32_t r9_1;
        
        if (!_isleadbyte_l(rsi_2, &var_38))
        {
            var_48 = rdi;
            r9_1 = 1;
            char var_47_2 = 0;
        }
        else
        {
            var_48 = rsi_2;
            r9_1 = 2;
            char var_47_1 = rdi;
            char var_46_1 = 0;
        }
        
        int32_t var_58_1 = 1;
        int32_t var_20 = 0;
        int16_t var_1c_1 = 0;
        int32_t rax_7 =
            __acrt_GetStringTypeA(&var_38, 1, &var_48, r9_1, &var_20, *(var_38 + 0xc), var_58_1);
        
        if (rax_7)
        {
            rax_4 = var_20;
            goto label_14001dc5a;
        }
        
        if (var_28 != rax_7)
        {
            void* rax_8 = var_40;
            *(rax_8 + 0x3a8) &= 0xfffffffd;
        }
        
        result = 0;
    }
    else
    {
        rax_4 = *(*var_38 + (rdi << 1));
    label_14001dc5a:
        result = rax_4 & arg2;
        
        if (var_28)
        {
            void* rcx_5 = var_40;
            *(rcx_5 + 0x3a8) &= 0xfffffffd;
        }
    }
    __security_check_cookie(rax_1 ^ &var_88);
    return result;
}

uint64_t InternalGetLocaleInfoA(int128_t* arg1, int64_t arg2, uint32_t arg3, int64_t arg4, int32_t arg5)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    void var_88;
    void* rsp_1 = &var_88;
    int64_t __saved_rbx_1;
    int64_t __saved_rbx = __saved_rbx_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_r12_1;
    int64_t __saved_r12 = __saved_r12_1;
    void* var_48;
    int64_t rax_1 = __security_cookie ^ &var_48;
    _LocaleUpdate::_LocaleUpdate(&var_48, arg1);
    void* var_40;
    int32_t r12 = *(var_40 + 0xc);
    int32_t rax_3;
    int64_t rdx_2;
    rax_3 = sub_14001948c(arg2, arg3, nullptr, 0);
    int64_t rdi = rax_3;
    int32_t rdi_1;
    
    if (rax_3)
    {
        int64_t rax_5 = rdi * 2;
        uint64_t rdx_4 = (rdx_2 - rdx_2) & (rax_5 + 0x10);
        wchar16* rbx;
        
        if (!rdx_4)
        {
            rbx = nullptr;
        label_14001dd69:
            
            if (!rbx)
                rdi_1 = 0;
            else
            {
                int32_t rax_9;
                int64_t rdx_6;
                rax_9 = sub_14001948c(arg2, arg3, rbx, rdi);
                
                if (!rax_9)
                    rdi_1 = 0;
                else
                {
                    *(rsp_1 + 0x38) = 0;
                    *(rsp_1 + 0x30) = 0;
                    *(rsp_1 + 0x28) = arg5;
                    *(rsp_1 + 0x20) = (rdx_6 - rdx_6) & arg4;
                    rdi_1 = __acrt_WideCharToMultiByte(r12, 0, rbx, 0xffffffff);
                }
            }
        }
        else
        {
            if (rdx_4 > 0x400)
            {
                wchar16* rax_8 = _malloc_base(rdx_4);
                rbx = rax_8;
                
                if (!rax_8)
                    goto label_14001dd69;
                
                *rax_8 = 0xdddd;
            label_14001dd61:
                rbx = &rbx[8];
                goto label_14001dd69;
            }
            
            int64_t rax_6 = rdx_4 + 0xf;
            
            if (rax_6 <= rdx_4)
                rax_6 = 0xffffffffffffff0;
            
            int64_t rax_7 = rax_6 & 0xfffffffffffffff0;
            __chkstk(rax_7);
            rsp_1 = &var_88 - rax_7;
            rbx = rsp_1 + 0x40;
            
            if (rbx)
            {
                *rbx = 0xcccc;
                goto label_14001dd61;
            }
            
            rdi_1 = 0;
        }
        
        if (rbx && *(rbx - 0x10) == 0xdddd)
            _free_base(&rbx[-8]);
    }
    else
        rdi_1 = 0;
    
    char var_30;
    
    if (var_30)
    {
        void* rax_13 = var_48;
        *(rax_13 + 0x3a8) &= 0xfffffffd;
    }
    
    __security_check_cookie(rax_1 ^ &var_48);
    return rdi_1;
}

uint64_t sub_14001de10(int128_t* arg1, int32_t arg2, int64_t arg3, uint32_t arg4, int64_t* arg5)
{
    void var_108;
    int64_t rax_1 = __security_cookie ^ &var_108;
    *arg5 = 0;
    uint64_t result;
    int32_t rax_9;
    wchar16* rbx_2;
    
    if (arg2 == 1)
    {
        void var_c8;
        int32_t rax_2 = InternalGetLocaleInfoA(arg1, arg3, arg4, &var_c8, 0x80);
        int64_t rbx_1 = rax_2;
        
        if (!rax_2)
        {
            if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
                result = 0xffffffff;
            else
            {
                int32_t rax_7 = InternalGetLocaleInfoA(arg1, arg3, arg4, 0, 0);
                int64_t r15_1 = rax_7;
                
                if (rax_7)
                {
                    wchar16* rax_8 = _calloc_base(r15_1, 1);
                    rbx_2 = rax_8;
                    
                    if (!rax_8)
                        goto label_14001df1e;
                    
                    rax_9 = InternalGetLocaleInfoA(arg1, arg3, arg4, rax_8, r15_1);
                    goto label_14001df0f;
                }
                
                result = 0xffffffff;
            }
        }
        else
        {
            *arg5 = _calloc_base(rbx_1, 1);
            _free_base(0);
            
            if (!*arg5)
                result = 0xffffffff;
            else
            {
                if (strncpy_s(*arg5, rbx_1, &var_c8, rbx_1 - 1))
                {
                    int32_t reserved;
                    reserved = 0;
                    _invoke_watson(nullptr, nullptr, nullptr, 0, reserved);
                    /* no return */
                }
                
                result = 0;
            }
        }
    }
    else if (arg2 == 2)
    {
        int32_t rax_11 = sub_14001948c(arg3, arg4, nullptr, 0);
        int64_t r15_2 = rax_11;
        
        if (!rax_11)
            result = 0xffffffff;
        else
        {
            wchar16* rax_12 = _calloc_base(r15_2, 2);
            rbx_2 = rax_12;
            
            if (!rax_12)
            {
            label_14001df1e:
                _free_base(rbx_2);
                result = -1;
            }
            else
            {
                rax_9 = sub_14001948c(arg3, arg4, rax_12, r15_2);
            label_14001df0f:
                
                if (!rax_9)
                    goto label_14001df1e;
                
                *arg5 = rbx_2;
                _free_base(nullptr);
                result = 0;
            }
        }
    }
    else if (arg2)
        result = 0xffffffff;
    else
    {
        int32_t var_d8 = 0;
        
        if (!sub_14001948c(arg3, arg4 | 0x20000000, &var_d8, 2))
            result = 0xffffffff;
        else
        {
            int32_t rax_13;
            rax_13 = var_d8;
            *arg5 = rax_13;
            result = 0;
        }
    }
    __security_check_cookie(rax_1 ^ &var_108);
    return result;
}

uint64_t __acrt_GetStringTypeA(int128_t* arg1, uint32_t arg2, uint8_t* arg3, int32_t arg4, uint16_t* arg5, uint32_t arg6, int32_t arg7)
{
    void var_88;
    void* rsp = &var_88;
    void* var_58;
    int64_t rax_1 = __security_cookie ^ &var_58;
    int32_t rdx_1 = _LocaleUpdate::_LocaleUpdate(&var_58, arg1);
    uint32_t rdi = arg6;
    void* var_50;
    
    if (!rdi)
        rdi = *(var_50 + 0xc);
    int32_t temp0 = arg7;
    arg7 = -(arg7);
    int32_t var_60 = 0;
    int64_t var_68 = 0;
    int32_t rax_3;
    int64_t rcx_2;
    rax_3 = __acrt_MultiByteToWideChar(rdi, ((rdx_1 - rdx_1) & 8) + 1, arg3, arg4);
    int64_t r14 = rax_3;
    BOOL rdi_1;
    
    if (rax_3)
    {
        int64_t rsi_2 = r14 * 2;
        uint64_t rcx_4 = (rcx_2 - rcx_2) & (rsi_2 + 0x10);
        uint128_t* lpSrcStr;
        
        if (!rcx_4)
        {
            lpSrcStr = nullptr;
        label_14001e0c8:
            
            if (!lpSrcStr)
                rdi_1 = 0;
            else
            {
                sub_14000c550(lpSrcStr, 0, rsi_2);
                *(rsp + 0x28) = r14;
                *(rsp + 0x20) = lpSrcStr;
                int32_t cchSrc = __acrt_MultiByteToWideChar(rdi, MB_PRECOMPOSED, arg3, arg4);
                
                if (!cchSrc)
                    rdi_1 = 0;
                else
                    rdi_1 = GetStringTypeW(arg2, lpSrcStr, cchSrc, arg5);
            }
        }
        else
        {
            if (rcx_4 > 0x400)
            {
                uint128_t* lpSrcStr_1 = _malloc_base(rcx_4);
                lpSrcStr = lpSrcStr_1;
                
                if (!lpSrcStr_1)
                    goto label_14001e0c8;
                
                *lpSrcStr_1 = 0xdddd;
            label_14001e0c0:
                lpSrcStr = &lpSrcStr[1];
                goto label_14001e0c8;
            }
            
            int64_t rax_5 = rcx_4 + 0xf;
            
            if (rax_5 <= rcx_4)
                rax_5 = 0xffffffffffffff0;
            
            int64_t rax_6 = rax_5 & 0xfffffffffffffff0;
            __chkstk(rax_6);
            rsp = &var_88 - rax_6;
            lpSrcStr = rsp + 0x30;
            
            if (lpSrcStr)
            {
                *lpSrcStr = 0xcccc;
                goto label_14001e0c0;
            }
            
            rdi_1 = 0;
        }
        
        if (lpSrcStr && lpSrcStr[-1] == 0xdddd)
            _free_base(&lpSrcStr[-1]);
    }
    else
        rdi_1 = 0;
    
    char var_40;
    
    if (var_40)
    {
        void* rax_8 = var_58;
        *(rax_8 + 0x3a8) &= 0xfffffffd;
    }
    
    __security_check_cookie(rax_1 ^ &var_58);
    return rdi_1;
}

int64_t __acrt_LCMapStringA_stat(int64_t* arg1, int64_t arg2, int32_t arg3, char* arg4, int32_t arg5, int64_t arg6, int32_t arg7, uint32_t arg8, int32_t arg9)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_r12_1;
    int64_t __saved_r12 = __saved_r12_1;
    int64_t __saved_r13_1;
    int64_t __saved_r13 = __saved_r13_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    void var_88;
    void* rsp_1 = &var_88;
    int64_t __saved_rbx_1;
    int64_t __saved_rbx = __saved_rbx_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t var_38;
    int64_t rax_1 = __security_cookie ^ &var_38;
    int64_t rbx = arg5;
    uint8_t* r15 = arg4;
    var_38 = arg2;
    
    if (rbx > 0)
    {
        arg2 = rbx;
        int32_t rax_2 = __strncnt(arg4, arg2);
        bool cond:0_1 = rax_2 < rbx;
        rbx = rax_2 + 1;
        
        if (!cond:0_1)
            rbx = rax_2;
    }
    
    uint32_t r14 = arg8;
    
    if (!r14)
        r14 = *(*arg1 + 0xc);
    
    int32_t temp0 = arg9;
    arg9 = -(arg9);
    int32_t var_60 = 0;
    int64_t var_68 = 0;
    int32_t result;
    int64_t rdx_3;
    result = __acrt_MultiByteToWideChar(r14, ((arg2 - arg2) & 8) + 1, r15, rbx);
    int64_t result_1 = result;
    
    if (result)
    {
        int64_t rax_5 = result_1 * 2;
        uint64_t rdx_5 = (rdx_3 - rdx_3) & (rax_5 + 0x10);
        int32_t* rsi;
        int64_t rdi_1;
        
        if (!rdx_5)
        {
            rsi = nullptr;
        label_14001e273:
            
            if (!rsi)
                rdi_1 = 0;
            else
            {
                *(rsp_1 + 0x28) = result_1;
                *(rsp_1 + 0x20) = rsi;
                
                if (!__acrt_MultiByteToWideChar(r14, MB_PRECOMPOSED, r15, rbx))
                    rdi_1 = 0;
                else
                {
                    __builtin_memset(rsp_1 + 0x30, 0, 0x18);
                    int64_t r15_1 = var_38;
                    *(rsp_1 + 0x28) = 0;
                    *(rsp_1 + 0x20) = 0;
                    int32_t rax_10 = sub_1400196a0(r15_1, arg3, rsi, result_1);
                    rdi_1 = rax_10;
                    
                    if (!rax_10)
                        rdi_1 = 0;
                    else if (!(0x400 & arg3))
                    {
                        int64_t rcx_8 = rdi_1 * 2;
                        uint64_t rcx_10 = (rcx_8 - rcx_8) & (rcx_8 + 0x10);
                        int32_t* rbx_1;
                        
                        if (!rcx_10)
                        {
                            rbx_1 = nullptr;
                        label_14001e3a4:
                            
                            if (!rbx_1)
                                rdi_1 = 0;
                            else
                            {
                                __builtin_memset(rsp_1 + 0x30, 0, 0x18);
                                *(rsp_1 + 0x28) = rdi_1;
                                *(rsp_1 + 0x20) = rbx_1;
                                int32_t rax_18 = sub_1400196a0(r15_1, arg3, rsi, result_1);
                                int32_t rax_20;
                                
                                if (rax_18)
                                {
                                    *(rsp_1 + 0x38) = 0;
                                    *(rsp_1 + 0x30) = 0;
                                    
                                    if (arg7)
                                    {
                                        *(rsp_1 + 0x28) = arg7;
                                        *(rsp_1 + 0x20) = arg6;
                                    }
                                    else
                                    {
                                        *(rsp_1 + 0x28) = 0;
                                        *(rsp_1 + 0x20) = 0;
                                    }
                                    
                                    rax_20 = __acrt_WideCharToMultiByte(r14, 0, rbx_1, rdi_1);
                                    rdi_1 = rax_20;
                                }
                                
                                if (rax_18 && rax_20)
                                {
                                    if (rbx_1[-4] == 0xdddd)
                                        _free_base(&rbx_1[-4]);
                                }
                                else if (rbx_1[-4] != 0xdddd)
                                    rdi_1 = 0;
                                else
                                {
                                    _free_base(&rbx_1[-4]);
                                    rdi_1 = 0;
                                }
                            }
                        }
                        else
                        {
                            if (rcx_10 > 0x400)
                            {
                                int32_t* rax_17 = _malloc_base(rcx_10);
                                rbx_1 = rax_17;
                                
                                if (!rax_17)
                                    goto label_14001e3a4;
                                
                                *rax_17 = 0xdddd;
                            label_14001e39c:
                                rbx_1 = &rbx_1[4];
                                goto label_14001e3a4;
                            }
                            
                            int64_t rax_15 = rcx_10 + 0xf;
                            
                            if (rax_15 <= rcx_10)
                                rax_15 = 0xffffffffffffff0;
                            
                            int64_t rax_16 = rax_15 & 0xfffffffffffffff0;
                            __chkstk(rax_16);
                            rsp_1 -= rax_16;
                            rbx_1 = rsp_1 + 0x50;
                            
                            if (rbx_1)
                            {
                                *rbx_1 = 0xcccc;
                                goto label_14001e39c;
                            }
                            
                            rdi_1 = 0;
                        }
                    }
                    else if (arg7)
                    {
                        if (rdi_1 > arg7)
                            rdi_1 = 0;
                        else
                        {
                            __builtin_memset(rsp_1 + 0x30, 0, 0x18);
                            *(rsp_1 + 0x28) = arg7;
                            *(rsp_1 + 0x20) = arg6;
                            int32_t rax_13 = sub_1400196a0(r15_1, arg3, rsi, result_1);
                            rdi_1 = rax_13;
                            
                            if (!rax_13)
                                rdi_1 = 0;
                        }
                    }
                }
            }
        }
        else
        {
            if (rdx_5 > 0x400)
            {
                int32_t* rax_8 = _malloc_base(rdx_5);
                rsi = rax_8;
                
                if (!rax_8)
                    goto label_14001e273;
                
                *rax_8 = 0xdddd;
            label_14001e26b:
                rsi = &rsi[4];
                goto label_14001e273;
            }
            
            int64_t rax_6 = rdx_5 + 0xf;
            
            if (rax_6 <= rdx_5)
                rax_6 = 0xffffffffffffff0;
            
            int64_t rax_7 = rax_6 & 0xfffffffffffffff0;
            __chkstk(rax_7);
            rsp_1 = &var_88 - rax_7;
            rsi = rsp_1 + 0x50;
            
            if (rsi)
            {
                *rsi = 0xcccc;
                goto label_14001e26b;
            }
            
            rdi_1 = 0;
        }
        
        if (rsi && rsi[-4] == 0xdddd)
            _free_base(&rsi[-4]);
        
        result = rdi_1;
    }
    
    __security_check_cookie(rax_1 ^ &var_38);
    return result;
}

int64_t __acrt_LCMapStringA(int128_t* arg1, int64_t arg2, int32_t arg3, char* arg4, int32_t arg5, int64_t arg6, int32_t arg7, uint32_t arg8, int32_t arg9)
{
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg1);
    void var_20;
    int64_t result =
        __acrt_LCMapStringA_stat(&var_20, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    char var_10;
    
    if (var_10)
    {
        void* rcx_2 = var_28;
        *(rcx_2 + 0x3a8) &= 0xfffffffd;
    }
    
    return result;
}

int64_t sub_14001e518(int64_t arg1, int32_t* arg2, int64_t arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    uint64_t __security_cookie_1 = __security_cookie;
    int64_t result = RORQ(__security_cookie_1 ^ data_1400436d0, __security_cookie_1 & 0x3f);
    sub_140011880(*arg4);
    return result;
}

int64_t __acrt_get_sigabrt_handler()
{
    int32_t arg_10 = 3;
    int32_t arg_18 = 3;
    void arg_8;
    return sub_14001e518(&arg_8, &arg_18, &arg_8, &arg_10);
}

int64_t sub_14001e590(int64_t arg1)
{
    data_1400436c0 = arg1;
    data_1400436c8 = arg1;
    data_1400436d0 = arg1;
    data_1400436d8 = arg1;
}

int64_t raise(int32_t arg1)
{
    int64_t* r13 = nullptr;
    int32_t arg_10 = 0;
    int64_t r14;
    r14 = 1;
    char arg_8 = 1;
    int64_t* rdi_1;
    
    if (arg1 != 2)
    {
        if (arg1 == 4)
        {
        label_14001e629:
            int64_t* rax_2 = __acrt_getptd_noexit();
            r13 = rax_2;
            
            if (!rax_2)
                return 0xffffffff;
            
            void* rcx_4 = *rax_2;
            void* rdx_1 = 0xc0 + rcx_4;
            
            while (true)
            {
                if (rcx_4 == rdx_1)
                {
                    rcx_4 = nullptr;
                    break;
                }
                
                if (*(rcx_4 + 4) == arg1)
                    break;
                
                rcx_4 += 0x10;
            }
            
            if (!rcx_4)
                goto label_14001e67c;
            
            rdi_1 = rcx_4 + 8;
            r14 = 0;
            arg_8 = 0;
            goto label_14001e6b9;
        }
        
        if (arg1 == 6)
            goto label_14001e5f9;
        
        if (arg1 == 8 || arg1 == 0xb)
            goto label_14001e629;
        
        if (arg1 != 0xf && arg1 - 0x15 > 1)
        {
        label_14001e67c:
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0xffffffff;
        }
    }
    
label_14001e5f9:
    
    if (arg1 != 2)
    {
        if (arg1 == 6)
            rdi_1 = &data_1400436d0;
        else if (arg1 == 0xf)
            rdi_1 = &data_1400436d8;
        else if (arg1 == 0x15)
            rdi_1 = &data_1400436c8;
        else if (arg1 == 0x16)
            rdi_1 = &data_1400436d0;
        else
            rdi_1 = nullptr;
        
        goto label_14001e6b9;
    }
    
    rdi_1 = &data_1400436c0;
label_14001e6b9:
    int64_t arg_18 = 0;
    
    if (r14)
        sub_14001182c(3);
    
    int64_t rsi_1 = *rdi_1;
    
    if (r14)
    {
        uint64_t __security_cookie_1 = __security_cookie;
        rsi_1 = RORQ(rsi_1 ^ __security_cookie_1, __security_cookie_1 & 0x3f);
    }
    
    if (rsi_1 != 1)
    {
        if (!rsi_1)
        {
            if (r14)
                sub_140011880(rsi_1 + 3);
            
            sub_14000ec34(3);
            breakpoint();
        }
        
        if (arg1 > 0xb || !TEST_BITD(0x910, arg1))
            goto label_14001e747;
        
        int64_t rax_5 = r13[1];
        arg_18 = rax_5;
        int64_t var_38_1 = rax_5;
        r13[1] = 0;
        
        if (arg1 != 8)
            *rdi_1 = __security_cookie;
        else
        {
            int32_t rax_7 = *(__acrt_getptd() + 0x10);
            arg_10 = rax_7;
            int32_t var_48_1 = rax_7;
            *(__acrt_getptd() + 0x10) = 0x8c;
        label_14001e747:
            
            if (arg1 != 8)
                *rdi_1 = __security_cookie;
            else
            {
                void* rax_9 = 0x30 + *r13;
                void* rcx_7 = 0x90 + rax_9;
                
                while (true)
                {
                    void* var_40_1 = rax_9;
                    
                    if (rax_9 == rcx_7)
                        break;
                    
                    *(rax_9 + 8) = 0;
                    rax_9 += 0x10;
                }
            }
        }
    }
    
    if (r14)
        sub_140011880(3);
    
    if (rsi_1 != 1)
    {
        if (arg1 != 8)
            _guard_dispatch_icall_nop(arg1);
        else
        {
            __acrt_getptd();
            _guard_dispatch_icall_nop(arg1);
        }
        
        if (arg1 <= 0xb && TEST_BITD(0x910, arg1))
        {
            r13[1] = arg_18;
            
            if (arg1 == 8)
                *(__acrt_getptd() + 0x10) = arg_10;
        }
    }
    
    return 0;
}

void sub_14001e81c(uint64_t arg1, int64_t* arg2, char arg3, int32_t arg4, int32_t* arg5, int32_t* arg6) __noreturn
{
    _raise_exc_ex(arg1, arg2, arg3, arg4, arg5, arg6, 0);
    /* no return */
}

int64_t sub_14001e83e() __pure
{
    return;
}

void _raise_exc_ex(uint64_t arg1, int64_t* arg2, char arg3, int32_t arg4, int32_t* arg5, int32_t* arg6, int32_t arg7) __noreturn
{
    uint64_t arguments = arg1;
    uint32_t dwExceptionCode = -0x3ffffff3;
    *(arg1 + 4) = 0;
    *(arguments + 8) = 0;
    *(arguments + 0xc) = 0;
    
    if (arg3 & 0x10)
    {
        uint64_t arguments_1 = arguments;
        dwExceptionCode = -0x3fffff71;
        *(arguments_1 + 4) |= 1;
    }
    
    if (arg3 & 2)
    {
        uint64_t arguments_2 = arguments;
        dwExceptionCode = -0x3fffff6d;
        *(arguments_2 + 4) |= 2;
    }
    
    if (arg3 & 1)
    {
        uint64_t arguments_3 = arguments;
        dwExceptionCode = -0x3fffff6f;
        *(arguments_3 + 4) |= 4;
    }
    
    if (arg3 & 4)
    {
        uint64_t arguments_4 = arguments;
        dwExceptionCode = -0x3fffff72;
        *(arguments_4 + 4) |= 8;
    }
    
    if (arg3 & 8)
    {
        uint64_t arguments_5 = arguments;
        dwExceptionCode = -0x3fffff70;
        *(arguments_5 + 4) |= 0x10;
    }
    
    uint64_t arguments_22 = arguments;
    *(arguments_22 + 8) ^= (~(*arg2 >> 7 << 4) ^ *(arguments_22 + 8)) & 0x10;
    uint64_t arguments_23 = arguments;
    *(arguments_23 + 8) ^= (~(*arg2 >> 9 << 3) ^ *(arguments_23 + 8)) & 8;
    uint64_t arguments_24 = arguments;
    *(arguments_24 + 8) ^= (~(*arg2 >> 0xa << 2) ^ *(arguments_24 + 8)) & 4;
    uint64_t arguments_25 = arguments;
    *(arguments_25 + 8) ^= (~((*arg2 >> 0xb) * 2) ^ *(arguments_25 + 8)) & 2;
    uint64_t arguments_26 = arguments;
    *(arguments_26 + 8) ^= (~(*arg2 >> 0xc) ^ *(arguments_26 + 8)) & 1;
    char rax_31 = sub_14001ec6c();
    
    if (rax_31 & 1)
    {
        uint64_t arguments_27 = arguments;
        *(arguments_27 + 0xc) |= 0x10;
    }
    
    if (rax_31 & 4)
    {
        uint64_t arguments_28 = arguments;
        *(arguments_28 + 0xc) |= 8;
    }
    
    if (rax_31 & 8)
    {
        uint64_t arguments_6 = arguments;
        *(arguments_6 + 0xc) |= 4;
    }
    
    if (rax_31 & 0x10)
    {
        uint64_t arguments_7 = arguments;
        *(arguments_7 + 0xc) |= 2;
    }
    
    if (rax_31 & 0x20)
    {
        uint64_t arguments_8 = arguments;
        *(arguments_8 + 0xc) |= 1;
    }
    
    int64_t rax_33 = *arg2 & 0x6000;
    
    if (!rax_33)
    {
        uint64_t arguments_14 = arguments;
        *arguments_14 &= 0xfffffffc;
    }
    else if (rax_33 == 0x2000)
    {
        uint64_t arguments_12 = arguments;
        *arguments_12 &= 0xfffffffd;
        uint64_t arguments_13 = arguments;
        *arguments_13 |= 1;
    }
    else if (rax_33 == 0x4000)
    {
        uint64_t arguments_10 = arguments;
        *arguments_10 &= 0xfffffffe;
        uint64_t arguments_11 = arguments;
        *arguments_11 |= 2;
    }
    else if (rax_33 == 0x6000)
    {
        uint64_t arguments_9 = arguments;
        *arguments_9 |= 3;
    }
    
    uint64_t arguments_15 = arguments;
    *arguments_15 &= 0xfffe001f;
    int32_t* arguments_16 = arguments;
    *arguments_16 |= (arg4 & 0xfff) << 5;
    uint64_t arguments_17 = arguments;
    *(arguments_17 + 0x20) |= 1;
    
    if (!arg7)
    {
        uint64_t arguments_29 = arguments;
        *(arguments_29 + 0x20) = (*(arguments_29 + 0x20) & 0xffffffe3) | 2;
        *(arguments + 0x10) = *arg5;
        uint64_t arguments_21 = arguments;
        *(arguments_21 + 0x60) |= 1;
        uint64_t arguments_30 = arguments;
        *(arguments_30 + 0x60) = (*(arguments_30 + 0x60) & 0xffffffe3) | 2;
        *(arguments + 0x50) = *arg6;
    }
    else
    {
        uint64_t arguments_18 = arguments;
        *(arguments_18 + 0x20) &= 0xffffffe1;
        *(arguments + 0x10) = *arg5;
        uint64_t arguments_19 = arguments;
        *(arguments_19 + 0x60) |= 1;
        uint64_t arguments_20 = arguments;
        *(arguments_20 + 0x60) &= 0xffffffe1;
        *(arguments + 0x50) = *arg6;
    }
    
    _clrfp();
    RaiseException(dwExceptionCode, 0, 1, &arguments);
    /* no return */
}

void sub_14001eb54(uint64_t arg1, int64_t* arg2, char arg3, int32_t arg4, int32_t* arg5, int32_t* arg6) __noreturn
{
    _raise_exc_ex(arg1, arg2, arg3, arg4, arg5, arg6, 1);
    /* no return */
}

int64_t sub_14001eb79() __pure
{
    return;
}

uint64_t _set_errno_from_matherr(int32_t arg1)
{
    uint64_t result;
    
    if (arg1 == 1)
    {
        result = _errno();
        *result = 0x21;
    }
    else
    {
        result = arg1 - 2;
        
        if (result <= 1)
        {
            result = _errno();
            *result = 0x22;
        }
    }
    
    return result;
}

uint64_t _clrfp()
{
    int32_t mxcsr;
    return sub_140025510(mxcsr) & 0x3f;
}

uint64_t _ctrlfp(int32_t arg1, int32_t arg2)
{
    int32_t mxcsr;
    int32_t rax = sub_140025510(mxcsr);
    int32_t arg_10 = rax;
    int32_t arg_8 = ((~arg2 | 0xffff807f) & rax) | (arg1 & arg2);
    data_140041314;
    return rax;
}

int64_t _set_statfp(int32_t arg1)
{
    /* tailcall */
    return _set_fpsr();
}

uint64_t sub_14001ec6c()
{
    int32_t mxcsr;
    return sub_140025510(mxcsr) & 0x3f;
}

int64_t _realloc_base(int64_t arg1, uint64_t arg2)
{
    if (!arg1)
        return _malloc_base(arg2);
    
    if (arg2)
    {
        if (arg2 <= -0x20)
        {
            int32_t i;
            
            do
            {
                int64_t result = HeapReAlloc(data_1400437e8, HEAP_NONE, arg1, arg2);
                
                if (result)
                    return result;
                
                if (!sub_140017688())
                    break;
                
                i = sub_140015880(arg2);
            } while (i);
        }
        
        *_errno() = 0xc;
    }
    else
        _free_base(arg1);
    
    return 0;
}

uint64_t iswctype(wchar16 arg1, int16_t arg2)
{
    if (arg1 != 0xffff)
    {
        if (arg1 < 0x100)
            return (**&data_140040f60)[arg1] & arg2;
        
        wchar16 srcStr = arg1;
        uint16_t charType = 0;
        
        if (GetStringTypeW(1, &srcStr, 1, &charType))
            return charType & arg2;
    }
    
    return 0;
}

int64_t __acrt_initialize_fma3(int64_t arg1 @ xcr0)
{
    int32_t r8 = 0;
    data_1400436e0 = 0;
    int32_t temp0;
    int32_t temp1;
    int32_t temp2;
    int32_t temp3;
    temp0 = __cpuid(1, 0);
    int32_t var_18 = temp0;
    int32_t var_10 = temp2;
    int32_t var_14 = temp1;
    int32_t var_c = temp3;
    
    if ((temp2 & 0x18001000) == 0x18001000)
    {
        int32_t temp0_1;
        char temp1_1;
        temp0_1 = _xgetbv(0, arg1);
        r8 = data_1400436e0;
        
        if (((temp0_1 << 0x20 | temp1_1) & 6) == 6)
            r8 = 1;
        
        data_1400436e0 = r8;
    }
    
    data_1400436e4 = r8;
    return 0;
}

uint64_t _pow_special(int64_t arg1 @ zmm0, int32_t arg2 @ zmm1, int128_t arg3 @ zmm2, int32_t arg4)
{
    uint64_t result = 2;
    int128_t zmm6;
    
    if (arg4 == 2)
    {
        int32_t var_38_4 = 2;
        result = _handle_error(&data_140033808, 0x1d, arg3, 2, 4, 0x22, arg1, arg2);
    }
    else if (arg4 > 2)
    {
        if (arg4 <= 5)
            /* tailcall */
            return _handle_nan(arg3);
        
        if (arg4 == 6)
        {
            int32_t var_38_3 = 2;
            result = _handle_error(&data_140033808, 0x1d, arg3, 1, 8, 0x21, arg1, arg2);
        }
        else if (arg4 > 6)
        {
            if (arg4 <= 8)
            {
                int32_t var_38_2 = 2;
                result = _handle_error(&data_140033808, 0x1d, arg3, 4, 0x12, 0x22, arg1, arg2);
            }
            else if (arg4 == 9)
            {
                int32_t var_38_1 = 2;
                result = _handle_error(&data_140033808, 0x1d, arg3, 3, 0x11, 0x22, arg1, arg2);
            }
        }
    }
    return result;
}

uint64_t _powf_special(int32_t arg1 @ zmm0, int32_t arg2 @ zmm1, int128_t arg3 @ zmm2, int32_t arg4)
{
    uint64_t result = 2;
    int128_t zmm6;
    
    if (arg4 == 1)
    {
        int32_t var_28_1 = 0;
        int32_t var_58_5 = 2;
        result = _handle_errorf("powf", 0x1d, arg3, 0, 8, 0, arg1, arg2);
    }
    else if (arg4 == 2)
    {
        int32_t var_30_1 = 0;
        int32_t var_58_4 = 2;
        result = _handle_errorf("powf", 0x1d, arg3, 2, 4, 0x22, arg1, arg2);
    }
    else if (arg4 > 2 && arg4 > 5)
    {
        if (arg4 == 6)
        {
            int32_t var_38_1 = 0;
            int32_t var_58_3 = 2;
            result = _handle_errorf("powf", 0x1d, arg3, 1, 8, 0x21, arg1, arg2);
        }
        else if (arg4 == 7)
        {
            int32_t var_40_1 = 0;
            int32_t var_58_2 = 2;
            result = _handle_errorf("powf", 0x1d, arg3, 4, 0x12, 0x22, arg1, arg2);
        }
        else if (arg4 == 9)
        {
            int32_t var_48_1 = 0;
            int32_t var_58_1 = 2;
            result = _handle_errorf("powf", 0x1d, arg3, 3, 0x11, 0x22, arg1, arg2);
        }
    }
    return result;
}

int64_t __acrt_MultiByteToWideChar(uint32_t arg1, enum MULTI_BYTE_TO_WIDE_CHAR_FLAGS arg2, uint8_t* arg3, int64_t arg4)
{
    if (arg1 > 0xc435)
    {
        if (arg1 == 0xd698)
            arg2 &= MB_ERR_INVALID_CHARS;
        else if (arg1 > 0xdea9)
        {
            if (arg1 <= 0xdeb3 || arg1 == 0xfde8)
                arg2 = 0;
            else if (arg1 == 0xfde9)
                arg2 &= MB_ERR_INVALID_CHARS;
        }
    }
    else if (arg1 - 0xc42c > 9)
    {
        if (arg1 == 0x2a)
            arg2 = 0;
    }
    else if (TEST_BITD(0x2a7, arg1 - 0xc42c) || arg1 == 0x2a)
        arg2 = 0;
    
    /* tailcall */
    return MultiByteToWideChar(arg1, arg2, arg3, arg4);
}

int64_t __acrt_WideCharToMultiByte(int32_t arg1, int32_t arg2, wchar16* arg3, int64_t arg4, int64_t arg5, int64_t arg6)
{
    bool r11 = arg1 - 0xfde8 <= 1;
    uint64_t dwFlags;
    bool cond:0_1;
    
    if (arg1 > 0xc435)
    {
        if (arg1 == 0xd698)
            dwFlags = 0;
        else if (arg1 <= 0xdea9)
            dwFlags = arg2 & 0xffffff7f;
        else
        {
            if (arg1 > 0xdeb3 && arg1 != 0xfde8)
            {
                cond:0_1 = arg1 == 0xfde9;
                goto label_14001f14e;
            }
            
            dwFlags = 0;
        }
    }
    else if (arg1 - 0xc42c > 9 || !TEST_BITD(0x2a7, arg1 - 0xc42c))
    {
        cond:0_1 = arg1 == 0x2a;
    label_14001f14e:
        
        dwFlags = cond:0_1 ? 0 : arg2 & 0xffffff7f;
    }
    else
        dwFlags = 0;
    int64_t rcx = arg6;
    int64_t rax_2 = arg5;
    
    if (r11)
        rax_2 = 0;
    
    if (r11)
        rcx = 0;
    
    arg6 = rcx;
    arg5 = rax_2;
    /* tailcall */
    return WideCharToMultiByte(arg1, dwFlags, arg3, arg4);
}

uint64_t _wcsicmp(int16_t* arg1, int16_t* arg2)
{
    if (data_140043088)
        /* tailcall */
        return _wcsicmp_l(arg1, arg2, nullptr);
    
    if (!arg1 || !arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x7fffffff;
    }
    
    int16_t* rcx = arg1 - arg2;
    int16_t r8_1;
    int16_t r9_1;
    
    do
    {
        r8_1 = *(rcx + arg2) + 0x20;
        
        if (*(rcx + arg2) - 0x41 > 0x19)
            r8_1 = *(rcx + arg2);
        
        r9_1 = *arg2 + 0x20;
        
        if (*arg2 - 0x41 > 0x19)
            r9_1 = *arg2;
        
        arg2 = &arg2[1];
        
        if (!r8_1)
            break;
    } while (r8_1 == r9_1);
    
    return r8_1 - r9_1;
}

uint64_t _wcsicmp_l(int16_t* arg1, int16_t* arg2, int128_t* arg3)
{
    int16_t* rdi = arg2;
    int16_t* rsi = arg1;
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg3);
    uint64_t result;
    
    if (!rsi || !rdi)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        result = 0x7fffffff;
    }
    else
    {
        void* var_20;
        int16_t rcx_1;
        int16_t rbx_1;
        
        if (*(var_20 + 0x138))
        {
            int16_t rax_5;
            
            do
            {
                rbx_1 = _towlower_l(*rsi, &var_20);
                rsi = &rsi[1];
                rax_5 = _towlower_l(*rdi, &var_20);
                rdi = &rdi[1];
                rcx_1 = rax_5;
                
                if (!rbx_1)
                    break;
            } while (rbx_1 == rax_5);
        }
        else
        {
            int16_t* rsi_1 = rsi - rdi;
            
            do
            {
                rbx_1 = *(rsi_1 + rdi) + 0x20;
                
                if (*(rsi_1 + rdi) - 0x41 > 0x19)
                    rbx_1 = *(rsi_1 + rdi);
                
                rcx_1 = *rdi + 0x20;
                
                if (*rdi - 0x41 > 0x19)
                    rcx_1 = *rdi;
                
                rdi = &rdi[1];
                
                if (!rbx_1)
                    break;
            } while (rbx_1 == rcx_1);
        }
        
        result = rbx_1 - rcx_1;
    }
    
    char var_10;
    
    if (var_10)
    {
        void* rcx_5 = var_28;
        *(rcx_5 + 0x3a8) &= 0xfffffffd;
    }
    
    return result;
}

int64_t __acrt_initialize_timeset()
{
    data_1400436e8 = 0x7080;
    data_1400436ec = 1;
    data_1400436f0 = 0xfffff1f0;
    data_1400436f8 = &data_1400413a0;
    return 0;
}

uint64_t _isleadbyte_l(int32_t arg1, int128_t* arg2)
{
    int64_t rbx = arg1;
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg2);
    uint64_t result;
    int64_t* var_20;
    
    if (rbx + 1 > 0x100)
        result = 0;
    else
        result = *(*var_20 + (rbx << 1)) & 0x8000;
    char var_10;
    
    if (var_10)
    {
        void* rcx_2 = var_28;
        *(rcx_2 + 0x3a8) &= 0xfffffffd;
    }
    
    return result;
}

uint64_t wcscat_s(int16_t* arg1, int64_t arg2, int64_t arg3)
{
    int32_t rbx = 0;
    int16_t* r9 = arg1;
    
    if (!arg1 || !arg2)
        goto label_14001f3c9;
    
    if (arg3)
    {
        while (*arg1)
        {
            arg1 = &arg1[1];
            int64_t temp0_1 = arg2;
            arg2 -= 1;
            
            if (temp0_1 == 1)
                break;
        }
        
        if (!arg2)
        {
            *r9 = 0;
            goto label_14001f3c9;
        }
        
        int16_t* r8 = arg3 - arg1;
        int64_t i;
        
        do
        {
            int16_t rax_3 = *(r8 + arg1);
            *arg1 = rax_3;
            arg1 = &arg1[1];
            
            if (!rax_3)
                break;
            
            i = arg2;
            arg2 -= 1;
        } while (i != 1);
        
        if (!arg2)
        {
            *r9 = 0;
            rbx = 0x22;
            *_errno() = rbx;
            _invalid_parameter_noinfo();
        }
    }
    else
    {
        *arg1 = 0;
    label_14001f3c9:
        rbx = 0x16;
        *_errno() = rbx;
        _invalid_parameter_noinfo();
    }
    
    return rbx;
}

uint64_t wcsncpy_s(int16_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int32_t r10 = 0;
    
    if (arg4)
    {
        if (!arg1 || !arg2)
            goto label_14001f44e;
        
    label_14001f47a:
        
        if (!arg4)
            *arg1 = 0;
        else
        {
            int32_t* rax_1;
            int32_t rbx_1;
            
            if (arg3)
            {
                int16_t* rbx_2 = arg3 - arg1;
                int16_t* rdx = arg1;
                int64_t i_3 = arg2;
                int64_t i_2 = arg4;
                
                if (arg4 != -1)
                {
                    int64_t i;
                    
                    do
                    {
                        int16_t rax_4 = *(rbx_2 + rdx);
                        *rdx = rax_4;
                        rdx = &rdx[1];
                        
                        if (!rax_4)
                            break;
                        
                        int64_t i_4 = i_3;
                        i_3 -= 1;
                        
                        if (i_4 == 1)
                            break;
                        
                        i = i_2;
                        i_2 -= 1;
                    } while (i != 1);
                    
                    if (!i_2)
                        *rdx = 0;
                }
                else
                {
                    int64_t i_1;
                    
                    do
                    {
                        int16_t rax_3 = *(rbx_2 + rdx);
                        *rdx = rax_3;
                        rdx = &rdx[1];
                        
                        if (!rax_3)
                            break;
                        
                        i_1 = i_3;
                        i_3 -= 1;
                    } while (i_1 != 1);
                }
                
                if (!i_3)
                {
                    if (arg4 != -1)
                    {
                        *arg1 = 0;
                        rax_1 = _errno();
                        rbx_1 = 0x22;
                        goto label_14001f458;
                    }
                    
                    arg1[arg2 - 1] = 0;
                    r10 = i_3 + 0x50;
                }
            }
            else
            {
                *arg1 = 0;
            label_14001f44e:
                rax_1 = _errno();
                rbx_1 = 0x16;
            label_14001f458:
                *rax_1 = rbx_1;
                _invalid_parameter_noinfo();
                r10 = rbx_1;
            }
        }
    }
    else
    {
        if (arg1)
        {
            if (!arg2)
                goto label_14001f44e;
            
            goto label_14001f47a;
        }
        
        if (arg2)
            goto label_14001f44e;
    }
    
    return r10;
}

int64_t sub_14001f510(int64_t arg1, int64_t arg2) __pure
{
    if (arg1 < arg2)
        return 0xffffffff;
    
    int64_t result;
    result = arg1 > arg2;
    return result;
}

uint64_t __acrt_wcs_to_mbs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(int16_t* arg1, void* arg2, int32_t arg3)
{
    int32_t rbx = 0;
    
    if (!arg1)
    {
        if (*(arg2 + 0x28))
        {
            _free_base(*(arg2 + 0x10));
            *(arg2 + 0x28) = 0;
        }
        
        __builtin_memset(arg2 + 0x10, 0, 0x18);
    }
    else
    {
        int32_t rdx_3;
        
        if (*arg1)
        {
            int64_t var_10_1 = 0;
            int64_t var_18_1 = 0;
            int32_t rax_4 = __acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, 0, 0);
            int64_t rbp_1 = rax_4;
            
            if (rax_4)
            {
                int64_t rcx_5 = *(arg2 + 0x18);
                
                if (rbp_1 <= rcx_5)
                {
                label_14001f65f:
                    int64_t var_10_2 = 0;
                    int64_t var_18_2 = 0;
                    int32_t rax_10 = __acrt_WideCharToMultiByte(arg3, 0, arg1, 0xffffffff, 
                        *(arg2 + 0x10), rcx_5);
                    
                    if (!rax_10)
                    {
                        __acrt_errno_map_os_error(GetLastError());
                        rbx = *_errno();
                    }
                    else
                        *(arg2 + 0x20) = rax_10 - 1;
                }
                else
                {
                    if (*(arg2 + 0x28))
                    {
                        _free_base(*(arg2 + 0x10));
                        *(arg2 + 0x28) = 0;
                    }
                    
                    int64_t rax_7;
                    int32_t rdx_4;
                    rax_7 = _malloc_base(rbp_1);
                    *(arg2 + 0x10) = rax_7;
                    rcx_5 = 0;
                    rdx_3 = ~(rdx_4 - rdx_4) & 0xc;
                    
                    if (!rdx_3)
                        rcx_5 = rbp_1;
                    
                    *(arg2 + 0x28) = !rdx_3;
                    *(arg2 + 0x18) = rcx_5;
                    
                    if (!rdx_3)
                        goto label_14001f65f;
                    
                    rbx = rdx_3;
                }
            }
            else
            {
                __acrt_errno_map_os_error(GetLastError());
                rbx = *_errno();
            }
        }
        else
        {
            if (!*(arg2 + 0x18))
            {
                if (*(arg2 + 0x28))
                {
                    _free_base(*(arg2 + 0x10));
                    *(arg2 + 0x28) = 0;
                }
                
                int64_t rax_1;
                int32_t rdx;
                rax_1 = _malloc_base(1);
                *(arg2 + 0x10) = rax_1;
                rdx_3 = ~(rdx - rdx) & 0xc;
                int64_t rcx_2;
                rcx_2 = !rdx_3;
                *(arg2 + 0x28) = !rdx_3;
                *(arg2 + 0x18) = rcx_2;
            }
            
            if (*(arg2 + 0x18) || !rdx_3)
                **(arg2 + 0x10) = 0;
            else
                rbx = rdx_3;
        }
    }
    
    return rbx;
}

uint64_t sub_14001f6b0(int64_t* arg1, int64_t* arg2)
{
    int64_t r13;
    int64_t var_28 = r13;
    int64_t rdi = 0;
    int64_t* rbx = arg1;
    
    if (!arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return 0x16;
    }
    
    *arg2 = 0;
    char* rax_2 = *arg1;
    int128_t var_58;
    __builtin_memset(&var_58, 0, 0x18);
    int32_t rsi_1;
    int64_t r12_1;
    int64_t* r15_1;
    
    while (true)
    {
        int64_t arg_18;
        
        if (!rax_2)
        {
            r15_1 = var_58;
            int64_t r9_2 = 0;
            r12_1 = *(&var_58 + 8);
            int64_t* rdx_2 = r15_1;
            arg_18 = 0;
            void* rax_6 = r12_1 - r15_1;
            int64_t r8_2 = 0;
            uint64_t rcx_3 = (rax_6 + 7) >> 3;
            
            if (r15_1 > r12_1)
                rcx_3 = 0;
            
            rsi_1 = -1;
            
            if (rcx_3)
            {
                do
                {
                    int64_t rax_7 = -1;
                    
                    do
                        rax_7 += 1;
                     while ((*rdx_2)[rax_7]);
                    
                    rdx_2 = &rdx_2[1];
                    r9_2 = r9_2 + 1 + rax_7;
                    r8_2 += 1;
                } while (r8_2 != rcx_3);
                
                arg_18 = r9_2;
            }
            
            int64_t rax_8 = __acrt_allocate_buffer_for_argv((rax_6 >> 3) + 1, r9_2, 1);
            
            if (rax_8)
            {
                char* rdx_4 = rax_8 + (((rax_6 >> 3) + 1) << 3);
                int64_t* r14_4 = r15_1;
                char* var_60_1 = rdx_4;
                char* rax_9 = rdx_4;
                char* arg_20 = rdx_4;
                
                if (r15_1 != r12_1)
                {
                    do
                    {
                        char* r8_3 = *r14_4;
                        int64_t r13_1 = -1;
                        
                        do
                            r13_1 += 1;
                         while (r8_3[r13_1]);
                        
                        if (strncpy_s(rax_9, rdx_4 - rax_9 + arg_18, r8_3, r13_1 + 1))
                        {
                            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                            /* no return */
                        }
                        
                        rdx_4 = var_60_1;
                        *(rax_8 - r15_1 + r14_4) = arg_20;
                        rax_9 = &arg_20[r13_1 + 1];
                        r14_4 = &r14_4[1];
                        arg_20 = rax_9;
                    } while (r14_4 != r12_1);
                }
                
                rsi_1 = 0;
                *arg2 = rax_8;
            }
            
            _free_base(0);
            break;
        }
        
        arg_18 = 0x3f2a;
        *(&arg_18 + 2) = 0;
        char* rax_3 = sub_140026150(rax_2, &arg_18);
        char* rcx_1 = *rbx;
        int32_t rax_4;
        
        if (rax_3)
            rax_4 = expand_argument_wildcards<char>(rcx_1, rax_3, &var_58, r13);
        else
            rax_4 = sub_14001f8bc(rcx_1, 0, 0, &var_58);
        
        rsi_1 = rax_4;
        
        if (rax_4)
        {
            r12_1 = *(&var_58 + 8);
            r15_1 = var_58;
            break;
        }
        
        rbx = &rbx[1];
        rax_2 = *rbx;
    }
    
    int64_t* r14_5 = r15_1;
    uint64_t rbx_5 = (r12_1 - r15_1 + 7) >> 3;
    
    if (r15_1 > r12_1)
        rbx_5 = 0;
    
    if (rbx_5)
    {
        do
        {
            _free_base(*r14_5);
            rdi += 1;
            r14_5 = &r14_5[1];
        } while (rdi != rbx_5);
    }
    
    _free_base(r15_1);
    return rsi_1;
}

uint64_t sub_14001f8bc(char* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)
{
    int64_t rbp = -1;
    int32_t rsi = 0;
    
    do
        rbp += 1;
     while (arg1[rbp]);
    
    if (rbp + 1 > ~arg3)
        return 0xc;
    
    int64_t r15_2 = arg3 + 1 + rbp + 1;
    char* rax_3 = _calloc_base(r15_2, 1);
    int32_t rax_4;
    
    if (arg3)
        rax_4 = strncpy_s(rax_3, r15_2, arg2, arg3);
    
    if (!arg3 || !rax_4)
    {
        int32_t rax_5 = strncpy_s(&rax_3[arg3], r15_2 - arg3, arg1, rbp + 1);
        
        if (!rax_5)
        {
            void** rcx_3 = arg4[1];
            uint64_t r15_4 = rax_5 + 8;
            int64_t r14_1 = arg4[2];
            
            if (rcx_3 != r14_1)
            {
                *rcx_3 = rax_3;
                arg4[1] += r15_4;
            }
            else if (*arg4)
            {
                int64_t r14_3 = (r14_1 - *arg4) >> 3;
                
                if (r14_3 > 0x7fffffffffffffff)
                {
                    _free_base(rax_3);
                    rsi = 0xc;
                }
                else
                {
                    int64_t rbp_2 = r14_3 * 2;
                    void* rax_8 = _recalloc_base(*arg4, rbp_2, r15_4);
                    
                    if (rax_8)
                    {
                        *arg4 = rax_8;
                        arg4[1] = rax_8 + (r14_3 << 3);
                        arg4[2] = rax_8 + (rbp_2 << 3);
                        _free_base(0);
                        *arg4[1] = rax_3;
                        arg4[1] += r15_4;
                    }
                    else
                    {
                        _free_base(0);
                        _free_base(rax_3);
                        rsi = 0xc;
                    }
                }
            }
            else
            {
                *arg4 = _calloc_base(rax_5 + 4, r15_4);
                _free_base(0);
                rcx_3 = *arg4;
                
                if (!rcx_3)
                {
                    _free_base(rax_3);
                    rsi = 0xc;
                }
                else
                {
                    arg4[1] = rcx_3;
                    arg4[2] = &rcx_3[4];
                    *rcx_3 = rax_3;
                    arg4[1] += r15_4;
                }
            }
            
            _free_base(0);
            return rsi;
        }
    }
    
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    /* no return */
}

uint64_t expand_argument_wildcards<char>(char* arg1, char* arg2, int64_t* arg3, int64_t arg4 @ r13)
{
    int64_t var_28 = arg4;
    void var_368;
    int64_t var_48 = __security_cookie ^ &var_368;
    int64_t* r12 = arg3;
    int64_t rax_1;
    
    if (arg2 != arg1)
    {
        do
        {
            rax_1 = *arg2;
            rax_1 -= 0x2f;
            
            if (rax_1 <= 0x2d && TEST_BITQ(0x200000000801, rax_1))
                break;
            
            rax_1 = _mbsdec(arg1, arg2);
            arg2 = rax_1;
        } while (rax_1 != arg1);
    }
    
    arg3 = *arg2;
    uint64_t result;
    
    if (arg3 != 0x3a || arg2 == &arg1[1])
    {
        arg3 -= 0x2f;
        int32_t result_1 = 0;
        
        if (arg3 <= 0x2d)
            rax_1 = 1;
        
        if (arg3 > 0x2d || !TEST_BITQ(0x200000000801, arg3))
            rax_1 = 0;
        
        int64_t var_2c8;
        __builtin_memset(&var_2c8, 0, 0x29);
        char temp0_1 = rax_1;
        rax_1 = -(rax_1);
        void* var_338;
        _LocaleUpdate::_LocaleUpdate(&var_338, nullptr);
        void* var_330;
        uint32_t r8;
        char var_320;
        
        if (*(var_330 + 0xc) != 0xfde9)
        {
            if (sub_1400191b0())
            {
                if (var_320)
                {
                    void* rax_6 = var_338;
                    *(rax_6 + 0x3a8) &= 0xfffffffd;
                }
                
                r8 = 0;
            }
            else
            {
                if (var_320)
                {
                    void* rax_5 = var_338;
                    *(rax_5 + 0x3a8) &= 0xfffffffd;
                }
                
                r8 = 1;
            }
        }
        else
        {
            if (var_320)
            {
                void* rax_3 = var_338;
                *(rax_3 + 0x3a8) &= 0xfffffffd;
            }
            
            r8 = 0xfde9;
        }
        PWSTR lpFileName_1;
        PWSTR lpFileName = lpFileName_1;
        
        if (__acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(arg1, 
                &var_2c8, r8))
            lpFileName = nullptr;
        
        WIN32_FIND_DATAW findFileData;
        HANDLE hFindFile = FindFirstFileExW(lpFileName, FindExInfoStandard, &findFileData, 
            FindExSearchNameMatch, 0, 0);
        
        if (hFindFile != -1)
        {
            int64_t r14_3 = (r12[1] - *r12) >> 3;
            
            while (true)
            {
                int64_t var_2f8;
                __builtin_memset(&var_2f8, 0, 0x29);
                void* var_318;
                _LocaleUpdate::_LocaleUpdate(&var_318, nullptr);
                void* var_310;
                int32_t r8_2;
                char var_300;
                
                if (*(var_310 + 0xc) != 0xfde9)
                {
                    if (sub_1400191b0())
                    {
                        if (var_300)
                        {
                            void* rax_13 = var_318;
                            *(rax_13 + 0x3a8) &= 0xfffffffd;
                        }
                        
                        r8_2 = 0;
                    }
                    else
                    {
                        if (var_300)
                        {
                            void* rax_12 = var_318;
                            *(rax_12 + 0x3a8) &= 0xfffffffd;
                        }
                        
                        r8_2 = 1;
                    }
                }
                else
                {
                    if (var_300)
                    {
                        void* rax_10 = var_318;
                        *(rax_10 + 0x3a8) &= 0xfffffffd;
                    }
                    
                    r8_2 = 0xfde9;
                }
                char* var_2e8;
                char* rcx_7 = var_2e8;
                var_26c;
                
                if (__acrt_wcs_to_mbs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(
                        &var_26c, &var_2f8, r8_2))
                    rcx_7 = nullptr;
                
                char var_2d0;
                
                if (*rcx_7 != 0x2e)
                {
                label_14001fc9a:
                    int32_t result_2 =
                        sub_14001f8bc(rcx_7, arg1, (arg4 - arg4) & (arg2 - arg1 + 1), r12);
                    result_1 = result_2;
                    
                    if (result_2)
                    {
                        if (var_2d0)
                            _free_base(var_2e8);
                        
                        break;
                    }
                    
                    result_1 = 0;
                }
                else
                {
                    int32_t rax_14;
                    rax_14 = rcx_7[1];
                    
                    if (rax_14 && (rax_14 != 0x2e || rcx_7[2]))
                        goto label_14001fc9a;
                }
                
                if (var_2d0)
                    _free_base(var_2e8);
                
                if (!FindNextFileW(hFindFile, &findFileData))
                {
                    int64_t rax_16 = *r12;
                    int64_t rdx_8 = (r12[1] - rax_16) >> 3;
                    
                    if (r14_3 != rdx_8)
                        sub_140025cf0(rax_16 + (r14_3 << 3), rdx_8 - r14_3, 8, sub_14001f510);
                    
                    break;
                }
            }
            
            FindClose(hFindFile);
        }
        else
            result_1 = sub_14001f8bc(arg1, 0, 0, r12);
        
        char var_2a0;
        
        if (var_2a0)
            _free_base(lpFileName_1);
        
        result = result_1;
    }
    else
        result = sub_14001f8bc(arg1, 0, 0, r12);
    
    __security_check_cookie(var_48 ^ &var_368);
    return result;
}

uint64_t j_sub_14001f6b0(int64_t* arg1, int64_t* arg2)
{
    /* tailcall */
    return sub_14001f6b0(arg1, arg2);
}

uint64_t __acrt_GetModuleFileNameA(HMODULE arg1, int64_t arg2, int32_t arg3)
{
    void var_298;
    int64_t rax_1 = __security_cookie ^ &var_298;
    uint64_t rdi = arg3;
    void filename;
    uint64_t result;
    
    if (GetModuleFileNameW(arg1, &filename, 0x105))
    {
        int32_t result_1 = 0;
        int64_t var_258 = arg2;
        uint64_t var_250_1 = rdi;
        uint64_t var_240_1 = rdi;
        int64_t var_248_1 = arg2;
        char var_230_1 = 0;
        void* var_278;
        _LocaleUpdate::_LocaleUpdate(&var_278, nullptr);
        int32_t r8 = 0xfde9;
        void* var_270;
        char var_260;
        
        if (*(var_270 + 0xc) != 0xfde9)
        {
            int32_t rax_7 = sub_1400191b0();
            
            if (rax_7)
            {
                if (var_260)
                {
                    void* rax_9 = var_278;
                    *(rax_9 + 0x3a8) &= 0xfffffffd;
                }
                
                r8 = 0;
            }
            else
            {
                if (var_260 != rax_7)
                {
                    void* rax_8 = var_278;
                    *(rax_8 + 0x3a8) &= 0xfffffffd;
                }
                
                r8 = 1;
            }
        }
        else if (var_260)
        {
            void* rax_6 = var_278;
            *(rax_6 + 0x3a8) &= 0xfffffffd;
        }
        __acrt_wcs_to_mbs_cp<struct __crt_win32_buffer_no_resizing>(&filename, &var_258, r8);
        result = result_1;
    }
    else
    {
        __acrt_errno_map_os_error(GetLastError());
        result = 0;
    }
    
    __security_check_cookie(rax_1 ^ &var_298);
    return result;
}

int64_t __crt_seh_guarded_call<class <lambda_efdfa57d1f175319df784efa44bb7b81>,class <lambda_5f0a4c1567f8adc6734073e5d1e1b35c>& __ptr64,class <lambda_2e8a7d3640ea6ccb4c2413664c2db6fd>,void>::operator()<class <lambda_efdfa57d1f175319df784efa44bb7b81>,class <lambda_5f0a4c1567f8adc6734073e5d1e1b35c>& __ptr64,class <lambda_2e8a7d3640ea6ccb4c2413664c2db6fd> >(int64_t arg1, int32_t* arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* arg_20 = arg4;
    sub_14001182c(*arg2);
    int128_t* rax_2 = *(**arg3 + 0x88) + 0x18;
    char* rcx_2 = data_1400437c0;
    
    if (!rcx_2)
        goto label_14001ff2a;
    
    int64_t i_2;
    
    if (!rax_2)
    {
        sub_14000c550(rcx_2, 0, 0x101);
    label_14001ff2a:
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        i_2 = 2;
    }
    else
    {
        i_2 = 2;
        int64_t i_3 = 2;
        int64_t i;
        
        do
        {
            *rcx_2 = *rax_2;
            *(rcx_2 + 0x10) = rax_2[1];
            *(rcx_2 + 0x20) = rax_2[2];
            *(rcx_2 + 0x30) = rax_2[3];
            *(rcx_2 + 0x40) = rax_2[4];
            *(rcx_2 + 0x50) = rax_2[5];
            *(rcx_2 + 0x60) = rax_2[6];
            rcx_2 = &rcx_2[0x80];
            *(rcx_2 - 0x10) = rax_2[7];
            rax_2 = &rax_2[8];
            i = i_3;
            i_3 -= 1;
        } while (i != 1);
        rax_2 = *rax_2;
        *rcx_2 = rax_2;
    }
    
    int128_t* rax_6 = *(**arg3 + 0x88) + 0x119;
    int128_t* rcx_4 = data_1400437c8;
    
    if (!rcx_4)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    else if (!rax_6)
    {
        sub_14000c550(rcx_4, 0, 0x100);
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    else
    {
        int64_t i_1;
        
        do
        {
            *rcx_4 = *rax_6;
            rcx_4[1] = rax_6[1];
            rcx_4[2] = rax_6[2];
            rcx_4[3] = rax_6[3];
            rcx_4[4] = rax_6[4];
            rcx_4[5] = rax_6[5];
            rcx_4[6] = rax_6[6];
            rcx_4 = &rcx_4[8];
            rcx_4[-1] = rax_6[7];
            rax_6 = &rax_6[8];
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }
    
    int32_t* rdx = **arg3[1];
    int32_t rax_9 = *rdx;
    *rdx -= 1;
    
    if (rax_9 == 1)
    {
        int64_t* rcx_6 = *arg3[1];
        
        if (*rcx_6 != &data_1400416c0)
            _free_base(*rcx_6);
    }
    
    **arg3[1] = *(**arg3 + 0x88);
    int32_t* rax_15 = *(**arg3 + 0x88);
    *rax_15 += 1;
    return sub_140011880(*arg4);
}

uint64_t getSystemCP(uint32_t arg1)
{
    uint32_t rbx = arg1;
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, nullptr);
    data_1400437d8 = 0;
    
    if (rbx == 0xfffffffe)
    {
        data_1400437d8 = 1;
        rbx = GetOEMCP();
    }
    else if (rbx == 0xfffffffd)
    {
        data_1400437d8 = 1;
        rbx = GetACP();
    }
    else if (rbx == 0xfffffffc)
    {
        data_1400437d8 = 1;
        void* var_20;
        rbx = *(var_20 + 0xc);
    }
    
    char var_10;
    
    if (var_10)
    {
        void* rcx_1 = var_28;
        *(rcx_1 + 0x3a8) &= 0xfffffffd;
    }
    
    return rbx;
}

int64_t setSBCS(void* arg1)
{
    char* rbx = arg1 + 0x18;
    int64_t i_3 = 0x101;
    sub_14000c550(rbx, 0, 0x101);
    *(arg1 + 4) = 0;
    *(arg1 + 0x220) = 0;
    __builtin_memset(arg1 + 0xc, 0, 0xc);
    int64_t i;
    
    do
    {
        *rbx = *(&data_1400416c0 - arg1 + rbx);
        rbx = &rbx[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);
    char* rcx_1 = arg1 + 0x119;
    int64_t i_2 = 0x100;
    char result;
    int64_t i_1;
    
    do
    {
        result = *(rcx_1 + &data_1400416c0 - arg1);
        *rcx_1 = result;
        rcx_1 = &rcx_1[1];
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    return result;
}

uint64_t setSBUpLow(void* arg1)
{
    void var_788;
    int64_t rax_1 = __security_cookie ^ &var_788;
    uint32_t CodePage = *(arg1 + 4);
    CPINFO cPInfo;
    BOOL rax_2;
    
    if (CodePage != 0xfde9)
        rax_2 = GetCPInfo(CodePage, &cPInfo);
    
    uint64_t result;
    
    if (CodePage == 0xfde9 || !rax_2)
    {
        int32_t i = 0;
        int64_t rcx_3 = 1;
        
        do
        {
            if (i - 0x41 <= 0x19)
            {
                *(rcx_3 + arg1 + 0x18) |= 0x10;
                result = i + 0x20;
            }
            else if (i - 0x61 > 0x19)
                result = 0;
            else
            {
                *(rcx_3 + arg1 + 0x18) |= 0x20;
                result = i - 0x20;
            }
            
            *(rcx_3 + arg1 + 0x118) = result;
            i += 1;
            rcx_3 += 1;
        } while (i < 0x100);
    }
    else
    {
        int32_t i_1 = 0;
        char var_718[0x90];
        char (* rcx)[0x90] = &var_718;
        int64_t i_4 = 0x100;
        
        do
        {
            *rcx = i_1;
            i_1 += 1;
            rcx = &(*rcx)[1];
        } while (i_1 < 0x100);
        
        i_1 = cPInfo.LeadByte[0];
        var_732;
        char* rdx_2 = &var_732;
        var_718[0] = 0x20;
        
        while (i_1)
        {
            uint32_t i_2 = rdx_2[1];
            uint64_t rcx_1 = i_1;
            
            while (rcx_1 <= i_2)
            {
                if (rcx_1 >= 0x100)
                    break;
                
                var_718[rcx_1] = 0x20;
                rcx_1 = rcx_1 + 1;
            }
            
            rdx_2 = &rdx_2[2];
            i_1 = *rdx_2;
        }
        
        uint16_t var_418[0x200];
        __acrt_GetStringTypeA(nullptr, 1, &var_718, 0x100, &var_418, *(arg1 + 4), 0);
        uint32_t var_760_1;
        void var_618;
        var_760_1 = &var_618;
        uint16_t* var_768_1;
        var_768_1 = 0x100;
        __acrt_LCMapStringA(nullptr, *(arg1 + 0x220), 0x100, &var_718, var_768_1, var_760_1, 0x100, 
            *(arg1 + 4), 0);
        void var_518;
        var_760_1 = &var_518;
        var_768_1 = 0x100;
        __acrt_LCMapStringA(nullptr, *(arg1 + 0x220), 0x200, &var_718, var_768_1, var_760_1, 0x100, 
            *(arg1 + 4), 0);
        result = 1;
        uint16_t (* rdx_5)[0x200] = &var_418;
        int64_t i_3;
        
        do
        {
            char rcx_2;
            
            if (*rdx_5 & 1)
            {
                *(result + arg1 + 0x18) |= 0x10;
                void var_619;
                rcx_2 = *(&var_619 + result);
            }
            else if (!(*rdx_5 & 2))
                rcx_2 = 0;
            else
            {
                *(result + arg1 + 0x18) |= 0x20;
                void var_519;
                rcx_2 = *(&var_519 + result);
            }
            
            *(result + arg1 + 0x118) = rcx_2;
            rdx_5 = &(*rdx_5)[1];
            result += 1;
            i_3 = i_4;
            i_4 -= 1;
        } while (i_3 != 1);
    }
    
    __security_check_cookie(rax_1 ^ &var_788);
    return result;
}

uint64_t setmbcp_internal(uint32_t arg1, char arg2, void* arg3, int64_t* arg4)
{
    int64_t* arg_20 = arg4;
    void* arg_18 = arg3;
    int64_t rsi;
    rsi = arg2;
    sub_1400204f0(arg3, arg4);
    uint32_t rax = getSystemCP(arg1);
    
    if (rax == *(*(arg_18 + 0x88) + 4))
        return 0;
    
    int128_t* rax_2 = _malloc_base(0x228);
    int128_t* rbx_1 = rax_2;
    int32_t rdi_1;
    
    if (!rax_2)
        rdi_1 = -1;
    else
    {
        int64_t i_1 = 4;
        int128_t* rcx_3 = rbx_1;
        int128_t* rax_4 = *(arg_18 + 0x88);
        int64_t i;
        
        do
        {
            *rcx_3 = *rax_4;
            rcx_3[1] = rax_4[1];
            rcx_3[2] = rax_4[2];
            rcx_3[3] = rax_4[3];
            rcx_3[4] = rax_4[4];
            rcx_3[5] = rax_4[5];
            rcx_3[6] = rax_4[6];
            rcx_3 = &rcx_3[8];
            int128_t zmm1 = rax_4[7];
            rax_4 = &rax_4[8];
            rcx_3[-1] = zmm1;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        *rcx_3 = *rax_4;
        rcx_3[1] = rax_4[1];
        rcx_3[2] = rax_4[2];
        *rbx_1 &= i_1;
        int32_t rax_6 = _setmbcp_nolock(rax, rbx_1);
        rdi_1 = rax_6;
        
        if (rax_6 != 0xffffffff)
        {
            if (!rsi)
                sub_14001663c();
            
            int32_t* rcx_6 = *(arg_18 + 0x88);
            int32_t rax_9 = *rcx_6;
            *rcx_6 -= 1;
            
            if (rax_9 == 1)
            {
                int64_t rcx_7 = *(arg_18 + 0x88);
                
                if (rcx_7 != &data_1400416c0)
                    _free_base(rcx_7);
            }
            
            *rbx_1 = 1;
            int128_t* rcx_8 = rbx_1;
            rbx_1 = nullptr;
            *(arg_18 + 0x88) = rcx_8;
            
            if (!(*(arg_18 + 0x3a8) & 2) && !(data_140041310 & 1))
            {
                void** var_28 = &arg_18;
                int64_t** var_20_1 = &arg_20;
                int32_t var_34 = 5;
                int32_t var_30 = 5;
                void var_38;
                __crt_seh_guarded_call<class <lambda_efdfa57d1f175319df784efa44bb7b81>,class <lambda_5f0a4c1567f8adc6734073e5d1e1b35c>& __ptr64,class <lambda_2e8a7d3640ea6ccb4c2413664c2db6fd>,void>::operator()<class <lambda_efdfa57d1f175319df784efa44bb7b81>,class <lambda_5f0a4c1567f8adc6734073e5d1e1b35c>& __ptr64,class <lambda_2e8a7d3640ea6ccb4c2413664c2db6fd> >(
                    &var_38, &var_30, &var_28, &var_34);
                
                if (rsi)
                    data_140041200 = *arg_20;
            }
        }
        else
        {
            *_errno() = 0x16;
            rdi_1 = -1;
        }
    }
    
    _free_base(rbx_1);
    return rdi_1;
}

int32_t* sub_1400204f0(void* arg1, int64_t* arg2)
{
    int32_t* result;
    
    if (!(*(arg1 + 0x3a8) & *data_140041310) || !*(arg1 + 0x90))
    {
        sub_14001182c(5);
        result = *(arg1 + 0x88);
        
        if (result != *arg2)
        {
            if (result)
            {
                int32_t rax_1 = *result;
                *result -= 1;
                
                if (rax_1 == 1 && result != &data_1400416c0)
                    _free_base(result);
            }
            
            int32_t* result_1 = *arg2;
            *(arg1 + 0x88) = result_1;
            *result_1 += 1;
            result = result_1;
        }
        
        sub_140011880(5);
    }
    else
        result = *(arg1 + 0x88);
    
    if (result)
        return result;
    
    abort();
    /* no return */
}

uint64_t __acrt_initialize_multibyte()
{
    if (!data_1400437dc)
    {
        data_1400437c8 = &data_1400414c0;
        data_1400437d0 = &data_1400416c0;
        data_1400437c0 = &data_1400413b0;
        setmbcp_internal(0xfffffffd, 1, __acrt_getptd_head(), &data_1400437d0);
        data_1400437dc = 1;
    }
    
    uint64_t result;
    result = 1;
    return result;
}

int64_t __acrt_update_thread_multibyte_data()
{
    /* tailcall */
    return sub_1400204f0(__acrt_getptd(), &data_1400437d0);
}

int64_t _setmbcp_nolock(uint32_t arg1, void* arg2)
{
    void var_78;
    int64_t rax_1 = __security_cookie ^ &var_78;
    uint32_t CodePage = getSystemCP(arg1);
    wchar16 const* const rbx = nullptr;
    int64_t result;
    
    if (!CodePage)
    {
        setSBCS(arg2);
        result = 0;
    }
    else
    {
        int32_t i = 0;
        int32_t* rax_2 = &data_1400415d0;
        int32_t rbp_1 = 1;
        
        do
        {
            if (*rax_2 == CodePage)
            {
                sub_14000c550(arg2 + 0x18, 0, 0x101);
                char* r15_1 = &data_1400415c0;
                int64_t j_3 = 4;
                uint64_t r11_2 = i * 0x30;
                char* r9_1 = &data_1400415e0 + r11_2;
                int64_t j;
                
                do
                {
                    char* rdx_2 = r9_1;
                    
                    if (*r9_1)
                    {
                        while (rdx_2[1])
                        {
                            uint32_t r8_1 = *rdx_2;
                            
                            if (r8_1 <= rdx_2[1])
                            {
                                uint64_t r10_1 = r8_1 + 1;
                                
                                while (r10_1 < 0x101)
                                {
                                    uint32_t rax_10;
                                    rax_10 = *r15_1;
                                    r8_1 += 1;
                                    *(r10_1 + arg2 + 0x18) |= rax_10;
                                    r10_1 = r10_1 + 1;
                                    
                                    if (r8_1 > rdx_2[1])
                                        break;
                                }
                            }
                            
                            rdx_2 = &rdx_2[2];
                            
                            if (!*rdx_2)
                                break;
                        }
                    }
                    
                    r9_1 = &r9_1[8];
                    r15_1 = &r15_1[1];
                    j = j_3;
                    j_3 -= 1;
                } while (j != 1);
                *(arg2 + 4) = CodePage;
                *(arg2 + 8) = 1;
                
                if (CodePage == 0x3a4)
                    rbx = u"ja-JP";
                else if (CodePage == 0x3a8)
                    rbx = u"zh-CN";
                else if (CodePage == 0x3b5)
                    rbx = u"ko-KR";
                else if (CodePage == 0x3b6)
                    rbx = u"zh-TW";
                
                *(arg2 + 0x220) = rbx;
                int16_t* rdx_3 = arg2 + 0xc;
                int64_t j_2 = 6;
                int64_t j_1;
                
                do
                {
                    *rdx_3 = *(r11_2 - arg2 + &data_1400415d0 + rdx_3 - 8);
                    rdx_3 = &rdx_3[1];
                    j_1 = j_2;
                    j_2 -= 1;
                } while (j_1 != 1);
                goto label_1400206ca;
            }
            
            i += 1;
            rax_2 = &rax_2[0xc];
        } while (i < 5);
        
        if (CodePage == 0xfde8)
            result = 0xffffffff;
        else if (!IsValidCodePage(CodePage))
            result = 0xffffffff;
        else if (CodePage != 0xfde9)
        {
            CPINFO cPInfo;
            
            if (GetCPInfo(CodePage, &cPInfo))
            {
                sub_14000c550(arg2 + 0x18, 0, 0x101);
                bool cond:0_1 = cPInfo.MaxCharSize != 2;
                *(arg2 + 4) = CodePage;
                *(arg2 + 0x220) = 0;
                
                if (cond:0_1)
                    rbp_1 = 0;
                else
                {
                    var_52;
                    char* rcx_4 = &var_52;
                    
                    if (cPInfo.LeadByte[0])
                    {
                        while (rcx_4[1])
                        {
                            uint32_t rax_5 = rcx_4[1];
                            uint32_t rdx_1 = *rcx_4;
                            
                            if (rdx_1 <= rax_5)
                            {
                                uint64_t rdi_2 = rdx_1 + 1;
                                uint64_t i_4 = rax_5 - rdx_1 + 1;
                                uint64_t i_1;
                                
                                do
                                {
                                    *(rdi_2 + arg2 + 0x18) |= 4;
                                    rdi_2 = rdi_2 + 1;
                                    i_1 = i_4;
                                    i_4 -= 1;
                                } while (i_1 != 1);
                            }
                            
                            rcx_4 = &rcx_4[2];
                            
                            if (!*rcx_4)
                                break;
                        }
                    }
                    
                    char* rax_7 = arg2 + 0x1a;
                    int64_t i_3 = 0xfe;
                    int64_t i_2;
                    
                    do
                    {
                        *rax_7 |= 8;
                        rax_7 = &rax_7[1];
                        i_2 = i_3;
                        i_3 -= 1;
                    } while (i_2 != 1);
                    int32_t rcx_5 = *(arg2 + 4);
                    wchar16 const* const rax_8;
                    
                    if (rcx_5 == 0x3a4)
                        rax_8 = u"ja-JP";
                    else if (rcx_5 == 0x3a8)
                        rax_8 = u"zh-CN";
                    else if (rcx_5 == 0x3b5)
                        rax_8 = u"ko-KR";
                    else if (rcx_5 == 0x3b6)
                        rax_8 = u"zh-TW";
                    else
                        rax_8 = nullptr;
                    
                    *(arg2 + 0x220) = rax_8;
                }
                
                *(arg2 + 8) = rbp_1;
                goto label_1400206c4;
            }
            
            if (data_1400437d8)
            {
                setSBCS(arg2);
                result = 0;
            }
            else
                result = 0xffffffff;
        }
        else
        {
            *(arg2 + 4) = 0xfde9;
            *(arg2 + 0x220) = 0;
            *(arg2 + 0x18) = 0;
            *(arg2 + 0x1c) = 0;
        label_1400206c4:
            __builtin_memset(arg2 + 0xc, 0, 0xc);
        label_1400206ca:
            setSBUpLow(arg2);
            result = 0;
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_78);
    return result;
}

int64_t x_ismbbtype_l(int128_t* arg1, char arg2, int32_t arg3, char arg4)
{
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg1);
    uint64_t rdx_1 = arg2;
    int64_t var_18;
    int32_t result;
    
    if (!(*(rdx_1 + var_18 + 0x19) & arg4))
    {
        int64_t* var_20;
        
        if (!arg3)
            result = 0;
        else
            result = *(*var_20 + (rdx_1 << 1)) & arg3;
    }
    
    if (*(rdx_1 + var_18 + 0x19) & arg4 || result)
        result = 1;
    
    char var_10;
    
    if (var_10)
    {
        void* rcx_2 = var_28;
        *(rcx_2 + 0x3a8) &= 0xfffffffd;
    }
    
    return result;
}

int64_t _ismbblead(char arg1)
{
    /* tailcall */
    return x_ismbbtype_l(nullptr, arg1, 0, 4);
}

int64_t __dcrt_get_narrow_environment_from_os()
{
    PWSTR penv = GetEnvironmentStringsW();
    int32_t rax_1;
    int64_t rbp_1;
    int32_t rsi_4;
    
    if (penv)
    {
        PWSTR penv_1 = penv;
        
        if (*penv)
        {
            do
            {
                int64_t rax = -1;
                
                do
                    rax += 1;
                 while (penv_1[rax]);
                
                penv_1 = &penv_1[rax + 1];
            } while (*penv_1);
        }
        
        int64_t var_10_1 = 0;
        int64_t var_18_1 = 0;
        rsi_4 = (penv_1 - penv + 2) >> 1;
        rax_1 = __acrt_WideCharToMultiByte(0, 0, penv, rsi_4, 0, 0);
        rbp_1 = rax_1;
    }
    
    int64_t result;
    
    if (!penv || !rax_1)
        result = 0;
    else
    {
        int64_t result_2 = _malloc_base(rbp_1);
        int64_t result_1 = result_2;
        int32_t rax_2;
        
        if (result_2)
        {
            int64_t var_10_2 = 0;
            int64_t var_18_2 = 0;
            rax_2 = __acrt_WideCharToMultiByte(0, 0, penv, rsi_4, result_2, rbp_1);
        }
        
        if (!result_2 || !rax_2)
            result = 0;
        else
        {
            result = result_1;
            result_1 = 0;
        }
        
        _free_base(result_1);
    }
    
    if (penv)
        FreeEnvironmentStringsW(penv);
    
    return result;
}

uint64_t sub_140020a70(char* arg1, int32_t arg2)
{
    int32_t rsi = 0;
    
    if (!arg1)
    {
        *_errno() = 0x16;
        return -1;
    }
    
    char* rdi_1 = arg1;
    char* rax_2 = sub_14002807c(arg1, 0x3d);
    int32_t rbp_1;
    
    if (!rax_2 || rax_2 == arg1)
    {
    label_140020d47:
        rsi = -1;
        *_errno() = 0x16;
    label_140020d51:
        rbp_1 = rsi;
    label_140020d53:
        rsi = rbp_1;
    }
    else
    {
        int64_t* r14_1 = data_140043038;
        int64_t rbp;
        rbp = rax_2[1];
        char arg_8 = rbp;
        
        if (r14_1 == data_140043050)
        {
            int64_t* rax_3 = copy_environment<char>(r14_1);
            r14_1 = rax_3;
            data_140043038 = rax_3;
        }
        
        if (!r14_1)
        {
            if (!arg2 || !data_140043040)
            {
                if (!rbp)
                    goto label_140020d51;
                
                data_140043038 = _calloc_base(1, 8);
                _free_base(0);
                r14_1 = data_140043038;
                
                if (!r14_1)
                {
                    rbp_1 = rbp | 0xffffffff;
                    goto label_140020d53;
                }
                
                if (!data_140043040)
                {
                    data_140043040 = _calloc_base(1, 8);
                    _free_base(0);
                    
                    if (!data_140043040)
                    {
                        rbp_1 = rbp | 0xffffffff;
                        goto label_140020d53;
                    }
                    
                    r14_1 = data_140043038;
                }
            }
            else
            {
                if (!__dcrt_get_or_create_narrow_environment_nolock())
                    goto label_140020d47;
                
                r14_1 = data_140043038;
                
                if (r14_1 == data_140043050)
                {
                    int64_t* rax_5 = copy_environment<char>(r14_1);
                    r14_1 = rax_5;
                    data_140043038 = rax_5;
                }
            }
            
            if (!r14_1)
            {
                rbp_1 = rbp | 0xffffffff;
                goto label_140020d53;
            }
        }
        
        char* rax_8 = *r14_1;
        char* r12_2 = rax_2 - arg1;
        int64_t* rbx_1 = r14_1;
        int64_t rbx_3;
        
        while (true)
        {
            if (!rax_8)
            {
                rbx_3 = -(((rbx_1 - r14_1) >> 3));
                break;
            }
            
            if (!sub_1400265e4(arg1, rax_8, r12_2))
            {
                int64_t rax_10 = *rbx_1;
                
                if (r12_2[rax_10] == 0x3d || !r12_2[rax_10])
                {
                    rbx_3 = (rbx_1 - r14_1) >> 3;
                    break;
                }
            }
            
            rbx_1 = &rbx_1[1];
            rax_8 = *rbx_1;
        }
        
        if (rbx_3 >= 0 && *r14_1)
        {
            _free_base(r14_1[rbx_3]);
            
            if (!rbp)
            {
                while (r14_1[rbx_3])
                {
                    r14_1[rbx_3] = r14_1[rbx_3 + 1];
                    rbx_3 += 1;
                }
                
                void* rax_12 = _recalloc_base(r14_1, rbx_3, 8);
                _free_base(0);
                
                if (rax_12)
                    data_140043038 = rax_12;
            }
            else
            {
                r14_1[rbx_3] = arg1;
            label_140020cbe:
                rdi_1 = nullptr;
            }
            
            if (arg2)
            {
                int64_t rbp_3 = rbp | 0xffffffffffffffff;
                int64_t r14_3 = rbp_3;
                
                do
                    r14_3 += 1;
                 while (arg1[r14_3]);
                
                char* rax_14 = _calloc_base(r14_3 + 2, 1);
                char* rbx_8 = rax_14;
                
                if (rax_14)
                {
                    int32_t rax_15;
                    int64_t rdx_4;
                    rax_15 = strcpy_s(rax_14, r14_3 + 2, arg1);
                    
                    if (rax_15)
                    {
                        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                        /* no return */
                    }
                    
                    void* rcx_9 = &rax_2[1] + rbx_8 - arg1;
                    char temp0_1 = arg_8;
                    arg_8 = -(arg_8);
                    *(rcx_9 - 1) = 0;
                    
                    if (!__acrt_SetEnvironmentVariableA(rbx_8, (rdx_4 - rdx_4) & rcx_9))
                    {
                        rsi = rbp_3;
                        *_errno() = 0x2a;
                    }
                }
                
                _free_base(rbx_8);
            }
        }
        else if (!rbp)
            rsi = rsi;
        else
        {
            int64_t rbx_7 = -(rbx_3);
            void* rax_13;
            
            if (rbx_7 + 2 >= rbx_7 && rbx_7 + 2 < 0x1fffffffffffffff)
            {
                rax_13 = _recalloc_base(r14_1, rbx_7 + 2, 8);
                _free_base(0);
            }
            
            if (rbx_7 + 2 >= rbx_7 && rbx_7 + 2 < 0x1fffffffffffffff && rax_13)
            {
                *(rax_13 + (rbx_7 << 3)) = arg1;
                *(rax_13 + (rbx_7 << 3) + 8) = 0;
                data_140043038 = rax_13;
                goto label_140020cbe;
            }
            
            rsi = rbp | 0xffffffff;
        }
    }
    _free_base(rdi_1);
    return rsi;
}

int64_t copy_environment<char>(int64_t* arg1)
{
    int64_t* rdi = arg1;
    
    if (!arg1)
        return 0;
    
    int64_t rcx = 0;
    int64_t* rax_1 = rdi;
    
    if (*rdi)
    {
        do
        {
            rcx += 1;
            rax_1 = &rax_1[1];
        } while (*rax_1);
    }
    
    int64_t result = _calloc_base(rcx + 1, 8);
    
    if (!result)
    {
    label_140020e6f:
        abort();
        /* no return */
    }
    
    char* i = *rdi;
    
    if (i)
    {
        int64_t* r14_2 = result - rdi;
        
        do
        {
            int64_t rsi_1 = -1;
            
            do
                rsi_1 += 1;
             while (i[rsi_1]);
            
            *(r14_2 + rdi) = _calloc_base(rsi_1 + 1, 1);
            _free_base(0);
            char* rcx_3 = *(r14_2 + rdi);
            
            if (!rcx_3)
                goto label_140020e6f;
            
            if (strcpy_s(rcx_3, rsi_1 + 1, *rdi))
            {
                _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                /* no return */
            }
            
            rdi = &rdi[1];
            i = *rdi;
        } while (i);
    }
    
    _free_base(0);
    return result;
}

uint64_t j_sub_140020a70(char* arg1, int32_t arg2)
{
    /* tailcall */
    return sub_140020a70(arg1, arg2);
}

void* __acrt_lowio_create_handle_array()
{
    void* result_1 = _calloc_base(0x40, 0x48);
    void* result = nullptr;
    
    if (result_1)
    {
        if (result_1 != result_1 + 0x1200)
        {
            int64_t* rdi_1 = result_1 + 0x30;
            
            do
            {
                sub_140019574(&rdi_1[-6], 0xfa0, 0);
                rdi_1[-1] = -1;
                char* rcx_2 = rdi_1 + 0xe;
                *rdi_1 = 0;
                int32_t i = 0;
                rdi_1[1] = 0xa0a0000;
                *(rdi_1 + 0xc) = 0xa;
                *(rdi_1 + 0xd) &= 0xf8;
                
                do
                {
                    *rcx_2 = 0;
                    i += 1;
                    rcx_2 = &rcx_2[1];
                } while (i < 5);
                
                rdi_1 = &rdi_1[9];
            } while (&rdi_1[-6] != result_1 + 0x1200);
        }
        
        result = result_1;
    }
    
    _free_base(0);
    return result;
}

void __acrt_lowio_destroy_handle_array(CRITICAL_SECTION* arg1)
{
    if (!arg1)
        return;
    
    CRITICAL_SECTION* lpCriticalSection = arg1;
    
    if (arg1 != arg1 + 0x1200)
    {
        do
        {
            DeleteCriticalSection(lpCriticalSection);
            lpCriticalSection += 0x48;
        } while (lpCriticalSection != arg1 + 0x1200);
    }
    
    _free_base(arg1);
}

uint64_t __acrt_lowio_ensure_fh_exists(int32_t arg1)
{
    if (arg1 >= 0x2000)
    {
        *_errno() = 9;
        _invalid_parameter_noinfo();
        return 9;
    }
    
    int32_t rdi_1 = 0;
    sub_14001182c(7);
    int64_t rbx_1 = 0;
    int32_t rax_2 = data_140043690;
    
    while (true)
    {
        int64_t var_18_1 = rbx_1;
        
        if (arg1 < rax_2)
            break;
        
        if (!(&data_140043290)[rbx_1])
        {
            void* rax_3 = __acrt_lowio_create_handle_array();
            (&data_140043290)[rbx_1] = rax_3;
            
            if (!rax_3)
            {
                rdi_1 = rax_3 + 0xc;
                break;
            }
            
            rax_2 = data_140043690 + 0x40;
            data_140043690 = rax_2;
        }
        
        rbx_1 += 1;
    }
    
    sub_140011880(7);
    return rdi_1;
}

int64_t sub_140021020(int32_t arg1)
{
    int64_t rdx_2 = arg1;
    /* tailcall */
    return EnterCriticalSection((&data_140043290)[rdx_2 >> 6] + (rdx_2 & 0x3f) * 0x48);
}

int64_t sub_140021048(int32_t arg1)
{
    int64_t rdx_2 = arg1;
    /* tailcall */
    return LeaveCriticalSection((&data_140043290)[rdx_2 >> 6] + (rdx_2 & 0x3f) * 0x48);
}

int64_t _free_osfhnd(int32_t arg1)
{
    int64_t rbx = arg1;
    
    if (arg1 >= 0 && rbx < data_140043690)
    {
        int64_t rsi_2 = rbx >> 6;
        uint64_t rdi_1 = (rbx & 0x3f) * 9;
        int64_t rax_3 = (&data_140043290)[rsi_2];
        
        if (*(rax_3 + (rdi_1 << 3) + 0x38) & 1 && *(rax_3 + (rdi_1 << 3) + 0x28) != -1)
        {
            int32_t rax_4 = sub_140015a68();
            
            if (rax_4 == 1)
            {
                if (!rbx)
                    SetStdHandle(STD_INPUT_HANDLE, nullptr);
                else if (rbx == rax_4)
                    SetStdHandle(STD_OUTPUT_HANDLE, nullptr);
                else if (rbx - rax_4 == rax_4)
                    SetStdHandle(STD_ERROR_HANDLE, nullptr);
            }
            
            *((&data_140043290)[rsi_2] + (rdi_1 << 3) + 0x28) = -1;
            return 0;
        }
    }
    
    *_errno() = 9;
    *__doserrno() = 0;
    return 0xffffffff;
}

int64_t _get_osfhandle(int32_t arg1)
{
    if (arg1 != 0xfffffffe)
    {
        if (arg1 >= 0 && arg1 < data_140043690)
        {
            int64_t rcx = arg1;
            uint64_t rdx_1 = (rcx & 0x3f) * 9;
            int64_t rax_5 = (&data_140043290)[rcx >> 6];
            
            if (*(rax_5 + (rdx_1 << 3) + 0x38) & 1)
                return *(rax_5 + (rdx_1 << 3) + 0x28);
        }
        
        *__doserrno() = 0;
        *_errno() = 9;
        _invalid_parameter_noinfo();
    }
    else
    {
        *__doserrno() = 0;
        *_errno() = 9;
    }
    
    return -1;
}

void __acrt_locale_free_monetary(void* arg1)
{
    if (!arg1)
        return;
    
    int64_t rcx = *(arg1 + 0x18);
    
    if (rcx != data_140040f98)
        _free_base(rcx);
    
    int64_t rcx_1 = *(arg1 + 0x20);
    
    if (rcx_1 != data_140040fa0)
        _free_base(rcx_1);
    
    int64_t rcx_2 = *(arg1 + 0x28);
    
    if (rcx_2 != data_140040fa8)
        _free_base(rcx_2);
    
    int64_t rcx_3 = *(arg1 + 0x30);
    
    if (rcx_3 != data_140040fb0)
        _free_base(rcx_3);
    
    int64_t rcx_4 = *(arg1 + 0x38);
    
    if (rcx_4 != data_140040fb8)
        _free_base(rcx_4);
    
    int64_t rcx_5 = *(arg1 + 0x40);
    
    if (rcx_5 != data_140040fc0)
        _free_base(rcx_5);
    
    int64_t rcx_6 = *(arg1 + 0x48);
    
    if (rcx_6 != data_140040fc8)
        _free_base(rcx_6);
    
    int64_t rcx_7 = *(arg1 + 0x68);
    
    if (rcx_7 != data_140040fe8)
        _free_base(rcx_7);
    
    int64_t rcx_8 = *(arg1 + 0x70);
    
    if (rcx_8 != data_140040ff0)
        _free_base(rcx_8);
    
    int64_t rcx_9 = *(arg1 + 0x78);
    
    if (rcx_9 != data_140040ff8)
        _free_base(rcx_9);
    
    int64_t rcx_10 = *(arg1 + 0x80);
    
    if (rcx_10 != data_140041000)
        _free_base(rcx_10);
    
    int64_t rcx_11 = *(arg1 + 0x88);
    
    if (rcx_11 != data_140041008)
        _free_base(rcx_11);
    
    int64_t rcx_12 = *(arg1 + 0x90);
    
    if (rcx_12 != data_140041010)
        _free_base(rcx_12);
}

int64_t __acrt_locale_initialize_monetary(void* arg1)
{
    int32_t* r15 = nullptr;
    void* var_38 = arg1;
    int64_t var_30 = 0;
    void** r12_1;
    void** r14;
    
    if (*(arg1 + 0x140) || *(arg1 + 0x148))
    {
        r14 = _calloc_base(1, 0x98);
        _free_base(0);
        
        if (!r14)
            return 1;
        
        r12_1 = _calloc_base(1, 4);
        _free_base(0);
        
        if (!r12_1)
        {
            _free_base(r14);
            return 1;
        }
        
        if (!*(arg1 + 0x140))
        {
            *r14 = *data_140040f80;
            *(r14 + 0x10) = *data_140040f90;
            *(r14 + 0x20) = *data_140040fa0;
            *(r14 + 0x30) = *data_140040fb0;
            *(r14 + 0x40) = *data_140040fc0;
            *(r14 + 0x50) = data_140040fd0;
            *(r14 + 0x60) = *data_140040fe0;
            *(r14 + 0x70) = *data_140040ff0;
            *(r14 + 0x80) = *data_140041000;
            r14[0x12] = data_140041010;
        }
        else
        {
            r15 = _calloc_base(1, 4);
            _free_base(0);
            
            if (!r15)
            {
                _free_base(r14);
                _free_base(r12_1);
                return 1;
            }
            
            int64_t rdi_1 = *(arg1 + 0x140);
            int32_t rbx_4 = sub_14001de10(&var_38, 1, rdi_1, 0x15, &r14[3])
                | sub_14001de10(&var_38, 1, rdi_1, 0x14, &r14[4])
                | sub_14001de10(&var_38, 1, rdi_1, 0x16, &r14[5])
                | sub_14001de10(&var_38, 1, rdi_1, 0x17, &r14[6]);
            int32_t rbx_7 = rbx_4 | sub_14001de10(&var_38, 1, rdi_1, 0x18, &r14[7])
                | sub_14001de10(&var_38, 1, rdi_1, 0x50, &r14[8])
                | sub_14001de10(&var_38, 1, rdi_1, 0x51, &r14[9]);
            int32_t rbx_10 = rbx_7 | sub_14001de10(&var_38, 0, rdi_1, 0x1a, &r14[0xa])
                | sub_14001de10(&var_38, 0, rdi_1, 0x19, r14 + 0x51)
                | sub_14001de10(&var_38, 0, rdi_1, 0x54, r14 + 0x52);
            int32_t rbx_13 = rbx_10 | sub_14001de10(&var_38, 0, rdi_1, 0x55, r14 + 0x53)
                | sub_14001de10(&var_38, 0, rdi_1, 0x56, r14 + 0x54)
                | sub_14001de10(&var_38, 0, rdi_1, 0x57, r14 + 0x55);
            int32_t rbx_16 = rbx_13 | sub_14001de10(&var_38, 0, rdi_1, 0x52, r14 + 0x56)
                | sub_14001de10(&var_38, 0, rdi_1, 0x53, r14 + 0x57)
                | sub_14001de10(&var_38, 2, rdi_1, 0x15, &r14[0xd]);
            int32_t rbx_19 = rbx_16 | sub_14001de10(&var_38, 2, rdi_1, 0x14, &r14[0xe])
                | sub_14001de10(&var_38, 2, rdi_1, 0x16, &r14[0xf])
                | sub_14001de10(&var_38, 2, rdi_1, 0x17, &r14[0x10]);
            int32_t rbx_20 = rbx_19 | sub_14001de10(&var_38, 2, rdi_1, 0x50, &r14[0x11]);
            
            if ((sub_14001de10(&var_38, 2, rdi_1, 0x51, &r14[0x12]) | rbx_20))
            {
                __acrt_locale_free_monetary(r14);
                _free_base(r14);
                _free_base(r12_1);
                _free_base(r15);
                return 1;
            }
            
            uint64_t rdx_1 = r14[7];
            uint64_t rax_43;
            rax_43 = *rdx_1;
            
            while (rax_43)
            {
                char i = rax_43 - 0x30;
                
                if (i <= 9)
                {
                    *rdx_1 = i;
                    rdx_1 += 1;
                }
                else if (rax_43 != 0x3b)
                    rdx_1 += 1;
                else
                {
                    uint64_t r8_22 = rdx_1;
                    
                    do
                    {
                        i = *(r8_22 + 1);
                        *r8_22 = i;
                        r8_22 += 1;
                    } while (i);
                }
                
                rax_43 = *rdx_1;
            }
        }
        
        *r14 = **(arg1 + 0xf8);
        r14[1] = *(*(arg1 + 0xf8) + 8);
        r14[2] = *(*(arg1 + 0xf8) + 0x10);
        r14[0xb] = *(*(arg1 + 0xf8) + 0x58);
        r14[0xc] = *(*(arg1 + 0xf8) + 0x60);
        *r12_1 = 1;
        
        if (r15)
            *r15 = 1;
    }
    else
    {
        r12_1 = nullptr;
        r14 = &data_140040f80;
    }
    
    int32_t* rax_51 = *(arg1 + 0xf0);
    
    if (rax_51)
        *rax_51 -= 1;
    
    int32_t* rcx_34 = *(arg1 + 0xe0);
    
    if (rcx_34)
    {
        int32_t rax_52 = *rcx_34;
        *rcx_34 -= 1;
        
        if (rax_52 == 1)
        {
            _free_base(*(arg1 + 0xf8));
            _free_base(*(arg1 + 0xe0));
        }
    }
    
    *(arg1 + 0xf0) = r15;
    *(arg1 + 0xe0) = r12_1;
    *(arg1 + 0xf8) = r14;
    return 0;
}

void __acrt_locale_free_numeric(int64_t* arg1)
{
    if (!arg1)
        return;
    
    int64_t rcx = *arg1;
    
    if (rcx != data_140040f80)
        _free_base(rcx);
    
    int64_t rcx_1 = arg1[1];
    
    if (rcx_1 != data_140040f88)
        _free_base(rcx_1);
    
    int64_t rcx_2 = arg1[2];
    
    if (rcx_2 != data_140040f90)
        _free_base(rcx_2);
    
    int64_t rcx_3 = arg1[0xb];
    
    if (rcx_3 != *(data_140040fd0 + 8))
        _free_base(rcx_3);
    
    int64_t rcx_4 = arg1[0xc];
    
    if (rcx_4 != data_140040fe0)
        _free_base(rcx_4);
}

uint64_t __acrt_locale_initialize_numeric(void* arg1)
{
    void* var_38 = arg1;
    int64_t var_30 = 0;
    void** rsi;
    void** r12_1;
    int32_t* r15_1;
    
    if (*(arg1 + 0x148) || *(arg1 + 0x140))
    {
        int32_t r14_1 = 1;
        void** rax_1 = _calloc_base(1, 0x98);
        rsi = rax_1;
        
        if (!rax_1)
            return r14_1;
        
        int128_t* rax_2 = *(arg1 + 0xf8);
        *rsi = *rax_2;
        *(rsi + 0x10) = rax_2[1];
        *(rsi + 0x20) = rax_2[2];
        *(rsi + 0x30) = rax_2[3];
        *(rsi + 0x40) = rax_2[4];
        *(rsi + 0x50) = rax_2[5];
        *(rsi + 0x60) = rax_2[6];
        *(rsi + 0x70) = rax_2[7];
        *(rsi + 0x80) = rax_2[8];
        rsi[0x12] = rax_2[9];
        r12_1 = _malloc_base(4);
        _free_base(0);
        
        if (!r12_1)
        {
            _free_base(rsi);
            return r14_1;
        }
        
        *r12_1 = nullptr;
        
        if (!*(arg1 + 0x148))
        {
            r15_1 = nullptr;
            *rsi = data_140040f80;
            rsi[1] = data_140040f88;
            rsi[2] = data_140040f90;
            rsi[0xb] = *(data_140040fd0 + 8);
            rsi[0xc] = data_140040fe0;
        }
        else
        {
            r15_1 = _malloc_base(4);
            _free_base(0);
            
            if (!r15_1)
            {
                _free_base(rsi);
            label_140021a43:
                _free_base(r12_1);
                return r14_1;
            }
            
            *r15_1 = 0;
            int64_t rdi_1 = *(arg1 + 0x148);
            int32_t rbx_4 = sub_14001de10(&var_38, 1, rdi_1, 0xe, rsi)
                | sub_14001de10(&var_38, 1, rdi_1, 0xf, &rsi[1])
                | sub_14001de10(&var_38, 1, rdi_1, 0x10, &rsi[2])
                | sub_14001de10(&var_38, 2, rdi_1, 0xe, &rsi[0xb]);
            
            if ((sub_14001de10(&var_38, 2, rdi_1, 0xf, &rsi[0xc]) | rbx_4))
            {
                __acrt_locale_free_numeric(rsi);
                _free_base(rsi);
                _free_base(r15_1);
                r14_1 = -1;
                goto label_140021a43;
            }
            
            uint64_t rdx_1 = rsi[2];
            
            while (true)
            {
                uint64_t rax_13;
                rax_13 = *rdx_1;
                
                if (!rax_13)
                    break;
                
                char i = rax_13 - 0x30;
                
                if (i <= 9)
                    *rdx_1 = i;
                else if (rax_13 == 0x3b)
                {
                    uint64_t r8_6 = rdx_1;
                    
                    do
                    {
                        i = *(r8_6 + 1);
                        *r8_6 = i;
                        r8_6 += 1;
                    } while (i);
                    
                    continue;
                }
                
                rdx_1 += 1;
            }
        }
        
        *r12_1 = 1;
        
        if (r15_1)
            *r15_1 = 1;
    }
    else
    {
        r15_1 = nullptr;
        rsi = &data_140040f80;
        r12_1 = nullptr;
    }
    
    int32_t* rax_19 = *(arg1 + 0xe8);
    
    if (rax_19)
        *rax_19 -= 1;
    
    int32_t* rcx_11 = *(arg1 + 0xe0);
    
    if (rcx_11)
    {
        int32_t rax_20 = *rcx_11;
        *rcx_11 -= 1;
        
        if (rax_20 == 1)
        {
            _free_base(*(arg1 + 0xe0));
            _free_base(*(arg1 + 0xf8));
        }
    }
    
    *(arg1 + 0xe8) = r15_1;
    *(arg1 + 0xe0) = r12_1;
    *(arg1 + 0xf8) = rsi;
    return 0;
}

void* free_crt_array_internal(int64_t* arg1, int64_t arg2)
{
    int64_t rdi = 0;
    void* result = &arg1[arg2];
    int64_t* rbx = arg1;
    int64_t rsi_1 = arg2 & 0x1fffffffffffffff;
    
    if (rbx > result)
        rsi_1 = 0;
    
    if (rsi_1)
    {
        do
        {
            result = _free_base(*rbx);
            rdi += 1;
            rbx = &rbx[1];
        } while (rdi != rsi_1);
    }
    
    return result;
}

int64_t initialize_lc_time(void* arg1, void* arg2)
{
    int16_t* r14 = *(arg2 + 0x150);
    int32_t rsi = 0;
    void* var_38 = arg2;
    int64_t var_30 = 0;
    *(arg1 + 0x2b8) = sub_1400165b8(r14);
    uint32_t r15 = 0x31;
    int64_t i_2 = 7;
    int64_t i;
    
    do
    {
        int64_t* rdi_1 = arg1 + (((r15 - 0x30) % 7) << 3);
        int32_t rsi_3 = rsi | sub_14001de10(&var_38, 1, r14, r15, rdi_1)
            | sub_14001de10(&var_38, 1, r14, r15 - 7, &rdi_1[7])
            | sub_14001de10(&var_38, 2, r14, r15, &rdi_1[0x2c]);
        rsi = rsi_3 | sub_14001de10(&var_38, 2, r14, r15 - 7, &rdi_1[0x33]);
        r15 += 1;
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    int32_t r15_1 = i_2 + 0x38;
    uint64_t i_3 = r15_1 - 0x2c;
    int64_t* rdi_2 = arg1 + 0xd0;
    uint64_t i_1;
    
    do
    {
        int32_t rsi_6 = rsi | sub_14001de10(&var_38, 1, r14, r15_1 + 0xc, &rdi_2[-0xc])
            | sub_14001de10(&var_38, 1, r14, r15_1, rdi_2)
            | sub_14001de10(&var_38, 2, r14, r15_1 + 0xc, &rdi_2[0x20]);
        rsi = rsi_6 | sub_14001de10(&var_38, 2, r14, r15_1, &rdi_2[0x2c]);
        rdi_2 = &rdi_2[1];
        r15_1 += 1;
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    int32_t rsi_9 = rsi | sub_14001de10(&var_38, 1, r14, 0x28, arg1 + 0x130)
        | sub_14001de10(&var_38, 1, r14, 0x29, arg1 + 0x138)
        | sub_14001de10(&var_38, 2, r14, 0x28, arg1 + 0x290);
    int32_t rsi_12 = rsi_9 | sub_14001de10(&var_38, 2, r14, 0x29, arg1 + 0x298)
        | sub_14001de10(&var_38, 1, r14, 0x1f, arg1 + 0x140)
        | sub_14001de10(&var_38, 1, r14, 0x20, arg1 + 0x148);
    int32_t rsi_15 = rsi_12 | sub_14001de10(&var_38, 1, r14, 0x1003, arg1 + 0x150)
        | sub_14001de10(&var_38, 0, r14, 0x1009, arg1 + 0x158)
        | sub_14001de10(&var_38, 2, r14, 0x1f, arg1 + 0x2a0);
    int32_t rsi_16 = rsi_15 | sub_14001de10(&var_38, 2, r14, 0x20, arg1 + 0x2a8);
    int32_t result;
    result = !(sub_14001de10(&var_38, 2, r14, 0x1003, arg1 + 0x2b0) | rsi_16);
    return result;
}

void __acrt_locale_free_time(int64_t* arg1)
{
    if (!arg1)
        return;
    
    free_crt_array_internal(arg1, 7);
    free_crt_array_internal(&arg1[7], 7);
    free_crt_array_internal(&arg1[0xe], 0xc);
    free_crt_array_internal(&arg1[0x1a], 0xc);
    free_crt_array_internal(&arg1[0x26], 2);
    _free_base(arg1[0x28]);
    _free_base(arg1[0x29]);
    _free_base(arg1[0x2a]);
    free_crt_array_internal(&arg1[0x2c], 7);
    free_crt_array_internal(&arg1[0x33], 7);
    free_crt_array_internal(&arg1[0x3a], 0xc);
    free_crt_array_internal(&arg1[0x46], 0xc);
    free_crt_array_internal(&arg1[0x52], 2);
    _free_base(arg1[0x54]);
    _free_base(arg1[0x55]);
    _free_base(arg1[0x56]);
    _free_base(arg1[0x57]);
}

int64_t __acrt_locale_initialize_time(void* arg1)
{
    void** const rbx;
    
    if (*(arg1 + 0x150))
    {
        void** rax_1 = _calloc_base(1, 0x2c0);
        rbx = rax_1;
        
        if (!rax_1)
        {
            _free_base(nullptr);
            return 1;
        }
        
        if (!initialize_lc_time(rax_1, arg1))
        {
            __acrt_locale_free_time(rbx);
            _free_base(rbx);
            return 1;
        }
        
        *(rbx + 0x15c) = 1;
        _free_base(0);
    }
    else
        rbx = &data_140033160;
    
    __acrt_locale_release_lc_time_reference(*(arg1 + 0x120));
    *(arg1 + 0x120) = rbx;
    return 0;
}

int64_t wcscspn(int16_t* arg1, int16_t* arg2)
{
    bool cond:0 = !*arg1;
    int16_t* rax = arg1;
    
    for (; !cond:0; cond:0 = !*rax)
    {
        int16_t* r9_1 = arg2;
        
        if (*arg2)
        {
            int16_t i = *arg2;
            
            do
            {
                if (*rax == i)
                    return (rax - arg1) >> 1;
                
                r9_1 = &r9_1[1];
                i = *r9_1;
            } while (i);
        }
        
        rax = &rax[1];
    }
    
    return (rax - arg1) >> 1;
}

int16_t* wcspbrk(int16_t* arg1, int16_t* arg2)
{
    while (*arg1)
    {
        int16_t* r8_1 = arg2;
        
        if (*arg2)
        {
            int16_t i = *arg2;
            
            do
            {
                if (i == *arg1)
                    return arg1;
                
                r8_1 = &r8_1[1];
                i = *r8_1;
            } while (i);
        }
        
        arg1 = &arg1[1];
    }
    
    return 0;
}

int64_t sub_1400220e8(void* arg1)
{
    *(arg1 + 0x10) += 1;
    int32_t* rax = *(arg1 + 0xe0);
    
    if (rax)
        *rax += 1;
    
    int32_t* rax_1 = *(arg1 + 0xf0);
    
    if (rax_1)
        *rax_1 += 1;
    
    int32_t* rax_2 = *(arg1 + 0xe8);
    
    if (rax_2)
        *rax_2 += 1;
    
    int32_t* rax_3 = *(arg1 + 0x100);
    
    if (rax_3)
        *rax_3 += 1;
    
    int64_t* rax_4 = arg1 + 0x38;
    int64_t i_1 = 6;
    int64_t i;
    
    do
    {
        if (rax_4[-2] != &data_140041208)
        {
            int32_t* rdx_1 = *rax_4;
            
            if (rdx_1)
                *rdx_1 += 1;
        }
        
        if (rax_4[-3])
        {
            int32_t* rdx_2 = rax_4[-1];
            
            if (rdx_2)
                *rdx_2 += 1;
        }
        
        rax_4 = &rax_4[4];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    /* tailcall */
    return __acrt_locale_add_lc_time_reference(*(arg1 + 0x120));
}

int64_t __acrt_free_locale(void* arg1)
{
    int64_t rax = *(arg1 + 0xf8);
    
    if (rax && rax != &data_140040f80)
    {
        int32_t* rax_1 = *(arg1 + 0xe0);
        
        if (rax_1 && !*rax_1)
        {
            int32_t* rcx = *(arg1 + 0xf0);
            
            if (rcx && !*rcx)
            {
                _free_base(rcx);
                __acrt_locale_free_monetary(*(arg1 + 0xf8));
            }
            
            int32_t* rcx_2 = *(arg1 + 0xe8);
            
            if (rcx_2 && !*rcx_2)
            {
                _free_base(rcx_2);
                __acrt_locale_free_numeric(*(arg1 + 0xf8));
            }
            
            _free_base(*(arg1 + 0xe0));
            _free_base(*(arg1 + 0xf8));
        }
    }
    
    int32_t* rax_2 = *(arg1 + 0x100);
    
    if (rax_2 && !*rax_2)
    {
        _free_base(*(arg1 + 0x108) - 0xfe);
        _free_base(*(arg1 + 0x110) - 0x80);
        _free_base(*(arg1 + 0x118) - 0x80);
        _free_base(*(arg1 + 0x100));
    }
    
    __acrt_locale_free_lc_time_if_unreferenced(*(arg1 + 0x120));
    int64_t* rsi = arg1 + 0x128;
    int64_t i_1 = 6;
    int64_t* rdi = arg1 + 0x38;
    int64_t i;
    
    do
    {
        if (rdi[-2] != &data_140041208)
        {
            int32_t* rcx_14 = *rdi;
            
            if (rcx_14 && !*rcx_14)
            {
                _free_base(rcx_14);
                _free_base(*rsi);
            }
        }
        
        if (rdi[-3])
        {
            int32_t* rcx_16 = rdi[-1];
            
            if (rcx_16 && !*rcx_16)
                _free_base(rcx_16);
        }
        
        rsi = &rsi[1];
        rdi = &rdi[4];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    /* tailcall */
    return _free_base(arg1);
}

uint64_t __acrt_locale_add_lc_time_reference(void* arg1)
{
    if (!arg1 || arg1 == &data_140033160)
        return 0x7fffffff;
    
    int32_t rax = *(arg1 + 0x15c);
    *(arg1 + 0x15c) += 1;
    return rax + 1;
}

void __acrt_locale_free_lc_time_if_unreferenced(int64_t* arg1)
{
    if (arg1 && arg1 != &data_140033160 && !*(arg1 + 0x15c))
    {
        __acrt_locale_free_time(arg1);
        _free_base(arg1);
    }
}

uint64_t __acrt_locale_release_lc_time_reference(void* arg1)
{
    if (!arg1 || arg1 == &data_140033160)
        return 0x7fffffff;
    
    int32_t rax = *(arg1 + 0x15c);
    *(arg1 + 0x15c) -= 1;
    return rax - 1;
}

void __acrt_release_locale_ref(void* arg1)
{
    if (!arg1)
        return;
    
    *(arg1 + 0x10) -= 1;
    int32_t* rax_1 = *(arg1 + 0xe0);
    
    if (rax_1)
        *rax_1 -= 1;
    
    int32_t* rax_2 = *(arg1 + 0xf0);
    
    if (rax_2)
        *rax_2 -= 1;
    
    int32_t* rax_3 = *(arg1 + 0xe8);
    
    if (rax_3)
        *rax_3 -= 1;
    
    int32_t* rax_4 = *(arg1 + 0x100);
    
    if (rax_4)
        *rax_4 -= 1;
    
    int64_t* rax_5 = arg1 + 0x38;
    int64_t i_1 = 6;
    int64_t i;
    
    do
    {
        if (rax_5[-2] != &data_140041208)
        {
            int32_t* rdx_1 = *rax_5;
            
            if (rdx_1)
                *rdx_1 -= 1;
        }
        
        if (rax_5[-3])
        {
            int32_t* rdx_2 = rax_5[-1];
            
            if (rdx_2)
                *rdx_2 -= 1;
        }
        
        rax_5 = &rax_5[4];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    __acrt_locale_release_lc_time_reference(*(arg1 + 0x120));
}

void* sub_14002241c()
{
    void* rax = __acrt_getptd();
    void* result;
    
    if (*data_140041310 & *(rax + 0x3a8))
        result = *(rax + 0x90);
    
    if (!(*data_140041310 & *(rax + 0x3a8)) || !result)
    {
        sub_14001182c(4);
        result = _updatetlocinfoEx_nolock(rax + 0x90, data_1400436b8);
        sub_140011880(4);
        
        if (!result)
        {
            abort();
            /* no return */
        }
    }
    
    return result;
}

void* const _updatetlocinfoEx_nolock(int64_t* arg1, void* arg2)
{
    if (!arg2 || !arg1)
        return nullptr;
    
    void* rbx_1 = *arg1;
    
    if (rbx_1 != arg2)
    {
        *arg1 = arg2;
        sub_1400220e8(arg2);
        
        if (rbx_1)
        {
            __acrt_release_locale_ref(rbx_1);
            
            if (!*(rbx_1 + 0x10) && rbx_1 != &data_1400410a0)
                __acrt_free_locale(rbx_1);
        }
    }
    
    return arg2;
}

int64_t sub_1400224f4(void* arg1)
{
    void var_f8;
    int64_t rax_1 = __security_cookie ^ &var_f8;
    *(arg1 + 0x10) |= 0x104;
    int16_t var_c8[0x58];
    int32_t result = sub_140019510(&var_c8, 0x55);
    
    if (result > 1)
    {
        int64_t r9_1 = -1;
        
        do
            r9_1 += 1;
         while (var_c8[r9_1]);
        
        result = wcsncpy_s(arg1 + 0x258, 0x55, &var_c8, r9_1 + 1);
        
        if (result)
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_f8);
    return result;
}

bool GetLocaleNameFromLangCountry(int64_t* arg1)
{
    int16_t* rdx = *arg1;
    int64_t r8 = -1;
    int64_t rcx = -1;
    
    do
        rcx += 1;
     while (rdx[rcx]);
    
    int32_t rax;
    rax = rcx == 3;
    arg1[3] = rax;
    
    do
        r8 += 1;
     while (*(arg1[1] + (r8 << 1)));
    
    int32_t rax_2;
    rax_2 = r8 == 3;
    *(arg1 + 0x1c) = rax_2;
    int32_t rcx_1;
    
    if (rcx != 3)
    {
        int32_t r9_1 = 0;
        
        if (rdx)
        {
            while (true)
            {
                int16_t r8_1 = *rdx;
                rdx = &rdx[1];
                
                if (r8_1 - 0x41 > 0x19 && r8_1 - 0x61 > 0x19)
                    break;
                
                r9_1 += 1;
            }
            
            rcx_1 = r9_1;
        }
        else
            rcx_1 = 0;
    }
    else
        rcx_1 = 2;
    
    *(arg1 + 0x14) = rcx_1;
    sub_1400192c8(sub_140022704, 3, 0, 0);
    int32_t rcx_2 = arg1[2];
    bool result = TEST_BITD(rcx_2, 8);
    
    if (!(result & rcx_2 & 7 & TEST_BITD(rcx_2, 9)))
        arg1[2] = 0;
    
    return result;
}

uint64_t GetLocaleNameFromLanguage(int64_t* arg1)
{
    int16_t* rdx = *arg1;
    int64_t r8 = -1;
    
    do
        r8 += 1;
     while (rdx[r8]);
    
    int32_t rax;
    rax = r8 == 3;
    arg1[3] = rax;
    int32_t rcx;
    
    if (r8 != 3)
    {
        int32_t r9_1 = 0;
        
        if (rdx)
        {
            while (true)
            {
                int16_t r8_1 = *rdx;
                rdx = &rdx[1];
                
                if (r8_1 - 0x41 > 0x19 && r8_1 - 0x61 > 0x19)
                    break;
                
                r9_1 += 1;
            }
            
            rcx = r9_1;
        }
        else
            rcx = 0;
    }
    else
        rcx = 2;
    
    *(arg1 + 0x14) = rcx;
    uint64_t result = sub_1400192c8(sub_1400229f0, 3, 0, 0);
    
    if (!(arg1[2] & 4))
        arg1[2] = 0;
    
    return result;
}

uint64_t sub_140022704(int16_t* arg1)
{
    void var_d8;
    int64_t rax_1 = __security_cookie ^ &var_d8;
    void* rax_2;
    int32_t rdx;
    rax_2 = __acrt_getptd();
    void var_a8;
    uint64_t result;
    
    if (sub_14001948c(arg1, ((rdx - rdx) & 0xfffff005) + 0x1002, &var_a8, 0x40))
    {
        int32_t rax_4;
        int32_t rdx_5;
        rax_4 = _wcsicmp(*(rax_2 + 0xa0), &var_a8);
        int64_t rdi_1 = -1;
        
        if (rax_4)
        {
        label_140022844:
            
            if ((*(rax_2 + 0xa8) & 0x300) == 0x300)
                result = ~(*(rax_2 + 0xa8) >> 2) & 1;
            else if (!sub_14001948c(arg1, ((rdx_5 - rdx_5) & 0xfffff002) + 0x1001, &var_a8, 0x40))
            {
                *(rax_2 + 0xa8) = 0;
                result = 1;
            }
            else if (_wcsicmp(*(rax_2 + 0x98), &var_a8))
                result = ~(*(rax_2 + 0xa8) >> 2) & 1;
            else
            {
                int32_t rax_18 = *(rax_2 + 0xa8) | 0x200;
                *(rax_2 + 0xa8) = rax_18;
                int16_t* rcx_11;
                
                if (!*(rax_2 + 0xb0))
                {
                    int64_t rcx_13;
                    
                    if (*(rax_2 + 0xac))
                    {
                        rcx_13 = -1;
                        
                        do
                            rcx_13 += 1;
                         while (*(*(rax_2 + 0x98) + (rcx_13 << 1)));
                    }
                    
                    if (!*(rax_2 + 0xac) || rcx_13 != *(rax_2 + 0xac))
                    {
                        rcx_11 = rax_2 + 0x2f0;
                        *(rax_2 + 0xa8) = rax_18 | 0x100;
                        
                        if (!*rcx_11)
                        {
                            do
                                rdi_1 += 1;
                             while (arg1[rdi_1]);
                            
                            goto label_14002299d;
                        }
                        
                        result = ~(*(rax_2 + 0xa8) >> 2) & 1;
                    }
                    else
                    {
                        int32_t rax_21 = TestDefaultCountry(arg1);
                        int64_t rax_23;
                        int32_t r8_5;
                        
                        if (!rax_21)
                        {
                            int16_t* r9_3 = *(rax_2 + 0x98);
                            r8_5 = 0;
                            int16_t* rcx_15 = r9_3;
                            
                            if (r9_3)
                            {
                                int16_t rdx_16 = *r9_3;
                                
                                while (true)
                                {
                                    rcx_15 = &rcx_15[1];
                                    
                                    if (rdx_16 - 0x41 > 0x19 && rdx_16 - 0x61 > 0x19)
                                        break;
                                    
                                    rdx_16 = *rcx_15;
                                    r8_5 += 1;
                                }
                            }
                            
                            rax_23 = -1;
                            
                            do
                                rax_23 += 1;
                             while (r9_3[rax_23]);
                        }
                        
                        if (!rax_21 && r8_5 == rax_23)
                            result = ~(*(rax_2 + 0xa8) >> 2) & 1;
                        else
                        {
                            *(rax_2 + 0xa8) |= 0x100;
                            rcx_11 = rax_2 + 0x2f0;
                            
                            if (!*rcx_11)
                            {
                                do
                                    rdi_1 += 1;
                                 while (arg1[rdi_1]);
                                
                                goto label_14002299d;
                            }
                            
                            result = ~(*(rax_2 + 0xa8) >> 2) & 1;
                        }
                    }
                }
                else
                {
                    rcx_11 = rax_2 + 0x2f0;
                    *(rax_2 + 0xa8) = rax_18 | 0x100;
                    
                    if (*rcx_11)
                        result = ~(*(rax_2 + 0xa8) >> 2) & 1;
                    else
                    {
                        do
                            rdi_1 += 1;
                         while (arg1[rdi_1]);
                        
                    label_14002299d:
                        
                        if (wcsncpy_s(rcx_11, 0x55, arg1, rdi_1 + 1))
                        {
                            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                            /* no return */
                        }
                        
                        result = ~(*(rax_2 + 0xa8) >> 2) & 1;
                    }
                }
            }
        }
        else
        {
            if (sub_14001948c(arg1, ((rdx_5 - rdx_5) & 0xfffff002) + 0x1001, &var_a8, 0x40))
            {
                int32_t rax_8;
                rax_8 = _wcsicmp(*(rax_2 + 0x98), &var_a8);
                int32_t rcx_5 = *(rax_2 + 0xa8);
                int64_t r9_1;
                
                if (!rax_8)
                {
                    r9_1 = -1;
                    *(rax_2 + 0xa8) = rcx_5 | 0x304;
                    
                    do
                        r9_1 += 1;
                     while (arg1[r9_1]);
                    
                label_14002282d:
                    int32_t rax_10;
                    rax_10 = wcsncpy_s(rax_2 + 0x2f0, 0x55, arg1, r9_1 + 1);
                    
                    if (rax_10)
                    {
                        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                        /* no return */
                    }
                    
                    goto label_140022844;
                }
                
                if (rcx_5 & 2)
                    goto label_140022844;
                
                int32_t rax_9;
                
                if (*(rax_2 + 0xac))
                    rax_9 = _wcsnicmp(*(rax_2 + 0x98), &var_a8, *(rax_2 + 0xac));
                
                if (*(rax_2 + 0xac) && !rax_9)
                {
                    *(rax_2 + 0xa8) |= 2;
                    r9_1 = -1;
                    
                    do
                        r9_1 += 1;
                     while (arg1[r9_1]);
                    
                    goto label_14002282d;
                }
                
                if (*(rax_2 + 0xa8) & 1)
                    goto label_140022844;
                
                int32_t rax_20;
                rax_20 = TestDefaultCountry(arg1);
                
                if (!rax_20)
                    goto label_140022844;
                
                *(rax_2 + 0xa8) |= 1;
                r9_1 = -1;
                
                do
                    r9_1 += 1;
                 while (arg1[r9_1]);
                
                goto label_14002282d;
            }
            
            *(rax_2 + 0xa8) = 0;
            result = 1;
        }
    }
    else
    {
        *(rax_2 + 0xa8) = 0;
        result = 1;
    }
    
    __security_check_cookie(rax_1 ^ &var_d8);
    return result;
}

uint64_t sub_1400229f0(int64_t arg1)
{
    void var_138;
    int64_t rax_1 = __security_cookie ^ &var_138;
    void* rax_2;
    int32_t rdx;
    rax_2 = __acrt_getptd();
    void var_108;
    uint64_t result;
    
    if (sub_14001948c(arg1, ((rdx - rdx) & 0xfffff002) + 0x1001, &var_108, 0x78))
    {
        if (!_wcsicmp(*(rax_2 + 0x98), &var_108))
        {
            int64_t r9_1 = -1;
            
            do
                r9_1 += 1;
             while (*(arg1 + (r9_1 << 1)));
            
            if (wcsncpy_s(rax_2 + 0x2f0, 0x55, arg1, r9_1 + 1))
            {
                _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                /* no return */
            }
            
            *(rax_2 + 0xa8) |= 4;
        }
        
        result = ~(*(rax_2 + 0xa8) >> 2) & 1;
    }
    else
    {
        *(rax_2 + 0xa8) = 0;
        result = 1;
    }
    
    __security_check_cookie(rax_1 ^ &var_138);
    return result;
}

int64_t ProcessCodePage(int16_t* arg1, int64_t arg2)
{
    int16_t* rbx = arg1;
    int32_t rax_1;
    
    if (arg1 && *arg1)
        rax_1 = wcscmp(arg1, &data_140036668);
    
    uint32_t rdx;
    
    if (!arg1 || !*arg1 || !rax_1)
    {
        rdx = 0x20001004;
    label_140022b69:
        int32_t result_1;
        
        if (!sub_14001948c(arg2 + 0x258, rdx, &result_1, 2))
            return 0;
        
        int32_t result = result_1;
        
        if (result >= 3)
            return result;
    }
    else if (_wcsicmp(rbx, u"utf8") && _wcsicmp(rbx, u"utf-8"))
    {
        if (wcscmp(rbx, &data_140036670))
            return sub_1400186b4(rbx);
        
        rdx = 0x2000000b;
        goto label_140022b69;
    }
    return 0xfde9;
}

int64_t TestDefaultCountry(int16_t* arg1)
{
    void var_48;
    int64_t rax_1 = __security_cookie ^ &var_48;
    void var_28;
    int32_t rax_2 = sub_14001948c(arg1, 0x59, &var_28, 9);
    int32_t rax_3;
    
    if (rax_2)
        rax_3 = wcsncmp(&var_28, arg1, 9);
    
    int64_t result;
    
    result = !rax_2 || rax_3 ? 0 : 1;
    
    __security_check_cookie(rax_1 ^ &var_48);
    return result;
}

uint64_t TranslateName(int64_t arg1, int32_t arg2, int64_t* arg3)
{
    int32_t rdi = arg2;
    int32_t rax = 1;
    int32_t rsi = 0;
    bool cond:0_1;
    
    if (arg2 >= 0)
    {
        do
        {
            cond:0_1 = !rax;
            
            if (!rax)
                goto label_140022c86;
            
            int32_t temp1_1;
            int32_t temp2_1;
            temp1_1 = HIGHD(rsi + rdi);
            temp2_1 = LOWD(rsi + rdi);
            int64_t rbp_1 = (temp2_1 - temp1_1) >> 1;
            int64_t r14_2 = rbp_1 << 4;
            rax = _wcsicmp(*arg3, *(r14_2 + arg1));
            
            if (!rax)
                *arg3 = arg1 + 8 + r14_2;
            else if (rax >= 0)
                rsi = rbp_1 + 1;
            else
                rdi = rbp_1 - 1;
        } while (rsi <= rdi);
    }
    
    cond:0_1 = !rax;
label_140022c86:
    int32_t rbx;
    rbx = cond:0_1;
    return rbx;
}

int64_t sub_140022ca8(int16_t* arg1, uint32_t* arg2, wchar16* arg3)
{
    int16_t* rcx = arg1;
    int64_t* rbx = __acrt_getptd() + 0x98;
    rbx[2] = 0;
    *rbx = arg1;
    rbx[0x4b] = 0;
    rbx[1] = &arg1[0x40];
    
    if (arg1[0x40])
    {
        TranslateName(&data_140035ae0, 0x16, &rbx[1]);
        rcx = *rbx;
    }
    
    if (*rcx)
    {
        if (!*rbx[1])
            GetLocaleNameFromLanguage(rbx);
        else
            GetLocaleNameFromLangCountry(rbx);
        
        if (rbx[2])
            goto label_140022d93;
        
        if (TranslateName(&data_1400356c0, 0x40, rbx))
        {
            if (!*rbx[1])
                GetLocaleNameFromLanguage(rbx);
            else
                GetLocaleNameFromLangCountry(rbx);
        }
        
        goto label_140022d78;
    }
    
    sub_1400224f4(rbx);
label_140022d78:
    
    if (rbx[2])
    {
    label_140022d93:
        uint32_t rax_5;
        
        if (*arg1 || arg1[0x80])
            rax_5 = ProcessCodePage(&arg1[0x80], rbx);
        else
            rax_5 = GetACP();
        
        if (rax_5 && rax_5 != 0xfde8 && IsValidCodePage(rax_5))
        {
            if (arg2)
                *arg2 = rax_5;
            
            if (!arg3)
                return 1;
            
            int64_t r9_1 = -1;
            arg3[0x90] = 0;
            
            do
                r9_1 += 1;
             while (rbx[0x4b + r9_1]);
            
            int32_t rax_7 = wcsncpy_s(&arg3[0x90], 0x55, &rbx[0x4b], r9_1 + 1);
            
            if (rax_7)
            {
                _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                /* no return */
            }
            
            if (sub_14001948c(&arg3[0x90], 0x1001, arg3, rax_7 + 0x40)
                && sub_14001948c(&arg3[0x90], 0x1002, &arg3[0x40], 0x40))
            {
                uint128_t* rax_10 = sub_1400280fc(&arg3[0x40], 0x5f);
                uint128_t* rax_11;
                
                if (!rax_10)
                    rax_11 = sub_1400280fc(&arg3[0x40], rax_10 + 0x2e);
                
                int32_t rax_12;
                
                if (rax_10 || rax_11)
                    rax_12 = sub_14001948c(&arg3[0x90], 7, &arg3[0x40], 0x40);
                
                if ((!rax_10 && !rax_11) || rax_12)
                {
                    if (rax_5 != 0xfde9)
                    {
                        sub_1400269d4(rax_5, &arg3[0x80], 0x10, 0xa);
                        return 1;
                    }
                    
                    if (!wcsncpy_s(&arg3[0x80], 0x10, u"utf8", 5))
                        return 1;
                    
                    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                    /* no return */
                }
            }
        }
    }
    
    return 0;
}

uint64_t CountryEnumProc(int16_t* arg1)
{
    void var_128;
    int64_t rax_1 = __security_cookie ^ &var_128;
    void* rax_2 = __acrt_getptd();
    int32_t* rdi = *(__acrt_getptd() + 0x3a0);
    uint32_t Locale;
    int32_t rdx;
    Locale = LcidFromHexString(arg1);
    int32_t rbx_1 = 0;
    void lCData;
    uint64_t result;
    
    if (GetLocaleInfoW(Locale, ((rdx - rdx) & 0xfffff005) + 0x1002, &lCData, 0x78))
    {
        if (!_wcsicmp(*(rax_2 + 0xa0), &lCData))
        {
            int16_t* rax_6 = &data_140036678;
            
            while (Locale != *rax_6)
            {
                rbx_1 += 1;
                rax_6 = &rax_6[1];
                
                if (rbx_1 >= 0xa)
                {
                    *rdi |= 4;
                    rdi[2] = Locale;
                    rdi[1] = Locale;
                    break;
                }
            }
        }
        
        result = ~(*rdi >> 2) & 1;
    }
    else
    {
        *rdi = 0;
        result = 1;
    }
    
    __security_check_cookie(rax_1 ^ &var_128);
    return result;
}

bool GetLcidFromLangCountry(int32_t* arg1)
{
    int64_t r8 = -1;
    int64_t r9 = -1;
    int64_t* rdx = __acrt_getptd() + 0x98;
    
    do
        r9 += 1;
     while (*(*rdx + (r9 << 1)));
    
    int32_t rax_2;
    rax_2 = r9 == 3;
    rdx[3] = rax_2;
    
    do
        r8 += 1;
     while (*(rdx[1] + (r8 << 1)));
    
    int32_t r8_1 = 2;
    int32_t rax_4;
    rax_4 = r8 == 3;
    *(rdx + 0x1c) = rax_4;
    arg1[1] = 0;
    
    if (!rdx[3])
    {
        int16_t* rcx = *rdx;
        int32_t r10_1 = 0;
        
        while (true)
        {
            int16_t r9_1 = *rcx;
            rcx = &rcx[1];
            
            if (r9_1 - 0x41 > 0x19 && r9_1 - 0x61 > 0x19)
                break;
            
            r10_1 += 1;
        }
        
        r8_1 = r10_1;
    }
    
    *(rdx + 0x14) = r8_1;
    EnumSystemLocalesW(LangCountryEnumProc, 1);
    int32_t rcx_1 = *arg1;
    bool result = TEST_BITD(rcx_1, 8);
    
    if (!(result & rcx_1 & 7 & TEST_BITD(rcx_1, 9)))
        *arg1 = 0;
    
    return result;
}

int64_t GetLcidFromLanguage(char* arg1)
{
    void* rax = __acrt_getptd();
    int64_t r8 = -1;
    int16_t* rdx = *(rax + 0x98);
    
    do
        r8 += 1;
     while (rdx[r8]);
    
    int32_t rcx = 2;
    int32_t rax_1;
    rax_1 = r8 == 3;
    *(rax + 0xb0) = rax_1;
    
    if (r8 != 3)
    {
        int32_t r9_1 = 0;
        
        while (true)
        {
            int16_t r8_1 = *rdx;
            rdx = &rdx[1];
            
            if (r8_1 - 0x41 > 0x19 && r8_1 - 0x61 > 0x19)
                break;
            
            r9_1 += 1;
        }
        
        rcx = r9_1;
    }
    
    *(rax + 0xac) = rcx;
    int64_t result = EnumSystemLocalesW(LanguageEnumProc, 1);
    
    if (!(*arg1 & 4))
        *arg1 = 0;
    
    return result;
}

uint64_t LangCountryEnumProc(int16_t* arg1)
{
    void var_138;
    int64_t rax_1 = __security_cookie ^ &var_138;
    int64_t* rsi = __acrt_getptd() + 0x98;
    int32_t* rdi = *(__acrt_getptd() + 0x3a0);
    uint32_t Locale;
    int32_t rdx;
    Locale = LcidFromHexString(arg1);
    void lCData;
    uint64_t result;
    
    if (!GetLocaleInfoW(Locale, ((rdx - rdx) & 0xfffff005) + 0x1002, &lCData, 0x78))
    {
        *rdi = 0;
        result = 1;
    }
    else
    {
        int32_t rax_5;
        int32_t rdx_5;
        rax_5 = _wcsicmp(rsi[1], &lCData);
        int64_t rbp_1 = -1;
        
        if (rax_5)
        {
        label_1400232b4:
            
            if ((*rdi & 0x300) == 0x300)
                result = ~(*rdi >> 2) & 1;
            else if (
                !GetLocaleInfoW(Locale, ((rdx_5 - rdx_5) & 0xfffff002) + 0x1001, &lCData, 0x78))
            {
                *rdi = 0;
                result = 1;
            }
            else
            {
                int32_t rdx_15;
                
                if (!_wcsicmp(*rsi, &lCData))
                {
                    int32_t rax_21 = *rdi | 0x200;
                    *rdi = rax_21;
                    
                    if (!rsi[3] && *(rsi + 0x14))
                    {
                        do
                            rbp_1 += 1;
                         while (*(*rsi + (rbp_1 << 1)));
                    }
                    
                    if (!rsi[3] && *(rsi + 0x14) && rbp_1 == *(rsi + 0x14))
                    {
                        rdx_15 = 1;
                        goto label_140023354;
                    }
                    
                    *rdi = rax_21 | 0x100;
                label_140023361:
                    
                    if (!rdi[1])
                        rdi[1] = Locale;
                }
                else if (!rsi[3] && *(rsi + 0x14) && !_wcsicmp(*rsi, &lCData))
                {
                    rdx_15 = 0;
                label_140023354:
                    
                    if (TestDefaultLanguage(Locale, rdx_15))
                    {
                        *rdi |= 0x100;
                        goto label_140023361;
                    }
                }
                result = ~(*rdi >> 2) & 1;
            }
        }
        else
        {
            if (GetLocaleInfoW(Locale, ((rdx_5 - rdx_5) & 0xfffff002) + 0x1001, &lCData, 0x78))
            {
                int32_t rax_9;
                rax_9 = _wcsicmp(*rsi, &lCData);
                int32_t rcx_6 = *rdi;
                int32_t rcx_7;
                
                if (!rax_9)
                {
                    rcx_7 = rcx_6 | 0x304;
                    rdi[1] = Locale;
                label_1400232a6:
                    rdi[2] = Locale;
                    *rdi = rcx_7;
                }
                else if (!(rcx_6 & 2))
                {
                    char rax_10 = rcx_6;
                    
                    if (!*(rsi + 0x14))
                        goto label_140023285;
                    
                    int32_t rax_11;
                    rax_11 = _wcsnicmp(*rsi, &lCData, *(rsi + 0x14));
                    rcx_6 = *rdi;
                    
                    if (rax_11)
                    {
                        rax_10 = rcx_6;
                    label_140023285:
                        
                        if (!(rax_10 & 1))
                        {
                            rdx_5 = 0;
                            int16_t* rax_13 = &data_140036678;
                            
                            while (Locale != *rax_13)
                            {
                                rdx_5 += 1;
                                rax_13 = &rax_13[1];
                                
                                if (rdx_5 >= 0xa)
                                {
                                    rcx_7 = rcx_6 | 1;
                                    goto label_1400232a6;
                                }
                            }
                        }
                    }
                    else
                    {
                        rdi[2] = Locale;
                        *rdi = rcx_6 | 2;
                        int64_t rax_12 = -1;
                        
                        do
                            rax_12 += 1;
                         while (*(*rsi + (rax_12 << 1)));
                        
                        if (rax_12 == *(rsi + 0x14))
                            rdi[1] = Locale;
                    }
                }
                goto label_1400232b4;
            }
            
            *rdi = 0;
            result = 1;
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_138);
    return result;
}

uint64_t LanguageEnumProc(int16_t* arg1)
{
    void var_128;
    int64_t rax_1 = __security_cookie ^ &var_128;
    void* rax_2 = __acrt_getptd();
    int32_t* rdi = *(__acrt_getptd() + 0x3a0);
    uint32_t Locale;
    int32_t rdx;
    Locale = LcidFromHexString(arg1);
    void lCData;
    int32_t rax_4 = GetLocaleInfoW(Locale, ((rdx - rdx) & 0xfffff002) + 0x1001, &lCData, 0x78);
    uint64_t result;
    
    if (rax_4)
    {
        int32_t rax_5 = _wcsicmp(*(rax_2 + 0x98), &lCData);
        int32_t rcx_4 = *(rax_2 + 0xb0);
        int32_t rdx_5;
        
        if (rax_5)
        {
            if (!rcx_4 && *(rax_2 + 0xac) != rcx_4 && !_wcsicmp(*(rax_2 + 0x98), &lCData))
            {
                rdx_5 = 0;
                goto label_14002346f;
            }
        }
        else if (rcx_4)
        {
        label_140023478:
            *rdi |= 4;
            rdi[1] = Locale;
            rdi[2] = Locale;
        }
        else
        {
            rdx_5 = rcx_4 + 1;
        label_14002346f:
            
            if (TestDefaultLanguage(Locale, rdx_5))
                goto label_140023478;
        }
        result = ~(*rdi >> 2) & 1;
    }
    else
    {
        *rdi &= rax_4;
        result = 1;
    }
    
    __security_check_cookie(rax_1 ^ &var_128);
    return result;
}

uint64_t LcidFromHexString(int16_t* arg1)
{
    int16_t i = *arg1;
    int32_t r8 = 0;
    int16_t* r9 = arg1;
    
    while (i)
    {
        r9 = &r9[1];
        
        if (i - 0x61 <= 5)
            i -= 0x27;
        else if (i - 0x41 <= 5)
            i -= 7;
        
        uint32_t i_1 = i;
        i = *r9;
        r8 = (r8 << 4) - 0x30 + i_1;
    }
    
    return r8;
}

uint32_t ProcessCodePage(int16_t* arg1, void* arg2)
{
    int16_t* rbx = arg1;
    int32_t rax_1;
    
    if (arg1 && *arg1)
        rax_1 = wcscmp(arg1, &data_140036668);
    
    uint32_t lCData;
    
    if (!arg1 || !*arg1 || !rax_1)
    {
        if (GetLocaleInfoW(*(arg2 + 8), 0x20001004, &lCData, 2))
        {
            uint32_t lCData_1 = lCData;
            
            if (lCData_1)
                return lCData_1;
            
            return GetACP();
        }
    }
    else
    {
        if (wcscmp(rbx, &data_140036670))
            return sub_1400186b4(rbx);
        
        if (GetLocaleInfoW(*(arg2 + 8), 0x2000000b, &lCData, 2))
            return lCData;
    }
    return 0;
}

int64_t TestDefaultLanguage(int32_t arg1, int32_t arg2)
{
    void* rax = __acrt_getptd();
    int32_t lCData;
    
    if (GetLocaleInfoW((arg1 & 0x3ff) | 0x400, 0x20000001, &lCData, 2))
    {
        int64_t rcx_4;
        int32_t r8_1;
        
        if (arg1 != lCData && arg2)
        {
            int16_t* r9_1 = *(rax + 0x98);
            r8_1 = 0;
            int16_t rdx = *r9_1;
            int16_t* rcx_3 = &r9_1[1];
            
            while (rdx - 0x41 <= 0x19 || rdx - 0x61 <= 0x19)
            {
                rdx = *rcx_3;
                r8_1 += 1;
                rcx_3 = &rcx_3[1];
            }
            
            rcx_4 = -1;
            
            do
                rcx_4 += 1;
             while (r9_1[rcx_4]);
        }
        
        if (arg1 == lCData || !arg2 || r8_1 != rcx_4)
            return 1;
    }
    
    return 0;
}

uint64_t TranslateName(int64_t arg1, int32_t arg2, int64_t* arg3)
{
    int32_t rdi = 0;
    int32_t rbx = arg2;
    uint64_t result;
    
    if (arg2 < 0)
    {
    label_1400236b2:
        result = 0;
    }
    else
    {
        while (true)
        {
            int32_t temp0_1;
            int32_t temp1_1;
            temp0_1 = HIGHD(rdi + rbx);
            temp1_1 = LOWD(rdi + rbx);
            int64_t rsi_1 = (temp1_1 - temp0_1) >> 1;
            int64_t r14_2 = rsi_1 << 4;
            int32_t temp2_1 = _wcsicmp(*arg3, *(r14_2 + arg1));
            
            if (!temp2_1)
            {
                *arg3 = arg1 + 8 + r14_2;
                result = 1;
                break;
            }
            
            if (temp2_1 >= 0)
                rdi = rsi_1 + 1;
            else
                rbx = rsi_1 - 1;
            
            if (rdi > rbx)
                goto label_1400236b2;
        }
    }
    
    return result;
}

int64_t __acrt_get_qualified_locale_downlevel(void* arg1, uint32_t* arg2, wchar16* arg3)
{
    void var_78;
    int64_t rax_1 = __security_cookie ^ &var_78;
    void* rax_2 = __acrt_getptd();
    int64_t var_58 = 0;
    uint32_t Locale = 0;
    *(__acrt_getptd() + 0x3a0) = &var_58;
    *(rax_2 + 0x98) = arg1;
    *(rax_2 + 0xa0) = arg1 + 0x80;
    
    if (arg1 != -0x80 && *(arg1 + 0x80))
        TranslateName(&data_140035ae0, 0x16, rax_2 + 0xa0);
    
    var_58 = 0;
    int16_t* rax_5 = *(rax_2 + 0x98);
    int64_t rcx_1;
    
    if (!rax_5 || !*rax_5)
    {
        int16_t* rax_9 = *(rax_2 + 0xa0);
        
        if (!rax_9 || !*rax_9)
        {
            var_58 = 0x104;
            uint32_t Locale_1;
            Locale_1 = GetUserDefaultLCID();
            Locale = Locale_1;
            *(&var_58 + 4) = Locale_1;
        }
        else
        {
            void* rax_10 = __acrt_getptd();
            int64_t rcx_5 = -1;
            
            do
                rcx_5 += 1;
             while (*(*(rax_10 + 0xa0) + (rcx_5 << 1)));
            
            int32_t rax_12;
            rax_12 = rcx_5 == 3;
            *(rax_10 + 0xb4) = rax_12;
            rcx_1 = EnumSystemLocalesW(CountryEnumProc, 1);
            
            if (!(var_58 & 4))
                var_58 = 0;
        }
    }
    else
    {
        int16_t* rax_6 = *(rax_2 + 0xa0);
        
        if (!rax_6 || !*rax_6)
            rcx_1 = GetLcidFromLanguage(&var_58);
        else
            rcx_1 = GetLcidFromLangCountry(&var_58);
        
        if (var_58)
            goto label_140023876;
        
        char rax_7;
        rax_7 = TranslateName(&data_1400356c0, 0x40, rax_2 + 0x98);
        
        if (rax_7)
        {
            int16_t* rax_8 = *(rax_2 + 0xa0);
            
            if (!rax_8 || !*rax_8)
                rcx_1 = GetLcidFromLanguage(&var_58);
            else
                rcx_1 = GetLcidFromLangCountry(&var_58);
        }
    }
    
    int64_t result;
    
    if (!var_58)
        result = 0;
    else
    {
    label_140023876:
        uint32_t rax_14 = ProcessCodePage((rcx_1 - rcx_1) & (arg1 + 0x100), &var_58);
        
        if (!rax_14)
            result = 0;
        else if (!IsValidCodePage(rax_14))
            result = 0;
        else if (!IsValidLocale(*(&var_58 + 4), LCID_INSTALLED))
            result = 0;
        else
        {
            if (arg2)
                *arg2 = rax_14;
            
            sub_140019630(*(&var_58 + 4), rax_2 + 0x2f0, 0x55, 0);
            
            if (!arg3)
                result = 1;
            else
            {
                sub_140019630(*(&var_58 + 4), &arg3[0x90], 0x55, 0);
                
                if (!GetLocaleInfoW(*(&var_58 + 4), 0x1001, arg3, 0x40))
                    result = 0;
                else if (!GetLocaleInfoW(Locale, 0x1002, &arg3[0x40], 0x40))
                    result = 0;
                else
                {
                    sub_1400269d4(rax_14, &arg3[0x80], 0x10, 0xa);
                    result = 1;
                }
            }
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_78);
    return result;
}

void* _recalloc_base(int64_t arg1, int64_t arg2, int64_t arg3)
{
    if (arg2 && -0x20 / arg2 < arg3)
    {
        *_errno() = 0xc;
        return nullptr;
    }
    
    int64_t rdi_1;
    
    if (!arg1)
        rdi_1 = 0;
    else
        rdi_1 = sub_140026c00(arg1);
    
    uint64_t rbx_1 = arg2 * arg3;
    void* result = _realloc_base(arg1, rbx_1);
    
    if (result && rdi_1 < rbx_1)
        sub_14000c550(result + rdi_1, 0, rbx_1 - rdi_1);
    
    return result;
}

HANDLE __acrt_initialize_heap()
{
    HANDLE result = GetProcessHeap();
    data_1400437e8 = result;
    result = result;
    return result;
}

int64_t sub_140023a10()
{
    data_1400437e8 = 0;
    int64_t result;
    result = 1;
    return result;
}

void* sub_140023a1c(int64_t* arg1, int64_t arg2)
{
    void* result;
    int64_t* rbx_1;
    
    if (arg1 != arg2)
    {
        rbx_1 = arg1;
        
        do
        {
            result = *rbx_1;
            
            if (result && !result())
                break;
            
            rbx_1 = &rbx_1[2];
        } while (rbx_1 != arg2);
    }
    
    if (arg1 == arg2 || rbx_1 == arg2)
        result = 1;
    else
    {
        if (rbx_1 != arg1)
        {
            int64_t* rbx_2 = &rbx_1[-1];
            
            do
            {
                if (rbx_2[-1])
                {
                    int64_t rax = *rbx_2;
                    
                    if (rax)
                        rax(0);
                }
                
                rbx_2 -= 0x10;
            } while (&rbx_2[1] != arg1);
        }
        
        result = 0;
    }
    
    return result;
}

int64_t sub_140023a9c(int64_t arg1, void* arg2)
{
    void* rbx = arg2;
    int64_t result;
    
    if (arg1 != arg2)
    {
        do
        {
            result = *(rbx - 8);
            
            if (result)
                result(0);
            
            rbx -= 0x10;
        } while (rbx != arg1);
    }
    
    result = 1;
    return result;
}

uint64_t GetTableIndexFromLocaleName(int64_t arg1)
{
    int32_t r8 = 0;
    int32_t r9 = 0xe3;
    
    do
    {
        int32_t temp0_1;
        int32_t temp1_1;
        temp0_1 = HIGHD(r9 + r8);
        temp1_1 = LOWD(r9 + r8);
        int64_t rbp_1 = 0x55;
        int64_t r11_1 = (temp1_1 - temp0_1) >> 1;
        int16_t* rbx_1 = (&data_1400380f0)[r11_1 * 2];
        int16_t* rdi_2 = arg1 - rbx_1;
        int16_t rcx_2;
        int16_t r10_1;
        
        do
        {
            rcx_2 = *(rdi_2 + rbx_1) + 0x20;
            
            if (*(rdi_2 + rbx_1) - 0x41 > 0x19)
                rcx_2 = *(rdi_2 + rbx_1);
            
            r10_1 = *rbx_1 + 0x20;
            
            if (*rbx_1 - 0x41 > 0x19)
                r10_1 = *rbx_1;
            
            rbx_1 = &rbx_1[1];
            int64_t temp2_1 = rbp_1;
            rbp_1 -= 1;
            
            if (temp2_1 == 1)
                break;
            
            if (!rcx_2)
                break;
        } while (rcx_2 == r10_1);
        
        uint32_t rax_7 = r10_1;
        uint32_t rcx_3 = rcx_2;
        uint32_t rcx_4 = rcx_3 - rax_7;
        
        if (rcx_3 == rax_7)
            return *(r11_1 * 0x10 + 0x1400380f8);
        
        int32_t rax_8 = r11_1 - 1;
        
        if (rcx_4 >= 0)
            rax_8 = r9;
        
        r9 = rax_8;
        
        if (rcx_4 >= 0)
            r8 = r11_1 + 1;
    } while (r8 <= r9);
    
    return 0xffffffff;
}

uint64_t sub_140023bc0(int32_t arg1, int16_t* arg2, int32_t arg3)
{
    int64_t rdi = arg3;
    
    if ((arg1 & 0xfffff3ff || arg1 == 0xc00) && (arg2 || rdi <= 0) && rdi >= 0)
    {
        int32_t r9_1 = 0;
        int32_t r10_1 = 0xe3;
        int32_t rax_4;
        
        while (true)
        {
            int32_t temp0_1;
            int32_t temp1_1;
            temp0_1 = HIGHD(r10_1 + r9_1);
            temp1_1 = LOWD(r10_1 + r9_1);
            rax_4 = (temp1_1 - temp0_1) >> 1;
            int64_t rcx_1 = rax_4 << 4;
            int32_t rdx_2 = arg1 - *(rcx_1 + &data_140036690);
            
            if (arg1 == *(rcx_1 + &data_140036690))
                break;
            
            int32_t rcx_2 = rax_4 - 1;
            
            if (rdx_2 >= 0)
                rcx_2 = r10_1;
            
            r10_1 = rcx_2;
            
            if (rdx_2 >= 0)
                r9_1 = rax_4 + 1;
            
            if (r9_1 > rcx_2)
            {
                rax_4 = -1;
                break;
            }
        }
        
        if (rax_4 >= 0)
        {
            int16_t* rbp_1 = (&data_140036698)[rax_4 * 2];
            int64_t r11;
            int32_t rax_8 = wcsnlen(rbp_1, 0x55, r11);
            
            if (rdi <= 0)
                return rax_8 + 1;
            
            if (rax_8 < rdi)
            {
                if (!wcscpy_s(arg2, rdi, rbp_1))
                    return rax_8 + 1;
                
                _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
                /* no return */
            }
        }
    }
    
    return 0;
}

uint64_t __acrt_DownlevelLocaleNameToLCID(int64_t arg1)
{
    if (arg1)
    {
        int32_t rax_1 = GetTableIndexFromLocaleName(arg1);
        
        if (rax_1 >= 0 && rax_1 < 0xe4)
            return *(&data_140036690 + rax_1 * 0x10);
    }
    
    return 0;
}

int64_t __crt_mbstring::__mbrtowc_utf8(int16_t* arg1, char* arg2, uint64_t arg3, int64_t* arg4)
{
    int32_t var_18;
    int64_t rsi;
    int64_t result = __crt_mbstring::__mbrtoc32_utf8(&var_18, arg2, arg3, arg4, rsi);
    
    if (result <= 4)
    {
        int32_t rdx = var_18;
        
        if (rdx > 0xffff)
            rdx = 0xfffd;
        
        if (arg1)
            *arg1 = rdx;
    }
    
    return result;
}

int64_t __crt_mbstring::__mbsrtowcs_utf8(uint16_t* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4)
{
    char* rdi = *arg2;
    int64_t rbp = arg3;
    int64_t rax;
    int64_t rsi;
    
    if (!arg1)
    {
        int64_t result = 0;
        
        while (true)
        {
            uint64_t r8_3;
            
            if (!*rdi)
                r8_3 = 1;
            else if (rdi[1])
            {
                rax = rdi[2];
                char temp0_1 = rax;
                rax = -(rax);
                r8_3 = -((arg3 - arg3)) + 3;
            }
            else
                r8_3 = 2;
            
            rax = __crt_mbstring::__mbrtoc32_utf8(0, rdi, r8_3, arg4, rsi);
            
            if (rax == -1)
                break;
            
            if (!rax)
                return result;
            
            if (rax == 4)
                result += 1;
            
            rdi = &rdi[rax];
            result += 1;
        }
    }
    else
    {
        uint16_t* rbx = arg1;
        
        if (!arg3)
        {
        label_140023e06:
            *arg2 = rdi;
            return (rbx - arg1) >> 1;
        }
        
        while (true)
        {
            uint64_t r8;
            
            if (!*rdi)
                r8 = 1;
            else if (rdi[1])
            {
                rax = rdi[2];
                char temp1_1 = rax;
                rax = -(rax);
                r8 = -((arg3 - arg3)) + 3;
            }
            else
                r8 = 2;
            
            int32_t arg_8;
            rax = __crt_mbstring::__mbrtoc32_utf8(&arg_8, rdi, r8, arg4, rsi);
            
            if (rax == -1)
            {
                *arg2 = rdi;
                break;
            }
            
            if (!rax)
            {
                rdi = nullptr;
                *rbx = 0;
                goto label_140023e06;
            }
            
            int32_t rcx_1 = arg_8;
            
            if (rcx_1 > 0xffff)
            {
                if (rbp <= 1)
                    goto label_140023e06;
                
                arg3 = 0xd800;
                arg_8 = rcx_1 - 0x10000;
                rbp -= 1;
                *rbx = (rcx_1 - 0x10000) >> 0xa | 0xd800;
                rcx_1 = (rcx_1 - 0x10000) & 0x3ff;
                rbx = &rbx[1];
                rcx_1 |= 0xdc00;
            }
            
            *rbx = rcx_1;
            rdi = &rdi[rax];
            rbx = &rbx[1];
            int64_t temp2_1 = rbp;
            rbp -= 1;
            
            if (temp2_1 == 1)
                goto label_140023e06;
        }
    }
    *_errno() = 0x2a;
    return -1;
}

void* __crt_mbstring::__c32rtomb_utf8(char* arg1, uint32_t arg2, int64_t* arg3)
{
    if (!arg1)
        *arg3 = 0;
    else if (arg2)
    {
        if (arg2 & 0xffffff80)
        {
            char* i_2;
            char r10;
            
            if (!(arg2 & 0xfffff800))
            {
                i_2 = 1;
                r10 = 0xc0;
            }
            else if (arg2 & 0xffff0000)
            {
                if (arg2 & 0xffe00000 || arg2 > 0x10ffff)
                {
                label_140023f3c:
                    *arg3 = 0;
                    *_errno() = 0x2a;
                    return -ffffffffffffffff;
                }
                
                i_2 = 3;
                r10 = 0xf0;
            }
            else
            {
                if (arg2 - 0xd800 <= 0x7ff)
                    goto label_140023f3c;
                
                i_2 = 2;
                r10 = 0xe0;
            }
            
            char* i_1 = i_2;
            char* i;
            
            do
            {
                int32_t rax;
                rax = arg2;
                arg2 u>>= 6;
                rax &= 0x3f;
                rax |= 0x80;
                *(i_1 + arg1) = rax;
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
            arg2 |= r10;
            *arg1 = arg2;
            *arg3 = 0;
            return &i_2[1];
        }
        
        *arg1 = arg2;
    }
    else
    {
        *arg1 = arg2;
        *arg3 = 0;
    }
    
    return 1;
}

void* j___crt_mbstring::__c32rtomb_utf8(char* arg1, uint32_t arg2, int64_t* arg3)
{
    /* tailcall */
    return __crt_mbstring::__c32rtomb_utf8(arg1, arg2, arg3);
}

uint64_t __acrt_fp_strflt_to_string(char* arg1, int64_t arg2, int32_t arg3, void* arg4)
{
    int32_t i = arg3;
    char* r10 = arg1;
    int32_t* rax_1;
    int32_t rbx;
    
    if (arg1 && arg2)
    {
        int32_t i_1 = 0;
        *arg1 = 0;
        
        if (i > 0)
            i_1 = i;
        
        if (arg2 > i_1 + 1)
        {
            if (arg4)
            {
                int64_t rbx_1 = *(arg4 + 8);
                char* r8 = &arg1[1];
                *arg1 = 0x30;
                int64_t rax_4;
                
                for (; i > 0; i -= 1)
                {
                    char rcx = *rbx_1;
                    rax_4 = rbx_1 + 1;
                    char rdx = 0x30;
                    
                    if (rcx)
                        rdx = rcx;
                    
                    if (!rcx)
                        rax_4 = rbx_1;
                    
                    *r8 = rdx;
                    rbx_1 = rax_4;
                    r8 = &r8[1];
                }
                
                *r8 = 0;
                
                if (i >= 0 && *rbx_1 >= 0x35)
                {
                    while (true)
                    {
                        r8 -= 1;
                        rax_4 = *r8;
                        
                        if (rax_4 != 0x39)
                            break;
                        
                        *r8 = 0x30;
                    }
                    
                    rax_4 += 1;
                    *r8 = rax_4;
                }
                
                if (*r10 != 0x31)
                {
                    void* r8_1 = -ffffffffffffffff;
                    
                    do
                        r8_1 += 1;
                     while (*(r10 + r8_1 + 1));
                    
                    sub_14000bee0(r10, &r10[1], r8_1 + 1);
                }
                else
                    *(arg4 + 4) += 1;
                
                return 0;
            }
            
            rax_1 = _errno();
            rbx = 0x16;
        }
        else
        {
            rax_1 = _errno();
            rbx = 0x22;
        }
    }
    else
    {
        rax_1 = _errno();
        rbx = 0x16;
    }
    
    *rax_1 = rbx;
    _invalid_parameter_noinfo();
    return rbx;
}

uint64_t sub_140024040(int64_t arg1, int32_t arg2, int32_t* arg3, char* arg4, int64_t arg5 @ r13, int64_t arg6)
{
    int64_t var_30 = arg5;
    void var_818;
    int64_t rax_1 = __security_cookie ^ &var_818;
    int32_t var_7c0;
    fegetenv(&var_7c0);
    char var_7b8;
    
    if ((var_7c0 & 0x1f) != 0x1f)
    {
        feholdexcept(&var_7c0);
        var_7b8 = 1;
    }
    else
        var_7b8 = 0;
    
    *(arg3 + 8) = arg4;
    int32_t rcx_2 = 0x20;
    
    if (arg1 < 0)
        rcx_2 = 0x2d;
    
    *arg3 = rcx_2;
    int64_t rdx_2 = arg1 >> 0x34 & 0x7ff;
    uint64_t result;
    char const* const r8;
    
    if (rdx_2 || 0xfffffffffffff & arg1)
    {
        int32_t rcx_3;
        
        if (rdx_2 == 0x7ff)
        {
            int64_t rcx_5 = arg1 & 0xfffffffffffff;
            
            if (!rcx_5)
                rcx_3 = 1;
            else if (arg1 >= 0 || rcx_5 != 0x8000000000000)
                rcx_3 = (~(arg1 >> 0x33) & 1) | 2;
            else
                rcx_3 = 4;
            
            arg3[1] = 1;
        }
        else
            rcx_3 = 0;
        
        if (rcx_3 == 1)
        {
            r8 = "1#INF";
            goto label_140025248;
        }
        
        if (rcx_3 == 2)
        {
            r8 = "1#QNAN";
            goto label_140025248;
        }
        
        if (rcx_3 == 3)
        {
            r8 = "1#SNAN";
            goto label_140025248;
        }
        
        if (rcx_3 == 4)
        {
            r8 = "1#IND";
            goto label_140025248;
        }
        
        uint64_t rdi_1 = arg2 + 1;
        uint128_t zmm0 = arg1 & 0x7fffffffffffffff;
        int32_t result_2 = rdi_1;
        uint64_t var_7d0_1 = zmm0;
        uint64_t r8_2 = var_7d0_1 >> 0x34;
        int64_t rcx_14 = r8_2 & 0x7ff;
        int64_t rdi_4 = ((rdi_1 - rdi_1) & 0x10000000000000) + (var_7d0_1 & 0xfffffffffffff);
        int32_t r15_2 = 2 + 0 - 0 + (r8_2 & 0x7ff);
        int32_t rdx_5;
        double zmm0_2;
        double zmm6[0x2];
        rdx_5 = sub_140026ed8(sub_140026fa0(zmm0, zmm6));
        int32_t rcx_16 = zmm0_2;
        int32_t var_794 = rdi_4;
        uint32_t rdi_5 = rdi_4 >> 0x20;
        int32_t r13_1 = (arg5 - arg5) & rcx_16;
        uint32_t var_790_1 = rdi_5;
        int32_t var_7d8_1 = r13_1;
        int32_t i_14 = -((rdx_5 - rdx_5)) + 1;
        int32_t i_7 = i_14;
        int64_t var_7e0_1;
        int32_t i_8;
        int32_t var_5c4[0x73];
        int32_t var_3f4;
        int32_t i_4;
        int32_t i_2;
        
        if (r15_2 < 0x434)
        {
            bool cond:1_1 = r15_2 == 0x36;
            
            if (r15_2 != 0x36)
            {
                int32_t var_3f0_4 = 0x100000;
                var_3f4 = 0;
                int32_t var_3f8_4 = 2;
                cond:1_1 = !rdi_5;
            }
            
            uint32_t rdi_11;
            
            if (r15_2 == 0x36 || !rdi_5)
            {
            label_1400245d7:
                var_7e0_1 = 0;
                uint64_t rflags_4;
                int32_t temp0_5;
                temp0_5 = __bsr_gprv_memv((&var_794)[i_14 - 1]);
                int32_t rax_34;
                
                rax_34 = cond:1_1 ? 0 : temp0_5 + 1;
                
                i_4 = i_14;
                int32_t i_23 = i_14;
                
                while (true)
                {
                    uint64_t i_26 = i_23;
                    uint64_t r8_12 = i_23 - 1;
                    int32_t r9_7;
                    
                    if (i_23 >= i_14)
                        r9_7 = 0;
                    else
                        r9_7 = (&var_794)[i_26];
                    
                    int32_t rcx_37;
                    
                    if (r8_12 >= i_14)
                        rcx_37 = 0;
                    else
                        rcx_37 = (&var_794)[r8_12];
                    
                    i_23 = r8_12;
                    (&var_794)[i_26] = rcx_37 >> 0x1f | (r9_7 * 2);
                    
                    if (r8_12 == 0xffffffff)
                        break;
                    
                    i_14 = i_7;
                }
                
                if (0x20 - rax_34 < 1)
                    i_4 += 1;
                
                i_7 = i_4;
                rdi_11 = (0x435 - r15_2) >> 5;
                sub_14000c550(&var_3f4, 0, rdi_11 << 2);
                (&var_3f4)[rdi_11] = 1 << ((0x435 - r15_2) & 0x1f);
            }
            else
            {
                int32_t r8_7 = 0;
                
                while (true)
                {
                    uint64_t rcx_30 = r8_7;
                    int32_t rax_25 = (&var_794)[rcx_30];
                    int32_t temp9_1 = (&var_3f4)[rcx_30];
                    cond:1_1 = temp9_1 == rax_25;
                    
                    if (temp9_1 != rax_25)
                        goto label_1400245d7;
                    
                    r8_7 += 1;
                    
                    if (r8_7 == 2)
                    {
                        uint64_t rflags_3;
                        int32_t temp0_4;
                        temp0_4 = _bit_scan_reverse(rdi_5);
                        var_7e0_1 = 0;
                        int32_t rax_27;
                        
                        rax_27 = r8_7 == 2 ? 0 : temp0_4 + 1;
                        
                        i_4 = i_14;
                        int32_t i_22 = i_14;
                        
                        while (true)
                        {
                            uint64_t i_25 = i_22;
                            uint64_t r8_8 = i_22 - 1;
                            int32_t r9_6;
                            
                            if (i_22 >= i_14)
                                r9_6 = 0;
                            else
                                r9_6 = (&var_794)[i_25];
                            
                            int32_t rcx_31;
                            
                            if (r8_8 >= i_14)
                                rcx_31 = 0;
                            else
                                rcx_31 = (&var_794)[r8_8];
                            
                            i_22 = r8_8;
                            (&var_794)[i_25] = rcx_31 >> 0x1e | r9_6 << 2;
                            
                            if (r8_8 == 0xffffffff)
                                break;
                            
                            i_14 = i_7;
                        }
                        
                        if (0x20 - rax_27 < 2)
                            i_4 += 1;
                        
                        i_7 = i_4;
                        rdi_11 = (0x436 - r15_2) >> 5;
                        void* rbx_5 = rdi_11 << 2;
                        sub_14000c550(&var_3f4, 0, rbx_5);
                        *(&var_3f4 + rbx_5) = 1 << ((0x436 - r15_2) & 0x1f);
                        break;
                    }
                }
            }
            
            i_2 = rdi_11 + 1;
            uint64_t r8_11 = i_2 << 2;
            int32_t i_9 = i_2;
            i_8 = i_2;
            
            if (r8_11)
            {
                int128_t* rcx_36 = &var_5c4;
                
                if (r8_11 > 0x1cc)
                {
                    sub_14000c550(rcx_36, 0, 0x1cc);
                    *_errno() = 0x22;
                    _invalid_parameter_noinfo();
                }
                else
                    sub_14000bee0(rcx_36, &var_3f4, r8_11);
                
                i_2 = i_8;
            }
        }
        else
        {
            int32_t var_3f0_1 = 0x100000;
            var_3f4 = 0;
            int32_t var_3f8_1 = 2;
            
            if (!rdi_5)
            {
            label_140024385:
                var_7e0_1 = 0;
                int32_t r11_4 = (r15_2 - 0x433) & 0x1f;
                uint32_t i = (r15_2 - 0x433) >> 5;
                int32_t rdi_8 = 1 << (0x20 - r11_4);
                uint64_t rflags_2;
                int32_t temp0_3;
                temp0_3 = __bsr_gprv_memv((&var_794)[i_14 - 1]);
                int32_t rax_21;
                
                rax_21 = rdi_8 == 1 ? 0 : temp0_3 + 1;
                
                int32_t i_13 = i_14 + i;
                char rcx_25;
                
                if (i_13 == 0x73)
                    rcx_25 = 1;
                
                if (i_13 != 0x73 || r11_4 <= 0x20 - rax_21)
                    rcx_25 = 0;
                
                if (i_13 > 0x73 || rcx_25)
                    i_4 = 0;
                else
                {
                    i_4 = 0x72;
                    
                    if (i_13 < 0x72)
                        i_4 = i_13;
                    
                    int32_t i_17 = i_4;
                    
                    if (i_4 != 0xffffffff)
                    {
                        while (i_17 >= i)
                        {
                            uint64_t rax_23 = i_17 - i;
                            uint64_t rcx_26 = rax_23 - 1;
                            int32_t r9_3;
                            
                            if (rax_23 >= i_14)
                                r9_3 = 0;
                            else
                                r9_3 = (&var_794)[rax_23];
                            
                            int32_t rdx_12;
                            
                            if (rcx_26 >= i_14)
                                rdx_12 = 0;
                            else
                                rdx_12 = (&var_794)[rcx_26];
                            
                            uint64_t i_21 = i_17;
                            i_17 -= 1;
                            (&var_794)[i_21] = (rdx_12 & ~(rdi_8 - 1)) >> (0x20 - r11_4)
                                | (r9_3 & (rdi_8 - 1)) << r11_4;
                            
                            if (i_17 == 0xffffffff)
                                break;
                            
                            i_14 = i_7;
                        }
                    }
                    
                    uint64_t rcx_29 = 0;
                    
                    if (i)
                    {
                        do
                        {
                            (&var_794)[rcx_29] = 0;
                            rcx_29 = rcx_29 + 1;
                        } while (rcx_29 != i);
                    }
                    
                    if (r11_4 > 0x20 - rax_21)
                        i_4 += 1;
                }
                
                int32_t var_3f0_3 = 0;
                i_2 = 1;
                i_8 = 1;
                i_7 = i_4;
                int32_t var_3f8_3 = 1;
                var_5c4[0] = 2;
            }
            else
            {
                int32_t r8_4 = 0;
                
                while (true)
                {
                    uint64_t rcx_17 = r8_4;
                    
                    if ((&var_3f4)[rcx_17] != (&var_794)[rcx_17])
                        goto label_140024385;
                    
                    r8_4 += 1;
                    
                    if (r8_4 == 2)
                    {
                        var_7e0_1 = 0;
                        int32_t r11_2 = (r15_2 - 0x432) & 0x1f;
                        uint32_t i_1 = (r15_2 - 0x432) >> 5;
                        int32_t rdi_6 = 1 << (0x20 - r11_2);
                        uint64_t rflags_1;
                        int32_t temp0_2;
                        temp0_2 = __bsr_gprv_memv((&var_794)[i_14 - 1]);
                        int32_t rax_15;
                        
                        rax_15 = rdi_6 == 1 ? 0 : temp0_2 + 1;
                        
                        int32_t i_12 = i_14 + i_1;
                        char rcx_19;
                        
                        if (i_12 == 0x73)
                            rcx_19 = 1;
                        
                        if (i_12 != 0x73 || r11_2 <= 0x20 - rax_15)
                            rcx_19 = 0;
                        
                        if (i_12 > 0x73 || rcx_19)
                            i_4 = 0;
                        else
                        {
                            i_4 = 0x72;
                            
                            if (i_12 < 0x72)
                                i_4 = i_12;
                            
                            int32_t i_16 = i_4;
                            
                            if (i_4 != 0xffffffff)
                            {
                                while (i_16 >= i_1)
                                {
                                    uint64_t rax_17 = i_16 - i_1;
                                    uint64_t rcx_20 = rax_17 - 1;
                                    int32_t r9;
                                    
                                    if (rax_17 >= i_14)
                                        r9 = 0;
                                    else
                                        r9 = (&var_794)[rax_17];
                                    
                                    int32_t rdx_8;
                                    
                                    if (rcx_20 >= i_14)
                                        rdx_8 = 0;
                                    else
                                        rdx_8 = (&var_794)[rcx_20];
                                    
                                    uint64_t i_20 = i_16;
                                    i_16 -= 1;
                                    (&var_794)[i_20] = (rdx_8 & ~(rdi_6 - 1)) >> (0x20 - r11_2)
                                        | (r9 & (rdi_6 - 1)) << r11_2;
                                    
                                    if (i_16 == 0xffffffff)
                                        break;
                                    
                                    i_14 = i_7;
                                }
                            }
                            
                            uint64_t rcx_23 = 0;
                            
                            if (i_1)
                            {
                                do
                                {
                                    (&var_794)[rcx_23] = 0;
                                    rcx_23 = rcx_23 + 1;
                                } while (rcx_23 != i_1);
                            }
                            
                            if (r11_2 > 0x20 - rax_15)
                                i_4 += 1;
                        }
                        
                        int32_t var_3f0_2 = 0;
                        i_2 = 1;
                        i_8 = 1;
                        i_7 = i_4;
                        int32_t var_3f8_2 = 1;
                        var_5c4[0] = 4;
                        break;
                    }
                }
            }
        }
        
        int32_t var_224[0x73];
        
        if (r13_1 >= 0)
        {
            uint64_t rax_40 = r13_1 / 0xa;
            var_7e0_1 = rax_40;
            int32_t r12_1 = rax_40;
            int32_t var_7e8_1 = rax_40;
            
            if (rax_40)
            {
                while (true)
                {
                    int32_t r13_2 = r12_1;
                    
                    if (r12_1 > 0x26)
                        r13_2 = 0x26;
                    
                    uint64_t rax_41 = r13_2 - 1;
                    uint32_t rcx_42 = *((rax_41 << 2) + 0x140030852);
                    uint64_t rsi_7 = *((rax_41 << 2) + 0x140030853);
                    sub_14000c550(&var_3f4, 0, rcx_42 << 2);
                    sub_14000bee0(&(&var_3f4)[rcx_42], 
                        &data_14002ff40 + (*((rax_41 << 2) + 0x140030850) << 2), rsi_7 << 2);
                    uint64_t i_18 = rsi_7 + rcx_42;
                    int128_t* rax_44;
                    uint32_t r8_16;
                    
                    if (i_18 <= 1)
                    {
                        rax_44 = var_3f4;
                        
                        if (!rax_44)
                        {
                        label_140024765:
                            i_2 = 0;
                            i_8 = i_2;
                            rax_44 = 1;
                        }
                        else if (rax_44 == 1 || !i_2)
                            rax_44 = 1;
                        else
                        {
                            r8_16 = 0;
                            uint64_t r9_8 = 0;
                            
                            do
                            {
                                void* rcx_47 = var_5c4[r9_8] * rax_44 + r8_16;
                                var_5c4[r9_8] = rcx_47;
                                r8_16 = rcx_47 >> 0x20;
                                r9_8 = r9_8 + 1;
                            } while (r9_8 != i_2);
                            
                        label_1400247b8:
                            
                            if (!r8_16)
                            {
                                i_2 = i_8;
                                rax_44 = 1;
                            }
                            else if (i_8 >= 0x73)
                            {
                                i_2 = 0;
                                i_8 = 0;
                                rax_44 = 0;
                            }
                            else
                            {
                                var_5c4[i_8] = r8_16;
                                i_2 = i_8 + 1;
                                i_8 = i_2;
                                rax_44 = 1;
                            }
                        }
                    }
                    else if (i_2 > 1)
                    {
                        bool c_5 = i_18 < i_2;
                        int32_t i_3 = i_2;
                        int32_t* r13_3 = &var_3f4;
                        
                        if (!c_5)
                            r13_3 = &var_5c4;
                        
                        int32_t (* rdx_20)[0x73] = &var_5c4;
                        
                        if (c_5)
                            i_3 = i_18;
                        
                        if (!c_5)
                            rdx_20 = &var_3f4;
                        
                        rax_44 = c_5;
                        int32_t (* var_7d0_2)[0x73] = rdx_20;
                        
                        if (rax_44)
                            i_18 = i_2;
                        
                        i_2 = 0;
                        uint64_t r9_10 = 0;
                        int32_t i_10 = 0;
                        
                        if (i_3)
                        {
                            do
                            {
                                uint64_t rsi_9 = r13_3[r9_10];
                                
                                if (rsi_9)
                                {
                                    uint32_t j_9 = 0;
                                    int32_t j = r9_10;
                                    
                                    if (i_18)
                                    {
                                        int32_t rbx_13 = -(r9_10);
                                        
                                        while (j != 0x73)
                                        {
                                            uint64_t j_7 = j;
                                            
                                            if (j == i_2)
                                            {
                                                var_224[j_7] = 0;
                                                i_10 = j + 1;
                                            }
                                            
                                            uint64_t rax_47 = j + rbx_13;
                                            j += 1;
                                            int64_t rdx_24 =
                                                (*rdx_20)[rax_47] * rsi_9 + j_9 + var_224[j_7];
                                            var_224[j_7] = rdx_24;
                                            i_2 = i_10;
                                            j_9 = rdx_24 >> 0x20;
                                            
                                            if (j + rbx_13 == i_18)
                                                break;
                                            
                                            rdx_20 = var_7d0_2;
                                        }
                                        
                                        if (j_9)
                                        {
                                            uint32_t j_1;
                                            
                                            do
                                            {
                                                if (j == 0x73)
                                                    goto label_140024b92;
                                                
                                                uint64_t j_5 = j;
                                                
                                                if (j == i_2)
                                                {
                                                    var_224[j_5] = 0;
                                                    i_10 = j + 1;
                                                }
                                                
                                                j += 1;
                                                void* rcx_53 = j_9 + var_224[j_5];
                                                var_224[j_5] = rcx_53;
                                                i_2 = i_10;
                                                j_1 = rcx_53 >> 0x20;
                                                j_9 = j_1;
                                            } while (j_1);
                                        }
                                    }
                                    
                                    if (j == 0x73)
                                        goto label_140024b92;
                                    
                                    rdx_20 = var_7d0_2;
                                }
                                else if (r9_10 == i_2)
                                {
                                    var_224[r9_10] &= rsi_9;
                                    i_2 = r9_10 + 1;
                                    i_10 = i_2;
                                }
                                
                                r9_10 = r9_10 + 1;
                            } while (r9_10 != i_3);
                        }
                        
                        int64_t r8_22 = i_2 << 2;
                        i_8 = i_2;
                        
                        if (r8_22)
                        {
                            int128_t* rcx_54 = &var_5c4;
                            
                            if (r8_22 > 0x1cc)
                            {
                                sub_14000c550(rcx_54, 0, 0x1cc);
                                *_errno() = 0x22;
                                _invalid_parameter_noinfo();
                            }
                            else
                                sub_14000bee0(rcx_54, &var_224, r8_22);
                            
                            i_2 = i_8;
                        }
                        
                        r12_1 = var_7e8_1;
                        rax_44 = 1;
                    }
                    else
                    {
                        uint64_t rbx_11 = var_5c4[0];
                        uint64_t r8_19 = i_18 << 2;
                        i_2 = i_18;
                        i_8 = i_18;
                        
                        if (r8_19)
                        {
                            int128_t* rcx_48 = &var_5c4;
                            
                            if (r8_19 > 0x1cc)
                            {
                                sub_14000c550(rcx_48, 0, 0x1cc);
                                *_errno() = 0x22;
                                _invalid_parameter_noinfo();
                            }
                            else
                                sub_14000bee0(rcx_48, &var_3f4, r8_19);
                            
                            i_2 = i_8;
                        }
                        
                        if (!rbx_11)
                            goto label_140024765;
                        
                        if (rbx_11 != 1 && i_2)
                        {
                            r8_16 = 0;
                            uint64_t r9_9 = 0;
                            
                            do
                            {
                                void* rcx_51 = var_5c4[r9_9] * rbx_11 + r8_16;
                                var_5c4[r9_9] = rcx_51;
                                r8_16 = rcx_51 >> 0x20;
                                r9_9 = r9_9 + 1;
                            } while (r9_9 != i_2);
                            
                            goto label_1400247b8;
                        }
                        
                        rax_44 = 1;
                    }
                    
                    if (!rax_44)
                        goto label_140024b92;
                    
                    int32_t temp19_1 = r12_1;
                    r12_1 -= r13_2;
                    var_7e8_1 = r12_1;
                    
                    if (temp19_1 == r13_2)
                    {
                        rax_40 = var_7e0_1;
                        r13_1 = var_7d8_1;
                        break;
                    }
                }
            }
            
            uint32_t rax_53 = rax_40 * 5 * 2;
            
            if (r13_1 != rax_53)
            {
                int32_t rax_55 = *(((r13_1 - rax_53 - 1) << 2) + 0x1400308e8);
                
                if (!rax_55)
                {
                label_140024b92:
                    i_2 = 0;
                    i_8 = i_2;
                }
                else if (rax_55 != 1 && i_2)
                {
                    uint32_t r8_23 = 0;
                    uint64_t r9_11 = 0;
                    
                    do
                    {
                        int64_t rcx_59 = var_5c4[r9_11] * rax_55 + r8_23;
                        var_5c4[r9_11] = rcx_59;
                        r8_23 = rcx_59 >> 0x20;
                        r9_11 = r9_11 + 1;
                    } while (r9_11 != i_2);
                    
                    if (!r8_23)
                        i_2 = i_8;
                    else
                    {
                        if (i_8 >= 0x73)
                            goto label_140024b92;
                        
                        var_5c4[i_8] = r8_23;
                        i_2 = i_8 + 1;
                        i_8 = i_2;
                    }
                }
            }
            
            goto label_140024b32;
        }
        
        int32_t r13_4 = -(r13_1);
        uint64_t rax_62 = r13_4 / 0xa;
        int32_t var_7d4_2 = rax_62;
        int32_t r12_2 = rax_62;
        int32_t var_7e8_2 = rax_62;
        
        if (rax_62)
        {
            while (true)
            {
                int32_t rax_63 = r12_2;
                
                if (r12_2 > 0x26)
                    rax_63 = 0x26;
                
                var_7e0_1 = rax_63;
                uint64_t rax_64 = rax_63 - 1;
                uint32_t rcx_61 = *((rax_64 << 2) + 0x140030852);
                uint64_t rsi_10 = *((rax_64 << 2) + 0x140030853);
                sub_14000c550(&var_3f4, 0, rcx_61 << 2);
                sub_14000bee0(&(&var_3f4)[rcx_61], 
                    &data_14002ff40 + (*((rax_64 << 2) + 0x140030850) << 2), rsi_10 << 2);
                uint64_t i_19 = rsi_10 + rcx_61;
                int128_t* rax_67;
                uint32_t r8_29;
                
                if (i_19 <= 1)
                {
                    rax_67 = var_3f4;
                    
                    if (!rax_67)
                    {
                    label_140024c54:
                        i_4 = 0;
                        i_7 = i_4;
                        rax_67 = 1;
                    }
                    else if (rax_67 == 1 || !i_4)
                        rax_67 = 1;
                    else
                    {
                        r8_29 = 0;
                        uint64_t r9_13 = 0;
                        
                        do
                        {
                            void* rcx_66 = (&var_794)[r9_13] * rax_67 + r8_29;
                            (&var_794)[r9_13] = rcx_66;
                            r8_29 = rcx_66 >> 0x20;
                            r9_13 = r9_13 + 1;
                        } while (r9_13 != i_4);
                        
                    label_140024c9e:
                        
                        if (!r8_29)
                        {
                            i_4 = i_7;
                            rax_67 = 1;
                        }
                        else if (i_7 >= 0x73)
                        {
                            i_4 = 0;
                            i_7 = 0;
                            rax_67 = 0;
                        }
                        else
                        {
                            (&var_794)[i_7] = r8_29;
                            i_4 = i_7 + 1;
                            i_7 = i_4;
                            rax_67 = 1;
                        }
                    }
                }
                else if (i_4 > 1)
                {
                    bool c_6 = i_19 < i_4;
                    int32_t i_5 = i_4;
                    int32_t* rcx_71 = &var_3f4;
                    
                    if (!c_6)
                        rcx_71 = &var_794;
                    
                    if (c_6)
                        i_5 = i_19;
                    
                    int32_t* var_7a8_1 = rcx_71;
                    rax_67 = c_6;
                    int32_t* rdx_30 = &var_794;
                    
                    if (!c_6)
                        rdx_30 = &var_3f4;
                    
                    int32_t* var_7d0_3 = rdx_30;
                    
                    if (rax_67)
                        i_19 = i_4;
                    
                    i_4 = 0;
                    uint64_t r9_15 = 0;
                    int32_t i_11 = 0;
                    
                    if (i_5)
                    {
                        do
                        {
                            uint64_t rsi_12 = rcx_71[r9_15];
                            
                            if (rsi_12)
                            {
                                uint32_t j_10 = 0;
                                int32_t j_2 = r9_15;
                                
                                if (i_19)
                                {
                                    int32_t rbx_18 = -(r9_15);
                                    
                                    while (j_2 != 0x73)
                                    {
                                        uint64_t j_8 = j_2;
                                        
                                        if (j_2 == i_4)
                                        {
                                            var_224[j_8] = 0;
                                            i_11 = j_2 + 1;
                                        }
                                        
                                        uint64_t rax_70 = rbx_18 + j_2;
                                        j_2 += 1;
                                        int64_t rdx_34 =
                                            rdx_30[rax_70] * rsi_12 + j_10 + var_224[j_8];
                                        var_224[j_8] = rdx_34;
                                        i_4 = i_11;
                                        j_10 = rdx_34 >> 0x20;
                                        
                                        if (rbx_18 + j_2 == i_19)
                                            break;
                                        
                                        rdx_30 = var_7d0_3;
                                    }
                                    
                                    if (j_10)
                                    {
                                        uint32_t j_3;
                                        
                                        do
                                        {
                                            if (j_2 == 0x73)
                                                goto label_140024fdc;
                                            
                                            uint64_t j_6 = j_2;
                                            
                                            if (j_2 == i_4)
                                            {
                                                var_224[j_6] = 0;
                                                i_11 = j_2 + 1;
                                            }
                                            
                                            j_2 += 1;
                                            void* rcx_73 = var_224[j_6] + j_10;
                                            var_224[j_6] = rcx_73;
                                            i_4 = i_11;
                                            j_3 = rcx_73 >> 0x20;
                                            j_10 = j_3;
                                        } while (j_3);
                                    }
                                }
                                
                                if (j_2 == 0x73)
                                    goto label_140024fdc;
                                
                                rcx_71 = var_7a8_1;
                                rdx_30 = var_7d0_3;
                            }
                            else if (r9_15 == i_4)
                            {
                                var_224[r9_15] &= rsi_12;
                                i_4 = r9_15 + 1;
                                i_11 = i_4;
                            }
                            
                            r9_15 = r9_15 + 1;
                        } while (r9_15 != i_5);
                    }
                    
                    int64_t r8_35 = i_4 << 2;
                    i_7 = i_4;
                    
                    if (r8_35)
                    {
                        int128_t* rcx_74 = &var_794;
                        
                        if (r8_35 > 0x1cc)
                        {
                            sub_14000c550(rcx_74, 0, 0x1cc);
                            *_errno() = 0x22;
                            _invalid_parameter_noinfo();
                        }
                        else
                            sub_14000bee0(rcx_74, &var_224, r8_35);
                        
                        i_4 = i_7;
                    }
                    
                    r12_2 = var_7e8_2;
                    rax_67 = 1;
                }
                else
                {
                    uint64_t rbx_16 = var_794;
                    uint64_t r8_32 = i_19 << 2;
                    i_4 = i_19;
                    i_7 = i_19;
                    
                    if (r8_32)
                    {
                        int128_t* rcx_67 = &var_794;
                        
                        if (r8_32 > 0x1cc)
                        {
                            sub_14000c550(rcx_67, 0, 0x1cc);
                            *_errno() = 0x22;
                            _invalid_parameter_noinfo();
                        }
                        else
                            sub_14000bee0(rcx_67, &var_3f4, r8_32);
                        
                        i_4 = i_7;
                    }
                    
                    if (!rbx_16)
                        goto label_140024c54;
                    
                    if (rbx_16 != 1 && i_4)
                    {
                        r8_29 = 0;
                        uint64_t r9_14 = 0;
                        
                        do
                        {
                            void* rcx_70 = (&var_794)[r9_14] * rbx_16 + r8_29;
                            (&var_794)[r9_14] = rcx_70;
                            r8_29 = rcx_70 >> 0x20;
                            r9_14 = r9_14 + 1;
                        } while (r9_14 != i_4);
                        
                        goto label_140024c9e;
                    }
                    
                    rax_67 = 1;
                }
                
                if (!rax_67)
                    goto label_140024fdc;
                
                int32_t temp17_1 = r12_2;
                r12_2 -= var_7e0_1;
                var_7e8_2 = r12_2;
                
                if (temp17_1 == var_7e0_1)
                {
                    rax_62 = var_7d4_2;
                    break;
                }
            }
        }
        
        uint32_t rax_76 = rax_62 * 5 * 2;
        
        if (r13_4 == rax_76)
            goto label_140024b32;
        
        int32_t rax_78 = *(((r13_4 - rax_76 - 1) << 2) + 0x1400308e8);
        char* i_6;
        char* i_15;
        
        if (!rax_78)
        {
        label_140024fdc:
            i_7 = 0;
            i_15 = arg4;
            i_6 = i_15;
        }
        else
        {
            if (rax_78 == 1 || !i_4)
                goto label_140024b32;
            
            uint32_t r8_36 = 0;
            uint64_t r9_16 = 0;
            
            do
            {
                int64_t rcx_77 = (&var_794)[r9_16] * rax_78 + r8_36;
                (&var_794)[r9_16] = rcx_77;
                r8_36 = rcx_77 >> 0x20;
                r9_16 = r9_16 + 1;
            } while (r9_16 != i_4);
            
            if (r8_36)
            {
                if (i_7 >= 0x73)
                    goto label_140024fdc;
                
                (&var_794)[i_7] = r8_36;
                i_4 = i_7 + 1;
                i_7 = i_4;
                goto label_140024b32;
            }
            
            i_4 = i_7;
        label_140024b32:
            i_15 = arg4;
            i_6 = i_15;
            
            if (i_4)
            {
                uint32_t r8_25 = 0;
                int32_t r9_12 = 0;
                
                do
                {
                    uint64_t rdx_26 = r9_12;
                    r9_12 += 1;
                    uint64_t r8_26 = r8_25 + (&var_794)[rdx_26] * 0xa;
                    (&var_794)[rdx_26] = r8_26;
                    r8_25 = r8_26 >> 0x20;
                } while (r9_12 != i_4);
                
                if (r8_25)
                {
                    if (i_7 >= 0x73)
                    {
                        int32_t var_3f8_7 = 0;
                        i_7 = 0;
                        memcpy_s(&var_794, 0x1cc, &var_3f4, nullptr);
                    }
                    else
                    {
                        (&var_794)[i_7] = r8_25;
                        i_7 += 1;
                    }
                }
            }
        }
        
        int32_t rax_81 = __crt_strtox::divide(&i_7, &i_8);
        int32_t rsi_13 = var_7d8_1;
        
        if (rax_81 == 0xa)
        {
            rsi_13 += 1;
            *i_15 = 0x31;
            i_6 = &i_15[1];
            
            if (i_2)
            {
                uint32_t r8_39 = 0;
                int32_t r9_17 = 0;
                
                do
                {
                    uint64_t rdx_37 = r9_17;
                    r9_17 += 1;
                    uint64_t r8_40 = r8_39 + var_5c4[rdx_37] * 0xa;
                    var_5c4[rdx_37] = r8_40;
                    r8_39 = r8_40 >> 0x20;
                } while (r9_17 != i_2);
                
                if (r8_39)
                {
                    if (i_8 >= 0x73)
                    {
                        int32_t var_3f8_8 = 0;
                        i_8 = 0;
                        memcpy_s(&var_5c4, 0x1cc, &var_3f4, nullptr);
                    }
                    else
                    {
                        var_5c4[i_8] = r8_39;
                        i_8 += 1;
                    }
                }
            }
        }
        else if (rax_81)
        {
            rax_81 += 0x30;
            i_6 = &i_15[1];
            *i_15 = rax_81;
        }
        else
            rsi_13 -= 1;
        
        int32_t result_1 = result_2;
        arg3[1] = rsi_13;
        
        if (rsi_13 >= 0 && result_1 <= 0x7fffffff)
            result_1 += rsi_13;
        
        result = result_1;
        
        if (arg6 - 1 < result)
            result = arg6 - 1;
        
        for (void* rdi_15 = &i_15[result]; i_6 != rdi_15; i_6 = &i_6[result])
        {
            int32_t i_24 = i_7;
            
            if (!i_24)
                break;
            
            uint32_t r8_42 = 0;
            int32_t r9_18 = 0;
            
            do
            {
                uint64_t rdx_38 = r9_18;
                r9_18 += 1;
                int64_t rcx_85 = (&var_794)[rdx_38] * 0x3b9aca00 + r8_42;
                (&var_794)[rdx_38] = rcx_85;
                r8_42 = rcx_85 >> 0x20;
            } while (r9_18 != i_24);
            
            if (r8_42)
            {
                if (i_7 >= 0x73)
                {
                    int32_t var_3f8_9 = 0;
                    i_7 = 0;
                    memcpy_s(&var_794, 0x1cc, &var_3f4, nullptr);
                }
                else
                {
                    (&var_794)[i_7] = r8_42;
                    i_7 += 1;
                }
            }
            
            uint32_t r8_45 = __crt_strtox::divide(&i_7, &i_8);
            
            for (int32_t j_4 = 8; j_4 != 0xffffffff; j_4 -= 1)
            {
                uint32_t rdx_41 = r8_45 / 0xa;
                r8_45 -= rdx_41 * 0xa;
                char rcx_88 = r8_45 + 0x30;
                r8_45 = rdx_41;
                
                if (rdi_15 - i_6 >= j_4)
                    *(j_4 + i_6) = rcx_88;
            }
            
            result = rdi_15 - i_6;
            
            if (result > 9)
                result = 9;
        }
        
        *i_6 = 0;
    }
    else
    {
        arg3[1] = 0;
        r8 = &data_140039988;
    label_140025248:
        result = strcpy_s(arg4, arg6, r8);
        
        if (result)
        {
            _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
            /* no return */
        }
    }
    
    if (var_7b8)
        result = fesetenv(&var_7c0);
    
    __security_check_cookie(rax_1 ^ &var_818);
    return result;
}

uint64_t _isatty(int32_t arg1)
{
    if (arg1 != 0xfffffffe)
    {
        if (arg1 >= 0 && arg1 < data_140043690)
        {
            int64_t rcx = arg1;
            return *((&data_140043290)[rcx >> 6] + (rcx & 0x3f) * 0x48 + 0x38) & 0x40;
        }
        
        *_errno() = 9;
        _invalid_parameter_noinfo();
    }
    else
        *_errno() = 9;
    
    return 0;
}

uint64_t _putwch_nolock(int16_t arg1)
{
    int16_t arg_8 = arg1;
    void arg_10;
    
    if (__dcrt_lowio_ensure_console_output_initialized() && sub_1400275bc(&arg_8, 1, &arg_10))
        return arg_8;
    
    return 0xffff;
}

void* __crt_mbstring::__wcsrtombs_utf8(int128_t* arg1, int64_t* arg2, void* arg3, int32_t* arg4)
{
    void var_78;
    int64_t rax_1 = __security_cookie ^ &var_78;
    int16_t* rsi = *arg2;
    int32_t* rbp = arg4;
    int32_t* var_58 = arg4;
    void* r13 = arg3;
    void* result;
    char var_50;
    
    if (!arg1)
    {
        void* rbx_2 = nullptr;
        
        while (true)
        {
            result = __crt_mbstring::__c16rtomb_utf8(&var_50, *rsi, rbp);
            
            if (result == -1)
                break;
            
            if (result && !*((&var_58 + 7) + result))
            {
                result = result - 1 + rbx_2;
                break;
            }
            
            rbx_2 += result;
            rsi = &rsi[1];
        }
    }
    else
    {
        int128_t* rbx = arg1;
        int16_t* rdi_1 = rsi;
        
        while (true)
        {
            char* r12_1 = &var_50;
            
            if (r13 >= 4)
                r12_1 = rbx;
            
            void* rax_2 = __crt_mbstring::__c16rtomb_utf8(r12_1, *rsi, rbp);
            
            if (rax_2 == -1)
            {
                *arg2 = rdi_1;
                result = -ffffffffffffffff;
                break;
            }
            
            if (r12_1 != rbx)
            {
                if (r13 < rax_2)
                    goto label_1400253c2;
                
                sub_14000bee0(rbx, r12_1, rax_2);
            }
            
            if (rax_2)
            {
                void* rax_3 = rbx + rax_2;
                
                if (!*(rax_3 - 1))
                {
                    rdi_1 = nullptr;
                    rbx = rax_3 - 1;
                label_1400253c2:
                    *arg2 = rdi_1;
                    result = rbx - arg1;
                    break;
                }
            }
            
            rsi = &rsi[1];
            
            if (rax_2)
                rdi_1 = rsi;
            
            r13 -= rax_2;
            rbx += rax_2;
            rbp = var_58;
        }
    }
    __security_check_cookie(rax_1 ^ &var_78);
    return result;
}

uint64_t strncpy_s(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    int32_t r10 = 0;
    
    if (arg4)
    {
        if (!arg1 || !arg2)
            goto label_14002544e;
        
    label_14002547a:
        
        if (!arg4)
            *arg1 = 0;
        else
        {
            int32_t* rax_1;
            int32_t rbx_1;
            
            if (arg3)
            {
                char* rbx_2 = arg3 - arg1;
                char* rdx = arg1;
                int64_t i_3 = arg2;
                int64_t i_2 = arg4;
                char rax;
                
                if (arg4 != -1)
                {
                    int64_t i;
                    
                    do
                    {
                        rax = *(rbx_2 + rdx);
                        *rdx = rax;
                        rdx = &rdx[1];
                        
                        if (!rax)
                            break;
                        
                        int64_t i_4 = i_3;
                        i_3 -= 1;
                        
                        if (i_4 == 1)
                            break;
                        
                        i = i_2;
                        i_2 -= 1;
                    } while (i != 1);
                    
                    if (!i_2)
                        *rdx = 0;
                }
                else
                {
                    int64_t i_1;
                    
                    do
                    {
                        rax = *(rbx_2 + rdx);
                        *rdx = rax;
                        rdx = &rdx[1];
                        
                        if (!rax)
                            break;
                        
                        i_1 = i_3;
                        i_3 -= 1;
                    } while (i_1 != 1);
                }
                
                if (!i_3)
                {
                    if (arg4 != -1)
                    {
                        *arg1 = 0;
                        rax_1 = _errno();
                        rbx_1 = 0x22;
                        goto label_140025458;
                    }
                    
                    arg1[arg2 - 1] = 0;
                    r10 = i_3 + 0x50;
                }
            }
            else
            {
                *arg1 = 0;
            label_14002544e:
                rax_1 = _errno();
                rbx_1 = 0x16;
            label_140025458:
                *rax_1 = rbx_1;
                _invalid_parameter_noinfo();
                r10 = rbx_1;
            }
        }
    }
    else
    {
        if (arg1)
        {
            if (!arg2)
                goto label_14002544e;
            
            goto label_14002547a;
        }
        
        if (arg2)
            goto label_14002544e;
    }
    
    return r10;
}

uint64_t sub_140025510(int32_t arg1 @ mxcsr) __pure
{
    return arg1;
}

int64_t _set_fpsr() __pure
{
    int32_t rcx;
    int32_t arg_8 = rcx;
}

int64_t _fclrf(int32_t arg1 @ mxcsr) __pure
{
    int32_t arg_8 = arg1 & 0xffffffc0;
}

int64_t _frnd(double arg1) __pure
{
    return;
}

BOOL GetStringTypeW(uint32_t dwInfoType, wchar16* lpSrcStr, int32_t cchSrc, uint16_t* lpCharType)
{
    /* tailcall */
    return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

uint64_t __acrt_fenv_get_control(int32_t arg1 @ mxcsr) __pure
{
    int16_t rax = arg1 & 0x8040;
    int32_t r8;
    
    if (rax == 0x8000)
        r8 = 0xc00;
    else if (rax != 0x40)
    {
        r8 = 0;
        
        if (rax == 0x8040)
            r8 = 0x400;
    }
    else
        r8 = 0x800;
    
    int32_t rax_2 = arg1 & 0x6000;
    int32_t rcx;
    
    if (!rax_2)
        rcx = 0;
    else if (rax_2 == 0x2000)
        rcx = 0x100;
    else if (rax_2 == 0x4000)
        rcx = 0x200;
    else
    {
        rcx = 0x300;
        
        if (rax_2 != 0x6000)
            rcx = 0;
    }
    
    int32_t rdx_7 = (arg1 >> 8 & 1) << 5 | (arg1 >> 7 & 1) << 4 | (arg1 >> 9 & 1) << 3
        | (arg1 >> 0xa & 1) << 2 | ((arg1 >> 0xb & 1) * 2);
    int32_t rdx_10 = rdx_7 | (arg1 >> 0xc & 1) | rcx | r8;
    return (rdx_10 << 0x16 & 0xc0000000) | (rdx_10 & 0x3f) << 0x18 | rdx_10;
}

uint64_t __acrt_fenv_get_status(int32_t arg1 @ mxcsr) __pure
{
    int32_t rcx_1 = arg1 & 0x3f;
    int32_t rdx_7 = (rcx_1 >> 1 & 1) << 5 | (rcx_1 >> 2 & 1) << 3 | (rcx_1 >> 3 & 1) << 2
        | ((rcx_1 >> 4 & 1) * 2) | (rcx_1 & 1) << 4;
    int32_t rdx_8 = rdx_7 | rcx_1 >> 5;
    return rdx_8 << 0x18 | rdx_8;
}

int64_t __acrt_fenv_set_control(int32_t arg1, int32_t arg2 @ mxcsr) __pure
{
    int16_t rdi = 0x400;
    uint32_t r8_4 = ((arg1 >> 2 & 0xfc00000) | (arg1 & 0xc03fffff)) >> 0x16;
    int32_t rcx = arg1 & 0xc00;
    int16_t r11 = 0x800;
    int16_t r9;
    
    if (rcx == 0x400)
        r9 = -0x7fc0;
    else if (rcx == 0x800)
        r9 = 0x40;
    else if (rcx == 0xc00)
        r9 = -0x8000;
    else
        r9 = 0;
    
    int16_t rbx = 0x100;
    int16_t r10 = 0x200;
    int32_t rax_3 = r8_4 & 0x300;
    int16_t rcx_1;
    
    if (!rax_3)
        rcx_1 = 0;
    else if (rax_3 == 0x100)
        rcx_1 = 0x2000;
    else if (rax_3 == 0x200)
        rcx_1 = 0x4000;
    else if (rax_3 != 0x300)
        rcx_1 = 0;
    else
        rcx_1 = 0x6000;
    
    int16_t rdx;
    
    rdx = !(r8_4 & 1) ? 0 : 0x1000;
    
    if (!(r8_4 >> 1 & 1))
        r11 = 0;
    
    if (!(r8_4 >> 2 & 1))
        rdi = 0;
    
    if (!(r8_4 >> 3 & 1))
        r10 = 0;
    
    int16_t rax_12;
    
    rax_12 = !(r8_4 >> 4 & 1) ? 0 : 0x80;
    
    if (!(r8_4 >> 5 & 1))
        rbx = 0;
    
    int32_t result = (rdx | r11 | rdi | r10 | rax_12 | rbx | rcx_1 | r9) & 0xffc0;
    int32_t arg_8 = (arg2 & 0xffff003f) | result;
    return result;
}

int64_t __acrt_fenv_set_status(int32_t arg1, int32_t arg2 @ mxcsr) __pure
{
    int32_t rdx_1 = arg1 >> 0x18 & 0x3f;
    int32_t r8_5 =
        (rdx_1 & 1) << 5 | (rdx_1 >> 1 & 1) << 4 | (rdx_1 >> 2 & 1) << 3 | (rdx_1 >> 3 & 1) << 2;
    int32_t result =
        (arg2 & 0xffffffc0) | ((r8_5 | (rdx_1 >> 4 & 1) | ((rdx_1 >> 5 & 1) * 2)) & 0x3f);
    int32_t result_1 = result;
    return result;
}

int512_t _call_matherr(int32_t arg1, int64_t arg2, int64_t arg3, int32_t arg4)
{
    int32_t var_38 = arg1;
    int64_t var_20 = arg2;
    int64_t zmm3;
    int64_t var_28 = zmm3;
    int64_t r8;
    int64_t var_30 = r8;
    _ctrlfp(arg4, 0xffc0);
    int32_t rax;
    int512_t result;
    rax = sub_140015aa0(&var_38);
    
    if (!rax)
        _set_errno_from_matherr(arg1);
    
    result = arg3;
    return result;
}

int64_t _exception_enabled(int32_t arg1, int64_t arg2)
{
    int32_t rbx_1 = arg1 & 0x1f;
    char rdi = arg1;
    
    if (arg1 & 8 && arg2 < 0)
    {
        _set_statfp(1);
        rbx_1 &= 0xfffffff7;
    }
    else if (4 & rdi && TEST_BITQ(arg2, 9))
    {
        _set_statfp(4);
        rbx_1 &= 0xfffffffb;
    }
    else if (rdi & 1 && TEST_BITQ(arg2, 0xa))
    {
        _set_statfp(8);
        rbx_1 &= 0xfffffffe;
    }
    else if (rdi & 2 && TEST_BITQ(arg2, 0xb))
    {
        if (rdi & 0x10)
            _set_statfp(0x10);
        
        rbx_1 &= 0xfffffffd;
    }
    
    if (rdi & 0x10 && TEST_BITQ(arg2, 0xc))
    {
        _set_statfp(0x20);
        rbx_1 &= 0xffffffef;
    }
    
    int64_t result;
    result = !rbx_1;
    return result;
}

uint64_t _handle_error(int64_t arg1, int32_t arg2, int64_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int64_t arg7, int32_t arg8)
{
    void var_118;
    int64_t rax_1 = __security_cookie ^ &var_118;
    uint64_t var_d8 = _ctrlfp(0x1f80, 0xffc0);
    uint64_t rdx = var_d8;
    int64_t var_d0 = arg3;
    uint128_t zmm6 = arg7;
    int64_t arg_38;
    
    if (!_exception_enabled(arg5, rdx))
    {
        if (arg8 == 2)
        {
            uint64_t var_88_1 = zmm6;
            int32_t var_78;
            int32_t var_78_1 = (var_78 & 0xffffffe3) | 3;
        }
        
        void var_b8;
        sub_14001e81c(&var_b8, &var_d8, arg5, arg2, &arg_38, &var_d0);
        /* no return */
    }
    
    uint64_t result;
    
    if (!__acrt_has_user_matherr() || !arg4)
    {
        _set_errno_from_matherr(arg4);
        result = _ctrlfp(var_d8, 0xffc0);
        int512_t zmm0_1;
        zmm0_1 = var_d0;
    }
    else
    {
        int512_t zmm3;
        zmm3 = arg_38;
        uint64_t var_e8_1 = var_d8;
        int64_t var_f0_2 = var_d0;
        uint64_t var_f8_2 = zmm6;
        result = _call_matherr(arg4, arg6, arg1, arg4);
    }
    
    __security_check_cookie(rax_1 ^ &var_118);
    return result;
}

uint64_t _handle_errorf(int64_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    void var_118;
    int64_t rax_1 = __security_cookie ^ &var_118;
    uint64_t var_d0 = _ctrlfp(0x1f80, 0xffc0);
    uint64_t rdx = var_d0;
    float var_d8 = arg3[0];
    int128_t zmm6 = arg7;
    int32_t arg_38;
    
    if (!_exception_enabled(arg5, rdx))
    {
        if (arg8 == 2)
        {
            int32_t var_88_1 = zmm6;
            int32_t var_78;
            int32_t var_78_1 = (var_78 & 0xffffffe1) | 1;
        }
        
        void var_b8;
        sub_14001eb54(&var_b8, &var_d0, arg5, arg2, &arg_38, &var_d8);
        /* no return */
    }
    
    uint64_t result;
    
    if (!__acrt_has_user_matherr() || !arg4)
    {
        _set_errno_from_matherr(arg4);
        result = _ctrlfp(var_d0, 0xffc0);
        int512_t zmm0_2;
        zmm0_2 = var_d8;
    }
    else
    {
        float zmm3[0x2] = arg_38;
        uint64_t var_e8_1 = var_d0;
        float zmm0[0x2] = _mm_cvtps_pd(var_d8);
        int64_t temp0_2 = _mm_cvtps_pd(zmm6);
        float var_f0_2[0x2] = zmm0;
        _mm_cvtps_pd(zmm3);
        int64_t var_f8_2 = temp0_2;
        int64_t zmm0_1;
        zmm0_1 = _call_matherr(arg4, arg6, arg1, arg4);
        zmm0_1 = zmm0_1;
    }
    
    __security_check_cookie(rax_1 ^ &var_118);
    return result;
}

int512_t _handle_nan(int64_t arg1) __pure
{
    int512_t result;
    result = arg1 | 0x8000000000000;
    return result;
}

int512_t sub_140025c18(int32_t arg1) __pure
{
    int512_t result;
    result = arg1 | 0x400000;
    return result;
}

uint64_t _towlower_l(int16_t arg1, int128_t* arg2)
{
    int16_t arg_8[0x8];
    arg_8[0] = arg1;
    
    if (arg1 == 0xffff)
        return 0xffff;
    
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg2);
    void* var_20;
    int64_t r10_1 = *(var_20 + 0x138);
    uint16_t rdx;
    
    if (r10_1)
    {
        wchar16 rcx_1 = arg_8[0];
        
        if (rcx_1 >= 0x100)
        {
            uint16_t arg_18;
            int32_t rax_5 = __acrt_LCMapStringW(r10_1, 0x100, &arg_8, 1, &arg_18, 1);
            rdx = arg_8[0];
            
            if (rax_5)
                rdx = arg_18;
        }
        else if (iswctype(rcx_1, 1))
            rdx = *(*(var_20 + 0x110) + arg_8[0]);
        else
            rdx = arg_8[0];
    }
    else
    {
        rdx = arg_8[0];
        
        if (rdx - 0x41 <= 0x19)
            rdx += 0x20;
    }
    
    char var_10;
    
    if (var_10)
    {
        void* rcx_4 = var_28;
        *(rcx_4 + 0x3a8) &= 0xfffffffd;
    }
    
    return rdx;
}

int64_t sub_140025cf0(char* arg1, int64_t arg2, void* arg3, int64_t arg4)
{
    void var_468;
    int64_t result = __security_cookie ^ &var_468;
    int64_t result_1 = result;
    char* r13 = arg1;
    
    if (arg1)
    {
        if (arg3 && arg4)
            goto label_140025d45;
        
        *_errno() = 0x16;
        result = _invalid_parameter_noinfo();
    }
    else if (!arg2 && arg3 && arg4)
    {
    label_140025d45:
        
        if (arg2 >= 2)
        {
            char* r15_3 = (arg2 - 1) * arg3 + arg1;
            int64_t result_2 = 0;
            int64_t result_3 = 0;
            
            while (true)
            {
                int64_t var_438[0x3e];
                int64_t var_248[0x3e];
                
                if (COMBINE(0, r15_3 - r13) / arg3 + 1 > 8)
                {
                    void* rbx_5 = ((COMBINE(0, r15_3 - r13) / arg3 + 1) >> 1) * arg3;
                    char* rdi_2 = rbx_5 + r13;
                    
                    if (arg4(r13, rdi_2) > 0)
                    {
                        void* i_14 = arg3;
                        char* r8 = rdi_2;
                        
                        if (r13 != rdi_2)
                        {
                            void* i;
                            
                            do
                            {
                                char* rdx_6 = r8 - rbx_5;
                                char rcx_3 = *rdx_6;
                                *rdx_6 = *r8;
                                *r8 = rcx_3;
                                r8 = &r8[1];
                                i = i_14;
                                i_14 -= 1;
                            } while (i != 1);
                        }
                    }
                    
                    if (arg4(r13, r15_3) > 0)
                    {
                        void* i_11 = arg3;
                        char* rdx_8 = r15_3;
                        
                        if (r13 != r15_3)
                        {
                            char* r9_1 = r13 - r15_3;
                            void* i_1;
                            
                            do
                            {
                                char rcx_5 = *(r9_1 + rdx_8);
                                *(r9_1 + rdx_8) = *rdx_8;
                                *rdx_8 = rcx_5;
                                rdx_8 = &rdx_8[1];
                                i_1 = i_11;
                                i_11 -= 1;
                            } while (i_1 != 1);
                        }
                    }
                    
                    if (arg4(rdi_2, r15_3) > 0)
                    {
                        void* i_12 = arg3;
                        char* rdx_10 = r15_3;
                        
                        if (rdi_2 != r15_3)
                        {
                            char* r9_3 = rdi_2 - r15_3;
                            void* i_2;
                            
                            do
                            {
                                char rcx_7 = *(r9_3 + rdx_10);
                                *(r9_3 + rdx_10) = *rdx_10;
                                *rdx_10 = rcx_7;
                                rdx_10 = &rdx_10[1];
                                i_2 = i_12;
                                i_12 -= 1;
                            } while (i_2 != 1);
                        }
                    }
                    
                    char* rbx_6 = r13;
                    char* rsi_2 = r15_3;
                    char* rbp_1;
                    
                    while (true)
                    {
                        if (rdi_2 <= rbx_6)
                        {
                        label_140025f4e:
                            int32_t i_3;
                            
                            do
                            {
                                rbx_6 += arg3;
                                
                                if (rbx_6 > r15_3)
                                    break;
                                
                                i_3 = arg4(rbx_6, rdi_2);
                            } while (i_3 <= 0);
                        }
                        else
                        {
                            int32_t i_4;
                            
                            do
                            {
                                rbx_6 += arg3;
                                
                                if (rbx_6 >= rdi_2)
                                    goto label_140025f4e;
                                
                                i_4 = arg4(rbx_6, rdi_2);
                            } while (i_4 <= 0);
                            
                            if (rdi_2 <= rbx_6)
                                goto label_140025f4e;
                        }
                        
                        int32_t i_5;
                        
                        do
                        {
                            rbp_1 = rsi_2;
                            rsi_2 -= arg3;
                            
                            if (rsi_2 <= rdi_2)
                                break;
                            
                            i_5 = arg4(rsi_2, rdi_2);
                        } while (i_5 > 0);
                        
                        if (rsi_2 < rbx_6)
                            break;
                        
                        void* i_13 = arg3;
                        char* rdx_14 = rsi_2;
                        
                        if (rbx_6 != rsi_2)
                        {
                            char* r9_5 = rbx_6 - rsi_2;
                            void* i_6;
                            
                            do
                            {
                                char rcx_11 = *(r9_5 + rdx_14);
                                *(r9_5 + rdx_14) = *rdx_14;
                                *rdx_14 = rcx_11;
                                rdx_14 = &rdx_14[1];
                                i_6 = i_13;
                                i_13 -= 1;
                            } while (i_6 != 1);
                        }
                        
                        char* rax_21 = rbx_6;
                        
                        if (rdi_2 != rsi_2)
                            rax_21 = rdi_2;
                        
                        rdi_2 = rax_21;
                    }
                    
                    if (rdi_2 >= rbp_1)
                    {
                    label_140025ff9:
                        int32_t i_7;
                        
                        do
                        {
                            rbp_1 -= arg3;
                            
                            if (rbp_1 <= r13)
                                break;
                            
                            i_7 = arg4(rbp_1, rdi_2);
                        } while (!i_7);
                    }
                    else
                    {
                        int32_t i_8;
                        
                        do
                        {
                            rbp_1 -= arg3;
                            
                            if (rbp_1 <= rdi_2)
                                goto label_140025ff9;
                            
                            i_8 = arg4(rbp_1, rdi_2);
                        } while (!i_8);
                        
                        if (rdi_2 >= rbp_1)
                            goto label_140025ff9;
                    }
                    
                    result_2 = result_3;
                    
                    if (rbp_1 - r13 < r15_3 - rbx_6)
                    {
                        if (rbx_6 < r15_3)
                        {
                            var_438[result_2] = rbx_6;
                            var_248[result_2] = r15_3;
                            result_2 += 1;
                            result_3 = result_2;
                        }
                        
                        if (r13 < rbp_1)
                        {
                            r15_3 = rbp_1;
                            continue;
                        }
                    }
                    else
                    {
                        if (r13 < rbp_1)
                        {
                            var_438[result_2] = r13;
                            var_248[result_2] = rbp_1;
                            result_2 += 1;
                            result_3 = result_2;
                        }
                        
                        if (rbx_6 < r15_3)
                        {
                            r13 = rbx_6;
                            continue;
                        }
                    }
                }
                else if (r15_3 > r13)
                {
                    char* rsi_1 = arg3 + r13;
                    
                    do
                    {
                        char* rbx_2 = r13;
                        char* rdi_1 = rsi_1;
                        
                        if (rsi_1 <= r15_3)
                        {
                            do
                            {
                                if (arg4(rdi_1, rbx_2) > 0)
                                    rbx_2 = rdi_1;
                                
                                rdi_1 += arg3;
                            } while (rdi_1 <= r15_3);
                        }
                        
                        void* i_10 = arg3;
                        char* rdx_3 = r15_3;
                        
                        if (rbx_2 != r15_3)
                        {
                            char* rbx_3 = rbx_2 - r15_3;
                            void* i_9;
                            
                            do
                            {
                                char rcx_1 = *(rbx_3 + rdx_3);
                                *(rbx_3 + rdx_3) = *rdx_3;
                                *rdx_3 = rcx_1;
                                rdx_3 = &rdx_3[1];
                                i_9 = i_10;
                                i_10 -= 1;
                            } while (i_9 != 1);
                        }
                        
                        r15_3 -= arg3;
                    } while (r15_3 > r13);
                    
                    result_2 = result_3;
                }
                
                result = result_2;
                result_2 -= 1;
                result_3 = result_2;
                
                if (result <= 0)
                    break;
                
                r13 = var_438[result_2];
                r15_3 = var_248[result_2];
            }
        }
    }
    else
    {
        *_errno() = 0x16;
        result = _invalid_parameter_noinfo();
    }
    
    __security_check_cookie(result_1 ^ &var_468);
    return result;
}

char* sub_1400260b0(char* arg1, char* arg2)
{
    void var_58;
    int64_t rax_1 = __security_cookie ^ &var_58;
    uint64_t i = 0;
    char* r9 = arg2;
    bool cond:0 = false;
    char* result = arg1;
    char var_38[0x20];
    
    do
    {
        if (cond:0)
        {
            __report_rangecheckfailure();
            /* no return */
        }
        
        var_38[i] = 0;
        i += 1;
        cond:0 = i >= 0x20;
    } while (i < 0x20);
    
    i = *arg2;
    
    while (i)
    {
        uint64_t rdx_1 = i >> 3;
        r9 = &r9[1];
        var_38[rdx_1] |= 1 << ((i & 7) % 0x20);
        i = *r9;
    }
    
    while (true)
    {
        r9 = *result;
        
        if (!r9)
        {
            __security_check_cookie(rax_1 ^ &var_58);
            return nullptr;
        }
        
        if (var_38[r9 >> 3] & 1 << (r9 & 7))
        {
            __security_check_cookie(rax_1 ^ &var_58);
            return result;
        }
        
        result = &result[1];
    }
}

char* sub_140026150(char* arg1, char* arg2)
{
    uint64_t r11_1 = arg2 & 0xf;
    int128_t* rdi_1 = arg2 - r11_1;
    char* result = arg1;
    uint128_t zmm1 = *rdi_1;
    
    if (r11_1 - 1 <= 0xe)
        switch (r11_1)
        {
            case 1:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 1);
                break;
            }
            case 2:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 2);
                break;
            }
            case 3:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 3);
                break;
            }
            case 4:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 4);
                break;
            }
            case 5:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 5);
                break;
            }
            case 6:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 6);
                break;
            }
            case 7:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 7);
                break;
            }
            case 8:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 8);
                break;
            }
            case 9:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 9);
                break;
            }
            case 0xa:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 0xa);
                break;
            }
            case 0xb:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 0xb);
                break;
            }
            case 0xc:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 0xc);
                break;
            }
            case 0xd:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 0xd);
                break;
            }
            case 0xe:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 0xe);
                break;
            }
            case 0xf:
            {
                zmm1 = _mm_bsrli_si128(zmm1, 0xf);
                break;
            }
        }
    
    uint32_t temp0_17 = _mm_movemask_epi8(_mm_cmpeq_epi8({0}, zmm1));
    
    if (temp0_17)
    {
        uint64_t rflags_1;
        int32_t temp0_18;
        temp0_18 = _bit_scan_forward(temp0_17);
        int32_t r10_1;
        
        if (r11_1)
            r10_1 = temp0_18 < 0x10 - r11_1;
        else
            r10_1 = 1;
        
        uint64_t rax_5 = 0xf - temp0_18;
        
        if (rax_5 <= 0xf)
            switch (rax_5)
            {
                case 0:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 1), 1);
                    break;
                }
                case 1:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 2), 2);
                    break;
                }
                case 2:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 3), 3);
                    break;
                }
                case 3:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 4), 4);
                    break;
                }
                case 4:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 5), 5);
                    break;
                }
                case 5:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 6), 6);
                    break;
                }
                case 6:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 7), 7);
                    break;
                }
                case 7:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 8), 8);
                    break;
                }
                case 8:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 9), 9);
                    break;
                }
                case 9:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 0xa), 0xa);
                    break;
                }
                case 0xa:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 0xb), 0xb);
                    break;
                }
                case 0xb:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 0xc), 0xc);
                    break;
                }
                case 0xc:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 0xd), 0xd);
                    break;
                }
                case 0xd:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 0xe), 0xe);
                    break;
                }
                case 0xe:
                {
                    zmm1 = _mm_bsrli_si128(_mm_slli_si128(zmm1, 0xf), 0xf);
                    break;
                }
                case 0xf:
                {
                    zmm1 = {0};
                    break;
                }
            }
        
        if (!r10_1)
            goto label_14002631e;
    }
    else if (r11_1)
    {
    label_14002631e:
        char zmm2[0x10] = rdi_1[1];
        uint32_t temp0_50 = _mm_movemask_epi8(_mm_cmpeq_epi8(zmm2, {0}));
        int32_t temp0_51;
        uint64_t rflags_2;
        
        if (temp0_50)
            temp0_51 = _bit_scan_forward(temp0_50);
        
        if (!temp0_50 || temp0_51 - r11_1 + 0x10 > 0x10)
            /* tailcall */
            return sub_1400260b0(result, arg2);
        
        uint64_t rdx_4 = 0xf - temp0_51;
        
        if (rdx_4 <= 0xf)
            switch (rdx_4)
            {
                case 0:
                {
                    zmm2 = _mm_slli_si128(zmm2, 1);
                    break;
                }
                case 1:
                {
                    zmm2 = _mm_slli_si128(zmm2, 2);
                    break;
                }
                case 2:
                {
                    zmm2 = _mm_slli_si128(zmm2, 3);
                    break;
                }
                case 3:
                {
                    zmm2 = _mm_slli_si128(zmm2, 4);
                    break;
                }
                case 4:
                {
                    zmm2 = _mm_slli_si128(zmm2, 5);
                    break;
                }
                case 5:
                {
                    zmm2 = _mm_slli_si128(zmm2, 6);
                    break;
                }
                case 6:
                {
                    zmm2 = _mm_slli_si128(zmm2, 7);
                    break;
                }
                case 7:
                {
                    zmm2 = _mm_slli_si128(zmm2, 8);
                    break;
                }
                case 8:
                {
                    zmm2 = _mm_slli_si128(zmm2, 9);
                    break;
                }
                case 9:
                {
                    zmm2 = _mm_slli_si128(zmm2, 0xa);
                    break;
                }
                case 0xa:
                {
                    zmm2 = _mm_slli_si128(zmm2, 0xb);
                    break;
                }
                case 0xb:
                {
                    zmm2 = _mm_slli_si128(zmm2, 0xc);
                    break;
                }
                case 0xc:
                {
                    zmm2 = _mm_slli_si128(zmm2, 0xd);
                    break;
                }
                case 0xd:
                {
                    zmm2 = _mm_slli_si128(zmm2, 0xe);
                    break;
                }
                case 0xe:
                {
                    zmm2 = _mm_slli_si128(zmm2, 0xf);
                    break;
                }
                case 0xf:
                {
                    zmm2 = {0};
                    break;
                }
            }
        
        zmm1 |= zmm2;
    }
    else if (*(rdi_1 + 1) != r11_1)
        /* tailcall */
        return sub_1400260b0(arg1, arg2);
    
    char i = *result;
    
    while (i)
    {
        char zmm0[0x10] = i;
        zmm0 = _mm_unpacklo_epi8(zmm0, zmm0[0]);
        
        if (_mm_movemask_epi8(_mm_cmpeq_epi8(
                _mm_shuffle_epi32(_mm_unpacklo_epi8(zmm0, zmm0[0]), 0), zmm1)))
            return result;
        
        i = result[1];
        result = &result[1];
    }
    
    return 0;
}

int64_t _mbsdec(int64_t arg1, void* arg2)
{
    /* tailcall */
    return _mbsdec_l(arg1, arg2, nullptr);
}

char* _mbsdec_l(int64_t arg1, void* arg2, int128_t* arg3)
{
    if (!arg1 || !arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    else if (arg1 < arg2)
    {
        void* var_28;
        _LocaleUpdate::_LocaleUpdate(&var_28, arg3);
        char* result = arg2 - 1;
        void* var_18;
        
        if (*(var_18 + 8))
        {
            do
            {
                result -= 1;
                
                if (arg1 > result)
                    break;
            } while (*(*result + var_18 + 0x19) & 4);
            
            result = arg2 - ((arg2 - result) & 1) - 1;
        }
        
        char var_10;
        
        if (var_10)
        {
            void* rcx_5 = var_28;
            *(rcx_5 + 0x3a8) &= 0xfffffffd;
        }
        
        return result;
    }
    
    return nullptr;
}

uint64_t initialize_multibyte()
{
    int32_t rcx;
    rcx = !__acrt_initialize_multibyte();
    return rcx;
}

int64_t sub_1400265e4(char* arg1, char* arg2, int64_t arg3)
{
    if (!data_140043088)
        /* tailcall */
        return _strnicmp(arg1, arg2, arg3);
    
    /* tailcall */
    return _strnicoll_l(arg1, arg2, arg3, nullptr);
}

uint64_t _strnicoll_l(char* arg1, char* arg2, int64_t arg3, int128_t* arg4)
{
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg4);
    int32_t rbx;
    
    if (!arg3)
        rbx = 0;
    else if (!arg1 || !arg2)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        rbx = 0x7fffffff;
    }
    else
    {
        rbx = 0x7fffffff;
        
        if (arg3 <= 0x7fffffff)
        {
            void* var_20;
            void* rax_3 = var_20;
            int64_t rdx_1 = *(rax_3 + 0x130);
            
            if (rdx_1)
            {
                int32_t rax_6 = __acrt_CompareStringA(&var_20, rdx_1, 0x1001, arg1, arg3, arg2, 
                    arg3, *(rax_3 + 0x14));
                
                if (rax_6)
                    rbx = rax_6 - 2;
                else
                    *_errno() = 0x16;
            }
            else
                rbx = _strnicmp_l(arg1, arg2, arg3, &var_20);
        }
        else
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
        }
    }
    
    char var_10;
    
    if (var_10)
    {
        void* rax_8 = var_28;
        *(rax_8 + 0x3a8) &= 0xfffffffd;
    }
    
    return rbx;
}

uint64_t __acrt_SetEnvironmentVariableA(char* arg1, char* arg2)
{
    int64_t var_48;
    __builtin_memset(&var_48, 0, 0x29);
    PWSTR lpValue = nullptr;
    int64_t var_78;
    __builtin_memset(&var_78, 0, 0x29);
    void* var_98;
    _LocaleUpdate::_LocaleUpdate(&var_98, nullptr);
    uint32_t rbx = 0xfde9;
    void* var_90;
    char var_80;
    uint32_t r8;
    
    if (*(var_90 + 0xc) != 0xfde9)
    {
        if (sub_1400191b0())
        {
            if (var_80)
            {
                void* rax_4 = var_98;
                *(rax_4 + 0x3a8) &= 0xfffffffd;
            }
            
            r8 = 0;
        }
        else
        {
            if (var_80)
            {
                void* rax_3 = var_98;
                *(rax_3 + 0x3a8) &= 0xfffffffd;
            }
            
            r8 = 1;
        }
    }
    else
    {
        if (var_80)
        {
            void* rax_1 = var_98;
            *(rax_1 + 0x3a8) &= 0xfffffffd;
        }
        
        r8 = 0xfde9;
    }
    
    int32_t rax_5 = __acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(arg1, 
        &var_48, r8);
    int32_t rax_11;
    
    if (!rax_5)
    {
        _LocaleUpdate::_LocaleUpdate(&var_98, nullptr);
        
        if (*(var_90 + 0xc) != 0xfde9)
        {
            if (sub_1400191b0())
            {
                if (var_80)
                {
                    void* rax_10 = var_98;
                    *(rax_10 + 0x3a8) &= 0xfffffffd;
                }
                
                rbx = 0;
            }
            else
            {
                if (var_80)
                {
                    void* rax_9 = var_98;
                    *(rax_9 + 0x3a8) &= 0xfffffffd;
                }
                
                rbx = 1;
            }
        }
        else if (var_80)
        {
            void* rax_7 = var_98;
            *(rax_7 + 0x3a8) &= 0xfffffffd;
        }
        
        rax_11 = __acrt_mbs_to_wcs_cp<struct __crt_win32_buffer_internal_dynamic_resizing>(arg2, 
            &var_78, rbx);
        PWSTR lpValue_1;
        lpValue = lpValue_1;
    }
    
    PWSTR lpName;
    BOOL rbx_1;
    
    if (rax_5 || rax_11)
        rbx_1 = 0;
    else
        rbx_1 = SetEnvironmentVariableW(lpName, lpValue);
    
    char var_50;
    
    if (var_50)
        _free_base(lpValue);
    
    char var_20;
    
    if (var_20)
        _free_base(lpName);
    
    return rbx_1;
}

int64_t common_xtox<unsigned long,wchar_t>(int32_t arg1, int16_t* arg2, int64_t arg3, int32_t arg4, char arg5)
{
    int16_t* r10 = arg2;
    int64_t rbx = 0;
    
    if (arg5)
    {
        arg1 = -(arg1);
        *arg2 = 0x2d;
        rbx = 1;
        r10 = &arg2[1];
    }
    
    int16_t* r8 = r10;
    int16_t* rsi_1;
    int16_t* r9;
    
    do
    {
        rsi_1 = &r10[1];
        r9 = r10;
        uint32_t temp1_1 = COMBINE(0, arg1) % arg4;
        arg1 = COMBINE(0, arg1) / arg4;
        int16_t rax_3 = 0x57;
        
        if (temp1_1 <= 9)
            rax_3 = 0x30;
        
        rbx += 1;
        *r10 = rax_3 + temp1_1;
        
        if (!arg1)
            break;
        
        r10 = rsi_1;
    } while (rbx < arg3);
    
    if (rbx >= arg3)
    {
        *arg2 = 0;
        *_errno() = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
    }
    
    *rsi_1 = 0;
    
    do
    {
        int16_t rcx = *r9;
        *r9 = *r8;
        r9 -= 2;
        *r8 = rcx;
        r8 = &r8[1];
    } while (r8 < r9);
    
    return 0;
}

uint64_t common_xtox_s<unsigned long,wchar_t>(int32_t arg1, int16_t* arg2, int64_t arg3, int32_t arg4, char arg5)
{
    int32_t* rax_1;
    int32_t rbx;
    
    if (arg2 && arg3)
    {
        uint64_t rcx = arg5;
        *arg2 = 0;
        
        if (arg3 > rcx + 1)
        {
            if (arg4 - 2 <= 0x22)
                /* tailcall */
                return common_xtox<unsigned long,wchar_t>(arg1, arg2, arg3, arg4, rcx);
            
            rax_1 = _errno();
            rbx = 0x16;
        }
        else
        {
            rax_1 = _errno();
            rbx = 0x22;
        }
    }
    else
    {
        rax_1 = _errno();
        rbx = 0x16;
    }
    
    *rax_1 = rbx;
    _invalid_parameter_noinfo();
    return rbx;
}

uint64_t sub_1400269d4(int32_t arg1, int16_t* arg2, int64_t arg3, int32_t arg4)
{
    char rax = 0;
    
    if (arg4 == 0xa && arg1 < 0)
        rax = 1;
    
    return common_xtox_s<unsigned long,wchar_t>(arg1, arg2, arg3, arg4, rax);
}

uint64_t _wcsnicmp(int16_t* arg1, int16_t* arg2, int64_t arg3)
{
    uint32_t r9 = 0;
    int64_t r10 = arg3;
    
    if (data_140043088)
        /* tailcall */
        return _wcsnicmp_l(arg1, arg2, arg3, nullptr);
    
    if (arg3)
    {
        if (!arg1 || !arg2)
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0x7fffffff;
        }
        
        int16_t* rcx = arg1 - arg2;
        int16_t r8;
        int16_t r11_1;
        
        do
        {
            r8 = *(rcx + arg2) + 0x20;
            
            if (*(rcx + arg2) - 0x41 > 0x19)
                r8 = *(rcx + arg2);
            
            r11_1 = *arg2 + 0x20;
            
            if (*arg2 - 0x41 > 0x19)
                r11_1 = *arg2;
            
            arg2 = &arg2[1];
            int64_t temp0_1 = r10;
            r10 -= 1;
            
            if (temp0_1 == 1)
                break;
            
            if (!r8)
                break;
        } while (r8 == r11_1);
        
        r9 = r8 - r11_1;
    }
    
    return r9;
}

uint64_t _wcsnicmp_l(int16_t* arg1, int16_t* arg2, int64_t arg3, int128_t* arg4)
{
    int64_t rbp = arg3;
    int16_t* rsi = arg2;
    int16_t* rdi = arg1;
    uint64_t result = 0;
    
    if (arg3)
    {
        if (!arg1 || !rsi)
        {
            *_errno() = 0x16;
            _invalid_parameter_noinfo();
            return 0x7fffffff;
        }
        
        void* var_28;
        _LocaleUpdate::_LocaleUpdate(&var_28, arg4);
        void* var_20;
        int16_t rcx_1;
        int16_t rbx_1;
        
        if (*(var_20 + 0x138))
        {
            int16_t rax_5;
            
            do
            {
                rbx_1 = _towlower_l(*rdi, &var_20);
                rax_5 = _towlower_l(*rsi, &var_20);
                rdi = &rdi[1];
                rcx_1 = rax_5;
                rsi = &rsi[1];
                int64_t temp0_1 = rbp;
                rbp -= 1;
                
                if (temp0_1 == 1)
                    break;
                
                if (!rbx_1)
                    break;
            } while (rbx_1 == rax_5);
        }
        else
        {
            int16_t* rdi_1 = rdi - rsi;
            
            do
            {
                rbx_1 = *(rdi_1 + rsi) + 0x20;
                
                if (*(rdi_1 + rsi) - 0x41 > 0x19)
                    rbx_1 = *(rdi_1 + rsi);
                
                rcx_1 = *rsi + 0x20;
                
                if (*rsi - 0x41 > 0x19)
                    rcx_1 = *rsi;
                
                rsi = &rsi[1];
                int64_t temp1_1 = rbp;
                rbp -= 1;
                
                if (temp1_1 == 1)
                    break;
                
                if (!rbx_1)
                    break;
            } while (rbx_1 == rcx_1);
        }
        
        result = rbx_1 - rcx_1;
        char var_10;
        
        if (var_10)
        {
            void* rcx_5 = var_28;
            *(rcx_5 + 0x3a8) &= 0xfffffffd;
        }
    }
    
    return result;
}

uint64_t wcscmp(int16_t* arg1, int16_t* arg2)
{
    uint32_t rax = *arg2;
    uint32_t r8 = *arg1;
    uint32_t r8_1 = r8 - rax;
    
    if (r8 == rax)
    {
        void* rcx = arg1 - arg2;
        
        while (rax)
        {
            arg2 = &arg2[1];
            rax = *arg2;
            uint32_t r8_2 = *(rcx + arg2);
            r8_1 = r8_2 - rax;
            
            if (r8_2 != rax)
                break;
        }
    }
    
    return (-(r8_1) >> 0x1f) - (r8_1 >> 0x1f);
}

int64_t sub_140026c00(int64_t arg1)
{
    if (arg1)
        /* tailcall */
        return HeapSize(data_1400437e8, HEAP_NONE, arg1);
    
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    return -1;
}

int64_t __crt_mbstring::__mbrtoc32_utf8(uint64_t arg1, char* arg2, uint64_t arg3, int64_t* arg4, int64_t arg5 @ rsi)
{
    int64_t var_10 = arg5;
    void var_68;
    int64_t rax_1 = __security_cookie ^ &var_68;
    int64_t* r10 = &data_1400437f0;
    char* rdi = &data_140039984;
    
    if (arg4)
        r10 = arg4;
    
    if (arg2)
        rdi = arg2;
    
    uint64_t i_1 = 1;
    
    if (arg2)
        i_1 = arg3;
    
    uint32_t* rsi_1 = (arg5 - arg5) & arg1;
    int64_t result;
    
    if (i_1)
    {
        int16_t r9 = *(r10 + 6);
        uint32_t rdx_2;
        
        if (r9)
        {
            arg3 = *(r10 + 4);
            rdx_2 = *r10;
            
            if (arg3 - 2 <= 2 && r9 >= 1 && r9 < arg3)
                goto label_140026d3a;
            
        label_140026de5:
            *r10 = 0;
            *_errno() = 0x2a;
            result = -1;
        }
        else
        {
            int64_t rbx;
            rbx = *rdi;
            rdi = &rdi[1];
            
            if (rbx < 0)
            {
                if ((rbx & 0xe0) == 0xc0)
                    arg3 = 2;
                else if ((rbx & 0xf0) != 0xe0)
                {
                    if ((rbx & 0xf8) != 0xf0)
                        goto label_140026de5;
                    
                    arg3 = 4;
                }
                else
                    arg3 = 3;
                
                r9 = arg3;
                rdx_2 = ((1 << (7 - arg3)) - 1) & rbx;
            label_140026d3a:
                uint64_t rbp_1 = r9;
                uint64_t i = rbp_1;
                
                if (rbp_1 >= i_1)
                    i = i_1;
                
                while (rdi - arg2 < i)
                {
                    arg1 = *rdi;
                    rdi = &rdi[1];
                    void* rax_7;
                    rax_7 = arg1;
                    rax_7 &= 0xc0;
                    
                    if (rax_7 != 0x80)
                        goto label_140026de5;
                    
                    rdx_2 = (arg1 & 0x3f) | rdx_2 << 6;
                }
                
                if (i >= rbp_1)
                {
                    if (rdx_2 - 0xd800 <= 0x7ff || rdx_2 >= 0x110000)
                        goto label_140026de5;
                    
                    int32_t var_48_1 = 0x80;
                    int32_t var_44_1 = 0x800;
                    int32_t var_40_1 = 0x10000;
                    int32_t var_50[0x2];
                    
                    if (rdx_2 < var_50[arg3])
                        goto label_140026de5;
                    
                    if (rsi_1)
                        *rsi_1 = rdx_2;
                    
                    *r10 = 0;
                    result = (0 - 0) & rbp_1;
                }
                else
                {
                    r9 -= i;
                    *(r10 + 4) = arg3;
                    *(r10 + 6) = r9;
                    *r10 = rdx_2;
                    result = -2;
                }
            }
            else
            {
                if (rsi_1)
                    *rsi_1 = rbx;
                
                int64_t result_1;
                result_1 = rbx;
                result = result_1;
            }
        }
    }
    else
        result = -2;
    
    __security_check_cookie(rax_1 ^ &var_68);
    return result;
}

int64_t fegetenv(int32_t* arg1)
{
    int32_t mxcsr;
    *arg1 = __acrt_fenv_get_control(mxcsr);
    arg1[1] = __acrt_fenv_get_status(mxcsr);
    return 0;
}

int64_t fesetenv(int32_t* arg1)
{
    int64_t arg_8 = 0;
    fegetenv(&arg_8);
    
    if (*arg1 == arg_8 && arg1[1] == *(&arg_8 + 4))
        return 0;
    
    return 1;
}

int64_t feholdexcept(int64_t* arg1)
{
    int32_t arg_10 = 0;
    int32_t arg_14 = 0;
    fegetenv(&arg_10);
    int64_t rax_1 = arg_10;
    arg_10 |= 0x1f;
    *arg1 = rax_1;
    
    if (fesetenv(&arg_10))
        return 1;
    
    _clearfp();
    return 0;
}

double sub_140026ed8(double arg1)
{
    double result = arg1 & 0x7fffffffffffffff;
    int64_t r8;
    r8 = arg1 != result;
    
    if (result < 0x4340000000000000)
    {
        if (result >= 0x3ff0000000000000)
            result = ~((1 << (0x33 - (arg1 >> 0x34))) - 1) & arg1;
        else if (result && r8)
            result = -0.0;
    }
    else if (result > 0x7ff0000000000000)
        /* tailcall */
        return _handle_nan(arg1);
    
    return result;
}

double sub_140026fa0(double arg1[0x2] @ zmm0, double arg2[0x2] @ zmm6)
{
    double var_38[0x2] = arg2;
    
    if (data_1400436e4)
    {
        uint64_t temp0_9[0x2] = __vpsrlq_xmmdq_xmmdq_immb(arg1, 0x34);
        double rax_4 = arg1[0];
        __vcvtdq2pd_xmmdq_xmmq(__vpsubq_xmmdq_xmmdq_memdq(temp0_9, data_140039a00)[0]);
        __vcomisd_xmmq_memq((arg1 & data_1400399d0)[0], inf.0);
        
        if (rax_4 == 0x7ff0000000000000)
            return rax_4;
        
        if (rax_4 != -0x10000000000000)
            return _log10_special(arg1[0], rax_4 | 0x8000000000000, 3);
        
        uint128_t temp0_33 = __vmovsd_xmmdq_memq(-nan.0);
        int64_t rax_8;
        int512_t zmm6_1;
        rax_8 = _log10_special(arg1[0], temp0_33, 2);
        zmm6_1 = var_38;
        return rax_8;
    }
    
    uint64_t zmm4[0x2] = arg1;
    uint64_t temp0[0x2] = _mm_srli_epi64(arg1, 0x34);
    double rax = arg1[0];
    uint64_t zmm3[0x2] = __psubq_xmmdq_memdq(temp0, data_140039a00);
    uint64_t temp0_2[0x2] = __andpd_xmmxuq_memxuq(arg1, data_1400399d0);
    
    if (temp0_2[0] == inf.0)
    {
        if (rax == 0x7ff0000000000000)
            return rax;
        
        if (rax != -0x10000000000000)
            return rax | 0x8000000000000;
    }
    else
    {
        arg2 = _mm_cvtepi32_pd(zmm3[0]);
        uint64_t temp0_4[0x2] = _mm_xor_pd(temp0_2, temp0_2);
        arg1[0] - temp0_4[0];
        
        if (!(arg1[0] <= temp0_4[0]))
        {
            uint128_t zmm2 = arg1 & data_140039a20;
            zmm4[0] = zmm4[0] - 1.0;
            
            if (arg2[0] == -1023.0)
            {
                zmm2 = (zmm2 | data_140039ab0) - 1.0;
                temp0_4[0] = zmm2;
                zmm2 &= data_140039a20;
                rax = zmm2;
                arg2 = _mm_cvtepi32_pd(__psubd_xmmdq_memdq(_mm_srli_epi64(temp0_4, 0x34), 
                    data_140039b50)[0]);
            }
            
            int64_t rax_2 = (rax & 0xff00000000000) + ((rax & 0x80000000000) << 1);
            uint128_t zmm1;
            uint64_t zmm5[0x2];
            
            if (!(__andpd_xmmxuq_memxuq(zmm4, data_140039ba0)[0] < 0.0625))
            {
                uint64_t rax_3 = rax_2 >> 0x2c;
                zmm1 = (rax_2 | data_140039ac0) - (zmm2 | data_140039ac0);
                zmm1 = zmm1 * *(&data_140034e50 + (rax_3 << 3));
                zmm2 = zmm1;
                arg1 = zmm1;
                zmm3 = 0x3fc5555555555555;
                zmm3[0] = zmm3[0] * zmm2;
                zmm1 = 0x3fd5555555555555 * zmm2;
                arg1[0] = arg1[0] * zmm2;
                zmm4 = arg1;
                zmm3[0] = zmm3[0] + 0.20000000000000001;
                zmm1 = zmm1 + 0.5;
                zmm4[0] = zmm4[0] * arg1[0];
                zmm3[0] = zmm3[0] * zmm2;
                zmm1 = zmm1 * arg1[0];
                zmm3[0] = zmm3[0] + 0.25;
                zmm1 = zmm1 + zmm2;
                zmm3[0] = zmm3[0] * zmm4[0];
                zmm1 = zmm1 + zmm3[0];
                zmm5 = 0x3e03ef3fde623e25;
                zmm1 = zmm1 * 0.43429448190325182;
                zmm5[0] = zmm5[0] * arg2[0];
                zmm5[0] = zmm5[0] - zmm1;
                arg1 = *(&data_140039c20 + (rax_3 << 3));
                zmm2 = *(&data_14003a430 + (rax_3 << 3));
                zmm4 = 0x3fd3441350000000;
                zmm4[0] = zmm4[0] * arg2[0];
                arg1[0] = arg1[0] + zmm4[0];
                zmm2 = zmm2 + zmm5[0];
                arg1[0] = arg1[0] + zmm2;
                return rax_3;
            }
            
            arg1[0] = arg1[0] - 1.0;
            zmm2 = 0x4000000000000000 + arg1[0];
            zmm1 = arg1 / zmm2;
            zmm4 = 0x3f89999999bac6d4;
            zmm5 = 0x3f3c8034c85dfff0;
            arg1[0] = arg1[0] * zmm1;
            zmm1 = zmm1 + zmm1;
            zmm2 = zmm1 * zmm1;
            zmm4[0] = zmm4[0] * zmm2;
            zmm5[0] = zmm5[0] * zmm2;
            zmm4[0] = zmm4[0] + 0.083333333333331788;
            zmm5[0] = zmm5[0] + 0.0022321399879194482;
            zmm2 = zmm2 * zmm1;
            zmm4[0] = zmm4[0] * zmm2;
            zmm2 = zmm2 * zmm2;
            zmm2 = zmm2 * zmm1;
            zmm5[0] = zmm5[0] * zmm2;
            zmm2 = 0x3ea8a93728719535;
            zmm4[0] = zmm4[0] + zmm5[0];
            zmm4[0] = zmm4[0] - arg1[0];
            arg2 = 0x3fdbcb7800000000;
            zmm3 = arg1 & data_140039bf0;
            arg1[0] = arg1[0] - zmm3[0];
            zmm4[0] = zmm4[0] + arg1[0];
            arg1 = zmm3;
            zmm4[0] = zmm4[0] * zmm2;
            arg1[0] = arg1[0] * zmm2;
            zmm1 = zmm4 * arg2[0];
            zmm3[0] = zmm3[0] * arg2[0];
            arg1[0] = arg1[0] + zmm4[0];
            arg1[0] = arg1[0] + zmm1;
            arg1[0] = arg1[0] + zmm3[0];
            return rax_2;
        }
        
        if (!(arg1[0] != temp0_4[0]))
            return _log10_special(arg1[0], -0x10000000000000, 1);
    }
    
    return _log10_special(arg1[0], -0x8000000000000, 2);
}

uint64_t __dcrt_lowio_ensure_console_output_initialized()
{
    HANDLE rax = data_1400418f0;
    
    if (rax == -2)
    {
        rax = CreateFileW(u"CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
            OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr);
        data_1400418f0 = rax;
    }
    
    int32_t rbx;
    rbx = rax != -1;
    return rbx;
}

void sub_1400275a0()
{
    HANDLE hObject = data_1400418f0;
    
    if (hObject <= -3)
        CloseHandle(hObject);
}

uint64_t sub_1400275bc(void* arg1, uint32_t arg2, uint32_t* arg3)
{
    BOOL rax = WriteConsoleW(data_1400418f0, arg1, arg2, arg3, nullptr);
    BOOL rbx = rax;
    
    if (!rax && GetLastError() == ERROR_INVALID_HANDLE)
    {
        HANDLE hObject = data_1400418f0;
        
        if (hObject <= -3)
            CloseHandle(hObject);
        
        HANDLE hConsoleOutput = CreateFileW(u"CONOUT$", 0x40000000, 
            FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, SECURITY_ANONYMOUS, 
            nullptr);
        data_1400418f0 = hConsoleOutput;
        rbx = WriteConsoleW(hConsoleOutput, arg1, arg2, arg3, nullptr);
    }
    
    return rbx;
}

void* __crt_mbstring::__c16rtomb_utf8(char* arg1, int16_t arg2, int32_t* arg3)
{
    int32_t* rbx = &data_1400437f8;
    
    if (arg3)
        rbx = arg3;
    
    if (*rbx)
    {
        if (0x2400 + arg2 <= 0x3ff)
        {
            uint32_t rdx_4 = (arg2 & 0xffff23ff) + *rbx;
            int64_t arg_18 = 0;
            void* result = j___crt_mbstring::__c32rtomb_utf8(arg1, rdx_4, &arg_18);
            *rbx = 0;
            return result;
        }
    }
    else if (0x2400 + arg2 > 0x3ff)
    {
        if (0x2800 + arg2 > 0x3ff)
            /* tailcall */
            return j___crt_mbstring::__c32rtomb_utf8(arg1, arg2, rbx);
        
        *rbx = (arg2 << 0xa & 0xfc9ffc00) + 0x10000;
        return nullptr;
    }
    
    *rbx = 0;
    *_errno() = 0x2a;
    return -ffffffffffffffff;
}

int64_t __acrt_LCMapStringW(int64_t arg1, uint32_t arg2, int16_t* arg3, int32_t arg4, PWSTR arg5, int32_t arg6)
{
    int64_t rbx = arg4;
    
    if (arg4 > 0)
    {
        int64_t r11;
        int32_t rax_1 = wcsnlen(arg3, rbx, r11);
        bool cond:0_1 = rax_1 < rbx;
        rbx = rax_1 + 1;
        
        if (!cond:0_1)
            rbx = rax_1;
    }
    
    return sub_1400196a0(arg1, arg2, arg3, rbx, arg5, arg6, 0, 0, 0);
}

uint64_t __ascii_strnicmp(char* arg1, char* arg2, int64_t arg3)
{
    int64_t r10 = arg3;
    char* r11 = arg2;
    char* rbx = arg1;
    
    if (!arg3)
        return 0;
    
    uint32_t rdx;
    uint32_t r8;
    
    do
    {
        uint32_t r9_1 = *rbx;
        rbx = &rbx[1];
        uint32_t rcx = *r11;
        rdx = r9_1 + 0x20;
        
        if (r9_1 - 0x41 > 0x19)
            rdx = r9_1;
        
        r8 = rcx + 0x20;
        r11 = &r11[1];
        
        if (rcx - 0x41 > 0x19)
            r8 = rcx;
        
        int64_t temp0_1 = r10;
        r10 -= 1;
        
        if (temp0_1 == 1)
            break;
        
        if (!rdx)
            break;
    } while (rdx == r8);
    
    return rdx - r8;
}

int64_t _strnicmp(char* arg1, char* arg2, int64_t arg3)
{
    if (data_140043088)
        /* tailcall */
        return _strnicmp_l(arg1, arg2, arg3, nullptr);
    
    if (arg1 && arg2 && arg3 <= 0x7fffffff)
        /* tailcall */
        return __ascii_strnicmp(arg1, arg2, arg3);
    
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    return 0x7fffffff;
}

uint64_t _strnicmp_l(char* arg1, char* arg2, int64_t arg3, int128_t* arg4)
{
    int64_t rbp = arg3;
    char* rdi = arg2;
    
    if (!arg3)
        return 0;
    
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg4);
    int32_t rbx_1 = 0x7fffffff;
    void* var_20;
    
    if (!arg1 || !rdi || rbp > 0x7fffffff)
    {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
    }
    else if (*(var_20 + 0x138))
    {
        void* rsi_1 = arg1 - rdi;
        int32_t rax_3;
        int32_t rax_4;
        
        do
        {
            rax_3 = _tolower_l(*(rsi_1 + rdi), &var_20);
            rax_4 = _tolower_l(*rdi, &var_20);
            rdi = &rdi[1];
            int64_t temp0_1 = rbp;
            rbp -= 1;
            
            if (temp0_1 == 1)
                break;
            
            if (!rax_3)
                break;
        } while (rax_3 == rax_4);
        
        rbx_1 = rax_3 - rax_4;
    }
    else
        rbx_1 = __ascii_strnicmp(arg1, rdi, rbp);
    char var_10;
    
    if (var_10)
    {
        void* rax_5 = var_28;
        *(rax_5 + 0x3a8) &= 0xfffffffd;
    }
    
    return rbx_1;
}

uint64_t InternalCompareStringA(int64_t* arg1, int64_t arg2, int32_t arg3, char* arg4, int32_t arg5, uint8_t* arg6, int32_t arg7, uint32_t arg8)
{
    int64_t __saved_rbp_1;
    int64_t __saved_rbp = __saved_rbp_1;
    int64_t __saved_rbx_1;
    int64_t __saved_rbx = __saved_rbx_1;
    int64_t __saved_rsi_1;
    int64_t __saved_rsi = __saved_rsi_1;
    int64_t __saved_rdi_1;
    int64_t __saved_rdi = __saved_rdi_1;
    int64_t __saved_r12_1;
    int64_t __saved_r12 = __saved_r12_1;
    int64_t __saved_r13_1;
    int64_t __saved_r13 = __saved_r13_1;
    int64_t __saved_r14_1;
    int64_t __saved_r14 = __saved_r14_1;
    int64_t __saved_r15_1;
    int64_t __saved_r15 = __saved_r15_1;
    void var_c8;
    void* rsp_1 = &var_c8;
    int32_t var_78;
    int64_t rax_1 = __security_cookie ^ &var_78;
    int64_t rbx = arg5;
    uint8_t* r15 = arg4;
    var_78 = arg3;
    uint64_t result;
    
    if (rbx <= 0)
    {
        if (rbx >= 0xffffffff)
            goto label_140027997;
        
        result = 0;
    }
    else
    {
        rbx = __strncnt(arg4, rbx);
    label_140027997:
        int64_t rsi = arg7;
        
        if (rsi <= 0)
        {
            if (rsi >= 0xffffffff)
                goto label_1400279bb;
            
            result = 0;
        }
        else
        {
            rsi = __strncnt(arg6, rsi);
        label_1400279bb:
            uint32_t CodePage = arg8;
            
            if (!CodePage)
                CodePage = *(*arg1 + 0xc);
            
            if (rbx && rsi)
            {
            label_140027a80:
                int32_t var_a0_1 = 0;
                int64_t var_a8_1 = 0;
                int32_t rax_8 = __acrt_MultiByteToWideChar(CodePage, 
                    MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, r15, rbx);
                int64_t r12 = rax_8;
                
                if (!rax_8)
                    result = 0;
                else
                {
                    int64_t rcx_6 = r12 * 2;
                    uint64_t rcx_8 = (rcx_6 - rcx_6) & (rcx_6 + 0x10);
                    int32_t result_1;
                    int32_t* rdi_1;
                    
                    if (!rcx_8)
                    {
                        rdi_1 = nullptr;
                    label_140027b19:
                        
                        if (!rdi_1)
                            result_1 = 0;
                        else
                        {
                            *(rsp_1 + 0x28) = r12;
                            *(rsp_1 + 0x20) = rdi_1;
                            
                            if (!__acrt_MultiByteToWideChar(CodePage, MB_PRECOMPOSED, r15, rbx))
                                result_1 = 0;
                            else
                            {
                                *(rsp_1 + 0x28) = 0;
                                *(rsp_1 + 0x20) = 0;
                                int32_t rax_13 = __acrt_MultiByteToWideChar(CodePage, 
                                    MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg6, rsi);
                                int64_t r15_1 = rax_13;
                                
                                if (!rax_13)
                                    result_1 = 0;
                                else
                                {
                                    int64_t rdx_5 = r15_1 * 2;
                                    uint64_t rdx_7 = (rdx_5 - rdx_5) & (rdx_5 + 0x10);
                                    int32_t* rbx_1;
                                    
                                    if (!rdx_7)
                                    {
                                        rbx_1 = nullptr;
                                    label_140027bdd:
                                        
                                        if (!rbx_1)
                                            result_1 = 0;
                                        else
                                        {
                                            *(rsp_1 + 0x28) = r15_1;
                                            *(rsp_1 + 0x20) = rbx_1;
                                            
                                            if (!__acrt_MultiByteToWideChar(CodePage, 
                                                    MB_PRECOMPOSED, arg6, rsi))
                                                result_1 = 0;
                                            else
                                            {
                                                __builtin_memset(rsp_1 + 0x30, 0, 0x18);
                                                uint64_t rdx_8 = var_78;
                                                *(rsp_1 + 0x28) = r15_1;
                                                *(rsp_1 + 0x20) = rbx_1;
                                                result_1 = sub_1400191ec(arg2, rdx_8, rdi_1, r12);
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if (rdx_7 > 0x400)
                                        {
                                            int32_t* rax_16 = _malloc_base(rdx_7);
                                            rbx_1 = rax_16;
                                            
                                            if (!rax_16)
                                                goto label_140027bdd;
                                            
                                            *rax_16 = 0xdddd;
                                        label_140027bd5:
                                            rbx_1 = &rbx_1[4];
                                            goto label_140027bdd;
                                        }
                                        
                                        int64_t rax_14 = rdx_7 + 0xf;
                                        
                                        if (rax_14 <= rdx_7)
                                            rax_14 = 0xffffffffffffff0;
                                        
                                        int64_t rax_15 = rax_14 & 0xfffffffffffffff0;
                                        __chkstk(rax_15);
                                        rsp_1 -= rax_15;
                                        rbx_1 = rsp_1 + 0x50;
                                        
                                        if (rbx_1)
                                        {
                                            *rbx_1 = 0xcccc;
                                            goto label_140027bd5;
                                        }
                                        
                                        result_1 = 0;
                                    }
                                    
                                    if (rbx_1 && rbx_1[-4] == 0xdddd)
                                        _free_base(&rbx_1[-4]);
                                }
                            }
                        }
                    }
                    else
                    {
                        if (rcx_8 > 0x400)
                        {
                            int32_t* rax_11 = _malloc_base(rcx_8);
                            rdi_1 = rax_11;
                            
                            if (!rax_11)
                                goto label_140027b19;
                            
                            *rax_11 = 0xdddd;
                        label_140027b11:
                            rdi_1 = &rdi_1[4];
                            goto label_140027b19;
                        }
                        
                        int64_t rax_9 = rcx_8 + 0xf;
                        
                        if (rax_9 <= rcx_8)
                            rax_9 = 0xffffffffffffff0;
                        
                        int64_t rax_10 = rax_9 & 0xfffffffffffffff0;
                        __chkstk(rax_10);
                        rsp_1 = &var_c8 - rax_10;
                        rdi_1 = rsp_1 + 0x50;
                        
                        if (rdi_1)
                        {
                            *rdi_1 = 0xcccc;
                            goto label_140027b11;
                        }
                        
                        result_1 = 0;
                    }
                    
                    if (rdi_1 && rdi_1[-4] == 0xdddd)
                        _free_base(&rdi_1[-4]);
                    
                    result = result_1;
                }
            }
            else if (rbx == rsi)
            {
            label_140027c6b:
                result = 2;
            }
            else if (rsi > 1)
                result = 1;
            else
            {
                CPINFO cPInfo;
                
                if (rbx > 1)
                    result = 3;
                else if (!GetCPInfo(CodePage, &cPInfo))
                    result = 0;
                else
                {
                    var_62;
                    uint8_t rcx_3;
                    
                    if (rbx <= 0)
                    {
                        if (rsi <= 0)
                            goto label_140027a80;
                        
                        if (cPInfo.MaxCharSize >= 2)
                        {
                            char* rax_7 = &var_62;
                            
                            if (cPInfo.LeadByte[0])
                            {
                                while (rax_7[1])
                                {
                                    rcx_3 = *arg6;
                                    
                                    if (rcx_3 >= *rax_7 && rcx_3 <= rax_7[1])
                                        goto label_140027c6b;
                                    
                                    rax_7 = &rax_7[2];
                                    
                                    if (!*rax_7)
                                        break;
                                }
                            }
                        }
                        
                        result = 1;
                    }
                    else
                    {
                        if (cPInfo.MaxCharSize >= 2)
                        {
                            char* rax_6 = &var_62;
                            
                            if (cPInfo.LeadByte[0])
                            {
                                while (rax_6[1])
                                {
                                    rcx_3 = *r15;
                                    
                                    if (rcx_3 >= *rax_6 && rcx_3 <= rax_6[1])
                                        goto label_140027c6b;
                                    
                                    rax_6 = &rax_6[2];
                                    
                                    if (!*rax_6)
                                        break;
                                }
                            }
                        }
                        
                        result = 3;
                    }
                }
            }
        }
    }
    
    __security_check_cookie(rax_1 ^ &var_78);
    return result;
}

uint64_t __acrt_CompareStringA(int128_t* arg1, int64_t arg2, int32_t arg3, char* arg4, int32_t arg5, uint8_t* arg6, int32_t arg7, uint32_t arg8)
{
    void* var_28;
    _LocaleUpdate::_LocaleUpdate(&var_28, arg1);
    void var_20;
    uint64_t result = InternalCompareStringA(&var_20, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    char var_10;
    
    if (var_10)
    {
        void* rcx_2 = var_28;
        *(rcx_2 + 0x3a8) &= 0xfffffffd;
    }
    
    return result;
}

uint64_t _clearfp()
{
    int32_t mxcsr;
    int32_t rax = sub_140025510(mxcsr);
    int32_t r9 = 0;
    
    if (rax & 0x3f)
    {
        int32_t rdx_3 = (rax & 1) << 4;
        int32_t r8_2 = rdx_3 | 8;
        
        if (!(rax & 4))
            r8_2 = rdx_3;
        
        int32_t rcx_3 = r8_2 | 4;
        
        if (!(rax & 8))
            rcx_3 = r8_2;
        
        int32_t rdx_5 = rcx_3 | 2;
        
        if (!(rax & 0x10))
            rdx_5 = rcx_3;
        
        r9 = rdx_5 | 1;
        
        if (!(rax & 0x20))
            r9 = rdx_5;
        
        if (rax & 2)
            r9 |= 0x80000;
    }
    
    return r9;
}

int64_t _log10_special(int64_t arg1 @ zmm0, int128_t arg2 @ zmm1, int32_t arg3)
{
    return _log_special_common(arg1, arg2, arg3, 0x1b, "log10");
}

int64_t _log_special_common(int64_t arg1 @ zmm0, int128_t arg2 @ zmm1, int32_t arg3, int32_t arg4, int64_t arg5)
{
    int128_t zmm6 = arg2;
    
    if (arg3 == 1)
    {
        int32_t var_28_2 = 1;
        zmm6 = _handle_error(arg5, arg4, zmm6, 2, 4, 0x22, arg1, {0});
    }
    else if (arg3 == 2)
    {
        int32_t var_28_1 = arg3 - 1;
        zmm6 = _handle_error(arg5, arg4, zmm6, arg3 - 1, 8, 0x21, arg1, {0});
    }
    
    return zmm6;
}

BOOL IsProcessorFeaturePresent(enum PROCESSOR_FEATURE_ID ProcessorFeature)
{
    /* tailcall */
    return IsProcessorFeaturePresent(ProcessorFeature);
}

void* _FindPESection(void* arg1, int64_t arg2)
{
    int32_t r9 = 0;
    void* r8 = *(arg1 + 0x3c) + arg1;
    uint32_t r11 = *(r8 + 6);
    void* result = *(r8 + 0x14) + 0x18 + r8;
    
    if (r11)
    {
        do
        {
            uint64_t rdx = *(result + 0xc);
            
            if (arg2 >= rdx && arg2 < *(result + 8) + rdx)
                return result;
            
            r9 += 1;
            result += 0x28;
        } while (r9 < r11);
    }
    
    return nullptr;
}

void* _IsNonwritableInCurrentImage(int64_t arg1)
{
    void* result = _ValidateImageBase(&__dos_header);
    
    if (result)
    {
        result = _FindPESection(&__dos_header, arg1 - &__dos_header);
        
        if (result)
            return ~(*(result + 0x24) >> 0x1f) & 1;
    }
    
    return result;
}

int64_t _ValidateImageBase(int16_t* arg1)
{
    if (*arg1 == 0x5a4d)
    {
        int32_t* rax_2 = *(arg1 + 0x3c) + arg1;
        
        if (*rax_2 == 0x4550 && rax_2[6] == 0x20b)
            return 1;
    }
    
    return 0;
}

int64_t _local_unwind(int64_t arg1, int64_t arg2)
{
    return RtlUnwind(arg1, arg2, nullptr, nullptr);
}

void* sub_140027f4c(int32_t (* arg1)[0x4], int32_t arg2)
{
    int32_t (* result)[0x4] = nullptr;
    int32_t (* result_1)[0x4] = arg1;
    
    if (!arg2)
    {
        int128_t* rdx_1 = arg1 & 0xfffffffffffffff0;
        int32_t i;
        
        for (i = _mm_movemask_epi8(_mm_cmpeq_epi8(*rdx_1, {0})) & 0xffffffff << (result_1 & 0xf); 
                !i; i = _mm_movemask_epi8(_mm_cmpeq_epi8(*rdx_1, {0})))
            rdx_1 = &rdx_1[1];
        
        uint64_t rflags_1;
        int32_t temp0_5;
        temp0_5 = _bit_scan_forward(i);
        return temp0_5 + rdx_1;
    }
    
    if (data_140040e20 >= 2)
    {
        while (true)
        {
            bool c_1 = false;
            bool z_1 = !(result_1 & 0xf);
            
            if (z_1)
            {
                char zmm0[0x10] = arg2;
                
                while (true)
                {
                    int64_t rflags_4;
                    int32_t temp0_18;
                    temp0_18 = __pcmpistri_xmmdq_memdq_immb(zmm0, *result_1, 0x40);
                    
                    if (c_1)
                    {
                        int64_t r9 = temp0_18;
                        result = r9 + result_1;
                        z_1 = r9 == -(result_1);
                        int64_t rflags_5;
                        int32_t temp0_20;
                        temp0_20 = __pcmpistri_xmmdq_memdq_immb(zmm0, *result_1, 0x40);
                    }
                    
                    if (z_1)
                        break;
                    
                    int32_t (* result_2)[0x4] = result_1;
                    result_1 = &result_1[1];
                    c_1 = result_2 >= -0x10;
                    z_1 = result_2 == -0x10;
                }
                
                break;
            }
            
            if (*result_1 == arg2)
                result = result_1;
            
            if (!*result_1)
                break;
            
            result_1 += 1;
        }
    }
    else
    {
        uint32_t rax_4 = arg2;
        char (* r10_2)[0x10] = result_1 & 0xfffffffffffffff0;
        uint16_t temp0_6[0x8] = _mm_shufflelo_epi16(rax_4 << 8 | rax_4, 0);
        int32_t r8_3 = 0xffffffff << (result_1 & 0xf);
        uint32_t temp0_8 = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq({0}, *r10_2));
        uint32_t temp0_9[0x4] = _mm_shuffle_epi32(temp0_6, 0);
        int32_t rdx_3 = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(temp0_9, *r10_2)) & r8_3;
        int32_t i_1 = temp0_8 & r8_3;
        
        while (!i_1)
        {
            uint64_t rflags_2;
            int32_t temp0_12;
            temp0_12 = _bit_scan_reverse(rdx_3);
            
            if (rdx_3)
                result = &(*r10_2)[temp0_12];
            
            r10_2 = &r10_2[1];
            uint16_t zmm1[0x8] = __pcmpeqb_xmmdq_memdq({0}, *r10_2);
            char temp0_14[0x10] = __pcmpeqb_xmmdq_memdq(temp0_9, *r10_2);
            i_1 = _mm_movemask_epi8(zmm1);
            rdx_3 = _mm_movemask_epi8(temp0_14);
        }
        
        int32_t rdx_4 = rdx_3 & ((-(i_1) & i_1) - 1);
        uint64_t rflags_3;
        int32_t temp0_17;
        temp0_17 = _bit_scan_reverse(rdx_4);
        
        if (rdx_4)
            return &(*r10_2)[temp0_17];
    }
    
    return result;
}

char* sub_14002807c(int64_t arg1, char arg2)
{
    uint32_t rax_2 = arg2;
    char (* r8_1)[0x10] = arg1 & 0xfffffffffffffff0;
    uint32_t r10_2 = rax_2 << 8 | rax_2;
    uint16_t temp0[0x8] = _mm_shufflelo_epi16(r10_2, 0);
    uint128_t zmm0 = __pcmpeqb_xmmdq_memdq({0}, *r8_1);
    uint32_t temp0_2[0x4] = _mm_shuffle_epi32(temp0, 0);
    uint32_t i;
    
    for (i = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(temp0_2, *r8_1) | zmm0)
            & 0xffffffff << (arg1 & 0xf); !i; i = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(temp0_2, *r8_1)
            | __pcmpeqb_xmmdq_memdq({0}, *r8_1)))
        r8_1 = &r8_1[1];
    
    uint64_t rflags;
    int32_t temp0_8;
    temp0_8 = _bit_scan_forward(i);
    char* result = &(*r8_1)[temp0_8];
    
    if (*result == r10_2)
        return result;
    
    return nullptr;
}

uint128_t* sub_1400280fc(uint128_t* arg1, int16_t arg2)
{
    uint128_t* r8 = arg1;
    uint32_t temp0_1[0x4] = _mm_shuffle_epi32(_mm_shufflelo_epi16(arg2, 0), 0);
    
    while (true)
    {
        int64_t rax_3;
        
        if ((r8 & 0xfff) > 0xff0)
        {
            if (*r8 == arg2)
                return r8;
            
            if (!*r8)
                return 0;
            
            rax_3 = 2;
        }
        else
        {
            uint128_t zmm0 = *r8;
            uint32_t temp0_4 =
                _mm_movemask_epi8(_mm_cmpeq_epi16({0}, zmm0) | _mm_cmpeq_epi16(zmm0, temp0_1));
            
            if (temp0_4)
            {
                uint64_t rflags;
                int32_t temp0_5;
                temp0_5 = _bit_scan_forward(temp0_4);
                int16_t* r8_1 = r8 + temp0_5;
                
                if (*r8_1 == arg2)
                    return r8_1;
                
                return nullptr;
            }
            
            rax_3 = 0x10;
        }
        
        r8 += rax_3;
    }
}

void _guard_dispatch_icall_nop(void (* arg1)())
{
    int64_t entry_rax;
    /* jump -> entry_rax */
}

int64_t sub_1400281a0(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    sub_140005c60(*(arg2 + 0xb0) + *(**(arg2 + 0xb0) + 4), 4, 1);
    return &data_140003543;
}

int64_t sub_1400281f0(int64_t arg1, void* arg2)
{
    return sub_1400045a0(arg2 + 0x88);
}

int64_t sub_140028210(int64_t arg1, void* arg2)
{
    return sub_1400043c0(*(arg2 + 0x50));
}

int64_t sub_140028230(int64_t arg1, int64_t arg2)
{
    return sub_140004400(arg2 + 0x60);
}

int64_t sub_140028250(int64_t arg1, void* arg2)
{
    return sub_140004480(*(arg2 + 0x40));
}

int64_t sub_140028270(int64_t arg1, int64_t arg2)
{
    return sub_140004400(arg2 + 0x40);
}

int64_t sub_140028290(int64_t arg1, void* arg2)
{
    return sub_140004400(*(arg2 + 0x80));
}

int64_t sub_1400282b0() __pure
{
    int64_t rdx;
    int64_t arg_10 = rdx;
    return &data_140004ea3;
}

int64_t sub_1400282d0(int64_t arg1, void* arg2)
{
    return sub_1400045a0(arg2 + 0x28);
}

uint64_t sub_1400282f0(int64_t arg1, int32_t* arg2)
{
    *(arg2 + 8) = arg1;
    arg2[1] = ***(arg2 + 8);
    
    if (arg2[1] != 0x80000003)
        *arg2 = 0;
    else
        *arg2 = 1;
    
    return *arg2;
}

uint64_t sub_140028330(int64_t arg1, void* arg2)
{
    *(arg2 + 0x38) = arg1;
    *(arg2 + 0x34) = ***(arg2 + 0x38);
    
    if (*(arg2 + 0x34) != 0x80000003)
        *(arg2 + 0x30) = 0;
    else
        *(arg2 + 0x30) = 1;
    
    return *(arg2 + 0x30);
}

uint64_t sub_140028370(int64_t arg1, void* arg2)
{
    *(arg2 + 0x30) = arg1;
    *(arg2 + 0x28) = ***(arg2 + 0x30);
    
    if (*(arg2 + 0x28) != 0xc0000005)
        *(arg2 + 0x24) = 0;
    else
        *(arg2 + 0x24) = 1;
    
    return *(arg2 + 0x24);
}

int64_t sub_1400283b0(int64_t arg1, void* arg2)
{
    return sub_140009490(arg2 + 0x38);
}

int64_t* sub_1400283d0(int64_t arg1, int64_t arg2)
{
    return sub_140006b40(arg2 + 0x40);
}

struct std::_Facet_base::VTable** Concurrency::details::UMSFreeThreadProxyFactory::dtor$0::~dtor$0::~dtor$0(int64_t arg1, void* arg2)
{
    return std::time_base::~time_base(*(arg2 + 0x40));
}

int64_t sub_140028410(int64_t arg1, void* arg2)
{
    return sub_140009490(*(arg2 + 0x40));
}

int64_t* sub_140028430(int64_t arg1, void* arg2)
{
    return sub_140006ae0(*(arg2 + 0x40) + 8);
}

int64_t* sub_140028450(int64_t arg1, void* arg2)
{
    return sub_140006ae0(*(arg2 + 0x40) + 0x18);
}

int64_t* sub_140028470(int64_t arg1, void* arg2)
{
    return sub_140006ae0(*(arg2 + 0x40) + 0x28);
}

int64_t* sub_140028490(int64_t arg1, void* arg2)
{
    return sub_140006ae0(*(arg2 + 0x40) + 0x38);
}

int64_t* sub_1400284b0(int64_t arg1, void* arg2)
{
    return sub_140006ae0(*(arg2 + 0x40) + 0x48);
}

int64_t* std::_Locinfo::dtor$6::dtor$6::dtor$6(int64_t arg1, void* arg2)
{
    return sub_140006ae0(*(arg2 + 0x40) + 0x58);
}

int64_t sub_1400284f0(int64_t arg1, void* arg2)
{
    return j_j_free(*(arg2 + 0x28));
}

int64_t sub_140028510(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x20) & 1;
    
    if (!result)
        return result;
    
    *(arg2 + 0x20) &= 0xfffffffe;
    return std::_Locinfo::~_Locinfo(arg2 + 0x58);
}

int64_t sub_140028540(int64_t arg1, void* arg2)
{
    void* arg_10 = arg2;
    sub_140005c60(*(arg2 + 0x70) + *(**(arg2 + 0x70) + 4), 4, 1);
    return &data_140007647;
}

int64_t sub_140028590(int64_t arg1, void* arg2)
{
    return sub_1400045a0(arg2 + 0x48);
}

int64_t* sub_1400285b0(int64_t arg1, void* arg2)
{
    return sub_140006cb0(arg2 + 0x40);
}

int64_t sub_1400285c8(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140009490(arg2 + 0x68);
}

int64_t sub_1400285d4(int64_t arg1, int64_t arg2)
{
    /* tailcall */
    return sub_140006b40(arg2 + 0x60);
}

int64_t sub_1400285e0(int64_t arg1, void* arg2)
{
    int32_t result = *(arg2 + 0x58) & 1;
    
    if (!result)
        return result;
    
    *(arg2 + 0x58) &= 0xfffffffe;
    return sub_1400080a0(*(arg2 + 0x40) + 0x10);
}

int64_t sub_14002860a(int64_t arg1, void* arg2)
{
    return j_j_free(*(arg2 + 0xa0));
}

int64_t sub_14002862a(int64_t arg1, int64_t arg2)
{
    /* tailcall */
    return sub_140004400(arg2 + 0x70);
}

int64_t sub_140028636(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140009490(arg2 + 0x40);
}

uint64_t sub_140028642(int64_t* arg1)
{
    return sub_1400158e4(**arg1, arg1);
}

uint64_t __scrt_is_nonwritable_in_current_image$filt$0(int64_t* arg1)
{
    int32_t rcx;
    rcx = **arg1 == 0xc0000005;
    return rcx;
}

int64_t sub_140028678(int64_t arg1, void* arg2)
{
    *(arg2 + 0x50) = arg1;
    *(arg2 + 0x48) = arg1;
    void* rax = __vcrt_getptd();
    *(rax + 0x70) = *(arg2 + 0x80);
    *(__vcrt_getptd() + 0x68) = *(**(arg2 + 0x48) + 0x38);
    sub_14000d870(**(arg2 + 0x48), *(arg2 + 0x88), *(arg2 + 0x90), *(arg2 + 0x98), *(arg2 + 0xa0), 
        0, 0, 1);
    *(__vcrt_getptd() + 0x70) = 0;
    *(arg2 + 0x40) = 1;
    return 1;
}

int64_t __DestructExceptionObject$filt$0(int64_t, void* arg2)
{
    int64_t result;
    result = *(arg2 + 0x38);
    return result;
}

int64_t __FrameHandler3::CxxCallCatchBlock::filt$0::filt$0(int64_t* arg1, void* arg2)
{
    *(arg2 + 0x58) = arg1;
    return ExFilterRethrow(arg1, *(arg2 + 0xb8), arg2 + 0x20);
}

void* __FrameHandler3::CxxCallCatchBlock::fin$1::fin$1(int64_t arg1, void* arg2)
{
    sub_14000bd74(*(arg2 + 0x38));
    
    if (!*(arg2 + 0x20))
    {
        int32_t* rbx_1 = *(arg2 + 0xb8);
        
        if (*rbx_1 == 0xe06d7363 && rbx_1[6] == 4 && rbx_1[8] - 0x19930520 <= 2)
        {
            int32_t rax_3;
            int64_t rdx;
            rax_3 = _IsExceptionObjectToBeDestroyed(*(rbx_1 + 0x28));
            
            if (rax_3)
            {
                rdx = 1;
                sub_14000c6e0(rbx_1);
            }
        }
    }
    
    void* rax_4 = __vcrt_getptd();
    *(rax_4 + 0x20) = *(arg2 + 0xc0);
    void* result = __vcrt_getptd();
    *(result + 0x28) = *(arg2 + 0x40);
    return result;
}

int64_t __FrameHandler3::FrameUnwindToState::filt$0::filt$0(int64_t* arg1)
{
    __FrameUnwindFilter(arg1);
    return 0;
}

void* __FrameHandler3::FrameUnwindToState::fin$1::fin$1()
{
    void* result = __vcrt_getptd();
    
    if (*(result + 0x30) > 0)
    {
        result = __vcrt_getptd();
        *(result + 0x30) -= 1;
    }
    
    return result;
}

int64_t sub_1400287f7(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140011880(**(arg2 + 0x48));
}

int64_t common_exit::filt$0::filt$0(int64_t* arg1)
{
    return sub_14000ea9c(**arg1);
}

int64_t sub_14002882c(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14000ee6c(**(arg2 + 0x48));
}

int64_t sub_140028847(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14000ee6c(*(arg2 + 0x30));
}

int64_t sub_14002885f(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140011880(**(arg2 + 0x98));
}

int64_t sub_14002887c(int64_t arg1, void* arg2)
{
    return sub_14000ee6c(*(arg2 + 0x40));
}

int64_t sub_140028896(int64_t arg1, void* arg2)
{
    return sub_14000ee6c(*(arg2 + 0x48));
}

int64_t sub_1400288b0(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14000ee6c(*(arg2 + 0x60));
}

int64_t sub_1400288c8(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14000ee6c(*(arg2 + 0x38));
}

int64_t sub_1400288e0()
{
    /* tailcall */
    return sub_140011880(0);
}

int64_t sub_1400288f6(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140011880(**(arg2 + 0x58));
}

void* sub_140028910(int64_t arg1, void* arg2)
{
    void* result = ***(arg2 + 0x48);
    *(result + 0x3a8) &= 0xffffffef;
    return result;
}

int64_t sub_140028931()
{
    /* tailcall */
    return sub_140011880(8);
}

int64_t sub_14002894a()
{
    /* tailcall */
    return sub_140011880(7);
}

int64_t sub_140028963(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140021048(**(arg2 + 0x48));
}

int64_t sub_14002897d(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140021048(*(arg2 + 0x50));
}

int64_t sub_140028994(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_140021048(*(arg2 + 0x40));
}

int64_t sub_1400289ab(int64_t arg1, void* arg2)
{
    /* tailcall */
    return sub_14000f1ac(arg2 + 0x58);
}

void raise$fin$0(int64_t arg1, void* arg2)
{
    if (*(arg2 + 0x70))
        sub_140011880(3);
}

int64_t sub_1400289d8(int64_t* arg1)
{
    int32_t* rax = *arg1;
    
    if (*rax != 0xc0000005 && *rax != 0xc000001d)
        return 0;
    
    return 1;
}

int64_t _free_locale$fin$1()
{
    /* tailcall */
    return sub_140011880(5);
}

int64_t sub_140028a1d()
{
    /* tailcall */
    return sub_140011880(4);
}

uint64_t sub_140028a40(int64_t* arg1)
{
    int32_t rcx;
    rcx = **arg1 == 0xc0000005;
    return rcx;
}

int64_t sub_140028a60()
{
    int64_t var_18 = -2;
    *(*(data_140041f00 + 4) + &data_140041f00) = &std::ostream::`vftable';
    int64_t rcx_1 = *(data_140041f00 + 4);
    *(rcx_1 + 0x140041efc) = rcx_1 - 0x10;
    data_140041f10 = &std::ios_base::`vftable';
    return sub_14000a220(&data_140041f10);
}

int64_t sub_140028ac0(int512_t arg1 @ zmm0)
{
    /* tailcall */
    return sub_140007fc0(&data_140041f70, arg1);
}

int64_t std::initlocks::()
{
    /* tailcall */
    return sub_14000944c();
}

int64_t std::initlocks::()
{
    /* tailcall */
    return sub_14000944c();
}

void sub_140028ae4()
{
    while (true)
    {
        int64_t* rbx_1 = data_1400421c0;
        
        if (!rbx_1)
            break;
        
        int64_t* rcx_1 = rbx_1[1];
        data_1400421c0 = *rbx_1;
        int64_t* rax_4 = (*(*rcx_1 + 0x10))();
        
        if (rax_4)
            (**rax_4)(rax_4, 1);
        
        j_j_free(rbx_1);
    }
}

void sub_140028b40()
{
    int64_t* rcx = data_1400421a8;
    
    if (!rcx)
        return;
    
    int64_t* rax = (*(*rcx + 0x10))();
    
    if (rax)
        (**rax)(rax, 1, rax);
}

int64_t sub_140028b80()
{
    int64_t var_18 = -2;
    int64_t result;
    
    while (true)
    {
        result = data_140040de8;
        
        if (result >= 0xa)
            break;
        
        int64_t rcx_1 = *(&data_1400423e0 + (result << 3));
        data_140040de8 = result + 1;
        int64_t rax_2 = DecodePointer(rcx_1);
        
        if (rax_2)
            rax_2();
    }
    
    return result;
}

int64_t std::initlocks::()
{
    /* tailcall */
    return sub_14000944c();
}

