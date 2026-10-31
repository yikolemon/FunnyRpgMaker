/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140109b01 */

void FUN_140109b01(longlong param_1,float param_2,float param_3,float param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  param_2 = param_2 + (float)DAT_1401c8640;
  param_3 = param_3 + DAT_1401c8640._4_4_;
  iVar5 = *(int *)(param_1 + 0x50);
  lVar6 = 0;
  do {
    uVar1 = *(undefined8 *)((longlong)&DAT_140e8d220 + lVar6);
    if (iVar5 == *(int *)(param_1 + 0x54)) {
      if (iVar5 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar5 / 2 + iVar5;
      }
      iVar4 = iVar5 + 1;
      if (iVar5 + 1 < iVar2) {
        iVar4 = iVar2;
      }
      lVar3 = FUN_140077ab4((longlong)iVar4 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar3,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar3;
      *(int *)(param_1 + 0x54) = iVar4;
      iVar5 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    *(ulonglong *)(lVar3 + (longlong)iVar5 * 8) =
         CONCAT44((float)(int)((float)((ulonglong)uVar1 >> 0x20) * param_4) + param_3,
                  (float)(int)((float)uVar1 * param_4) + param_2);
    iVar5 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar5;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x40);
  return;
}

