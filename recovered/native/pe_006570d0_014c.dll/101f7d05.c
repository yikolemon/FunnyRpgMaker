/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f7d05 */

int __fastcall FUN_101f7d05(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = FUN_101c461e(param_3,param_4);
  iVar3 = local_18;
  if (local_18 == 0) {
    cVar1 = FUN_101c4d1e(param_3,&local_18);
    iVar3 = local_18;
    if (local_18 == 0) {
      *param_1 = cVar1;
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      if (cVar1 != '\0') {
        iVar3 = 3;
        if (cVar1 != '\x03') goto LAB_101f7d4a;
        uVar2 = FUN_101c4692(param_3,&local_18);
        iVar3 = local_18;
        if (local_18 != 0) goto LAB_101f7d4a;
        iVar3 = 3;
        if ((uVar2 & 0xffff) == 0) goto LAB_101f7d4a;
        param_2 = (uVar2 & 0xffff) * 3 + 2;
      }
      *(int *)(param_1 + 0xc) = param_2;
      iVar3 = FUN_101c4b40(param_3,param_2,param_1 + 8);
    }
  }
LAB_101f7d4a:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

