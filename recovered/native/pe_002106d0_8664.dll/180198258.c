/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180198258 */

ulonglong FUN_180198258(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((longlong)iVar1 == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x28);
    uVar4 = CONCAT71(uVar5,1);
    lVar6 = 0;
    do {
      bVar3 = FUN_180196e9e(param_1,*(undefined8 *)(lVar2 + lVar6));
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar3);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar4 & 0xffffffff;
}

