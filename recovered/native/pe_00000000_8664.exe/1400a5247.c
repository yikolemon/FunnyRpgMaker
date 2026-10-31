/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5247 */

void FUN_1400a5247(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(int *)(DAT_140f2a910 + 0xfc) = *(int *)(DAT_140f2a910 + 0xfc) + 1;
  lVar5 = *(longlong *)(param_1 + 800);
  if (1 < *(int *)(lVar5 + 0x8c)) {
    FUN_1400da236(lVar5 + 0x88,lVar5);
    lVar5 = *(longlong *)(param_1 + 800);
  }
  FUN_1400e0bf9(lVar2 + 200,*(undefined8 *)(lVar2 + 0x110 + (ulonglong)param_2 * 8),lVar5);
  iVar1 = *(int *)(param_1 + 0x1f0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1f8);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      cVar4 = FUN_14008851d(uVar3);
      if (cVar4 != '\0') {
        FUN_1400a5247(uVar3,param_2);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}

