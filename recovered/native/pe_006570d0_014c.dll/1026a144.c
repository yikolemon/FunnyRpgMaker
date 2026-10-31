/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026a144 */

void FUN_1026a144(uint *param_1,char param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  __int64 _Var10;
  longlong lVar11;
  undefined8 uVar12;
  uint local_3c;
  int local_38;
  undefined8 local_34;
  uint local_2c [8];
  int local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_1 == (uint *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    goto LAB_1026a2d3;
  }
  local_3c = param_1[5];
  local_38 = (int)local_3c >> 0x1f;
  local_34 = CONCAT44(local_34._4_4_,(uint)local_34);
  if ((-1 < local_38) &&
     (((((int)local_3c < 0 || (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), 0x44 < local_3c))
       && (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), -1 < (int)local_3c)) &&
      (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), local_3c < 0x44f)))) {
    uVar4 = param_1[4];
    if (((int)uVar4 < 0) || (0xb < (int)uVar4)) {
      uVar3 = (int)uVar4 / 0xc;
      uVar4 = (int)uVar4 % 0xc;
      bVar9 = CARRY4(local_3c,uVar3);
      local_3c = local_3c + uVar3;
      param_1[4] = uVar4;
      local_38 = local_38 + ((int)uVar3 >> 0x1f) + (uint)bVar9;
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 0xc;
        bVar9 = local_3c == 0;
        local_3c = local_3c - 1;
        param_1[4] = uVar4;
        local_38 = local_38 - (uint)bVar9;
      }
      local_34 = CONCAT44(local_34._4_4_,(uint)local_34);
      if ((((local_38 < 0) ||
           ((local_38 < 1 && (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), local_3c < 0x45)))
           ) || (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), local_38 != 0)) ||
         (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), 0x44e < local_3c)) goto LAB_1026a2c1;
    }
    iVar5 = local_38;
    uVar3 = local_3c;
    local_34._0_4_ = (&DAT_103255e0)[uVar4];
    local_34._4_4_ = (int)(uint)local_34 >> 0x1f;
    bVar9 = __crt_time_is_leap_year<__int64>(CONCAT44(local_38,local_3c));
    if ((bVar9) && (1 < (int)uVar4)) {
      bVar9 = 0xfffffffe < (uint)local_34;
      local_34._0_4_ = (uint)local_34 + 1;
      local_34._4_4_ = local_34._4_4_ + bVar9;
    }
    _Var10 = __crt_time_elapsed_leap_years<__int64>(CONCAT44(iVar5,uVar3));
    lVar11 = __allmul(uVar3 - 0x46,iVar5 - (uint)(uVar3 < 0x46),0x16d,0);
    lVar11 = _Var10 + lVar11 + CONCAT44(local_34._4_4_,(uint)local_34);
    local_34._4_4_ = param_1[3];
    iVar5 = (int)local_34._4_4_ >> 0x1f;
    lVar1 = lVar11 + (int)local_34._4_4_;
    if (lVar11 < 0) {
      if ((((int)local_34._4_4_ < 0 && -1 < iVar5) || (-1 < iVar5)) || (lVar1 < 0))
      goto LAB_1026a2f6;
    }
    else if ((iVar5 < 0) || (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), -1 < lVar1)) {
LAB_1026a2f6:
      local_34 = __allmul(lVar1,0x18,0);
      if (lVar1 != 0) {
        lVar11 = __alldiv(local_34,lVar1);
        if (lVar11 != 0x18) goto LAB_1026a2c1;
      }
      uVar4 = param_1[2];
      iVar5 = (int)uVar4 >> 0x1f;
      lVar11 = local_34 + (int)uVar4;
      if (local_34 < 0) {
        if ((((int)uVar4 < 0 && -1 < iVar5) || (-1 < iVar5)) || (lVar11 < 0)) goto LAB_1026a385;
      }
      else if ((iVar5 < 0) || (-1 < lVar11)) {
LAB_1026a385:
        uVar12 = __allmul(lVar11,0x3c,0);
        local_34._0_4_ = (uint)((ulonglong)uVar12 >> 0x20);
        if (lVar11 != 0) {
          lVar11 = __alldiv(uVar12,lVar11);
          if (lVar11 != 0x3c) goto LAB_1026a2c1;
        }
        local_34._4_4_ = param_1[1];
        iVar5 = (int)local_34._4_4_ >> 0x1f;
        iVar7 = local_34._4_4_ + (uint)uVar12;
        iVar6 = iVar5 + (uint)local_34 + (uint)CARRY4(local_34._4_4_,(uint)uVar12);
        if ((int)(uint)local_34 < 0) {
          if ((((int)local_34._4_4_ < 0 && -1 < iVar5) || (-1 < iVar5)) || (iVar6 < 0))
          goto LAB_1026a41a;
        }
        else if ((iVar5 < 0) || (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), -1 < iVar6)) {
LAB_1026a41a:
          uVar12 = __allmul(iVar7,iVar6,0x3c,0);
          local_34._4_4_ = (uint)((ulonglong)uVar12 >> 0x20);
          if (iVar7 != 0 || iVar6 != 0) {
            lVar11 = __alldiv(uVar12,iVar7,iVar6);
            if (lVar11 != 0x3c) goto LAB_1026a2c1;
          }
          uVar4 = *param_1;
          iVar5 = (int)uVar4 >> 0x1f;
          local_3c = uVar4 + (uint)uVar12;
          local_38 = iVar5 + local_34._4_4_ + (uint)CARRY4(uVar4,(uint)uVar12);
          if ((int)local_34._4_4_ < 0) {
            if ((((int)uVar4 < 0 && -1 < iVar5) || (-1 < iVar5)) || (local_38 < 0))
            goto LAB_1026a4b1;
          }
          else if ((iVar5 < 0) ||
                  (local_34 = CONCAT44(local_34._4_4_,(uint)local_34), -1 < local_38)) {
LAB_1026a4b1:
            if (param_2 == '\0') {
              iVar5 = FUN_1026965c(local_2c,&local_3c);
LAB_1026a52d:
              if (iVar5 != 0) goto LAB_1026a2c1;
            }
            else {
              ___tzset();
              local_34._0_4_ = 0;
              local_34._4_4_ = 0;
              iVar5 = FUN_1027537c(&local_34);
              if ((iVar5 != 0) || (iVar5 = FUN_102753a8((int)&local_34 + 4), iVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
                __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
              bVar9 = CARRY4(local_3c,local_34._4_4_);
              local_3c = local_3c + local_34._4_4_;
              local_38 = local_38 + ((int)local_34._4_4_ >> 0x1f) + (uint)bVar9;
              iVar5 = FUN_10269d22(local_2c,&local_3c);
              if (iVar5 != 0) goto LAB_1026a2c1;
              if ((0 < (int)param_1[8]) || (((int)param_1[8] < 0 && (0 < local_c)))) {
                bVar9 = CARRY4(local_3c,(uint)local_34);
                local_3c = local_3c + (uint)local_34;
                local_38 = local_38 + ((int)(uint)local_34 >> 0x1f) + (uint)bVar9;
                iVar5 = FUN_10269d22(local_2c,&local_3c);
                goto LAB_1026a52d;
              }
            }
            puVar8 = local_2c;
            for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
              *param_1 = *puVar8;
              puVar8 = puVar8 + 1;
              param_1 = param_1 + 1;
            }
            goto LAB_1026a2d3;
          }
        }
      }
    }
  }
LAB_1026a2c1:
  puVar2 = (undefined4 *)FUN_10268ffd();
  *puVar2 = 0x16;
LAB_1026a2d3:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

