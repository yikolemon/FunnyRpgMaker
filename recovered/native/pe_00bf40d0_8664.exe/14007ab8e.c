/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ab8e */

ulonglong FUN_14007ab8e(uint *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined1 auStack_d8 [32];
  uint local_b8 [32];
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  **(undefined4 **)(param_1 + 8) = 0x7fffffff;
  iVar3 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 6);
  uVar4 = param_1[1];
  puVar6 = local_b8;
  do {
    uVar5 = (longlong)(int)param_1[3] - (longlong)(int)uVar4;
    if (0 < (int)uVar5) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar2 = 0;
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0xe) + uVar2 * 8) = uVar1;
        uVar2 = uVar2 + 1;
      } while ((uVar5 & 0xffffffff) != uVar2);
    }
    *(ulonglong *)(param_1 + 0xc) = ((uVar5 * 8 + 0x17) / 0x18) * 0x18 + *(longlong *)(param_1 + 6);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 8);
    param_1[4] = 0;
    uVar2 = FUN_14007acf3((longlong)param_1,iVar3);
    if ((int)uVar2 == 0x62) {
      iVar3 = (int)uVar5 >> 1;
      if (iVar3 == 0) goto LAB_14007acb8;
      uVar4 = param_1[1];
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
      uVar4 = iVar3 + uVar4;
    }
    else {
      if ((int)uVar2 != 0) {
LAB_14007acb8:
        if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_d8)) {
          return uVar2 & 0xffffffff;
        }
                    /* WARNING: Subroutine does not return */
        FUN_140086440(local_38 ^ (ulonglong)auStack_d8);
      }
      if (*(longlong *)(param_1 + 0x20) == 0) {
        FUN_14007af7c(param_1);
      }
      else {
        FUN_14007ad3e((int *)param_1);
      }
      if (puVar6 == local_b8) goto LAB_14007acb8;
      param_1[3] = param_1[1];
      uVar4 = puVar6[-1];
      puVar6 = puVar6 + -1;
    }
    param_1[1] = uVar4;
    iVar3 = 1;
  } while( true );
}

