/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027894d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14027894d(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  undefined1 local_30 [8];
  char local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_38 = param_2;
  if (param_1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3;
    if (((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) * 0x6db6db6db6db6db7 +
         lVar6 * -0x21cfb2b78c13521d == 0) && (param_2 < (ulonglong)(lVar6 * 0x21cfb2b78c13521d))) {
      FUN_14027866a(param_4,local_30,&local_40,&local_38);
      if (local_28 == '\0') {
LAB_140278ac0:
        pwVar4 = L"pNonPic";
LAB_140278ac7:
        FUN_1402733a8(pwVar4);
      }
      else {
        iVar1 = *(int *)(*(longlong *)(local_40 + 0x20) + 0x34 + local_38 * 0x38);
        if (iVar1 != 2) {
          if (iVar1 == 1) {
            lVar5 = *(longlong *)(local_40 + 0x20) + local_38 * 0x38;
            lVar6 = *(longlong *)(lVar5 + 0x18);
            if (((ulonglong)((*(longlong *)(lVar5 + 0x20) - lVar6 >> 3) * -0x71c71c71c71c71c7) <=
                 param_3) ||
               (pwVar4 = *(wchar_t **)(lVar6 + 0x18 + param_3 * 0x48),
               pwVar4 == *(wchar_t **)(lVar6 + 0x20 + param_3 * 0x48))) goto LAB_140278ac0;
            if (0xf < *(ulonglong *)(pwVar4 + 0xc)) {
              pwVar4 = *(wchar_t **)pwVar4;
            }
          }
          else {
            if (iVar1 != 0) {
              iVar3 = iVar1 >> 0x1f;
              iVar2 = iVar1 / 10000 + iVar3;
              lVar5 = (longlong)(iVar1 + (iVar2 - iVar3) * -10000);
              lVar6 = FUN_140273384((iVar2 - iVar3) + -1);
              goto LAB_140278b08;
            }
            lVar6 = *(longlong *)(*(longlong *)(local_40 + 0x38) + 0xa0 + local_38 * 0x1a8);
            if ((ulonglong)
                (*(longlong *)(*(longlong *)(local_40 + 0x38) + 0xa8 + local_38 * 0x1a8) - lVar6 >>
                5) <= param_3) goto LAB_140278ac0;
            lVar5 = param_3 * 0x20;
            if (*(ulonglong *)(lVar6 + 0x18 + lVar5) < 0x10) {
              pwVar4 = (wchar_t *)(lVar6 + lVar5);
            }
            else {
              pwVar4 = *(wchar_t **)(lVar6 + lVar5);
            }
          }
          goto LAB_140278ac7;
        }
        lVar5 = local_38 - 1;
        lVar6 = local_40;
LAB_140278b08:
        FUN_14027894d(lVar6,lVar5,param_3,param_4);
      }
      if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_68)) {
        return;
      }
      goto LAB_140278b34;
    }
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_68)) {
    FUN_1402733a8(L"pNonPic");
    return;
  }
LAB_140278b34:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_68);
}

