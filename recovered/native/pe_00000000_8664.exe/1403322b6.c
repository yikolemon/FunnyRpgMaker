/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403322b6 */

void FUN_1403322b6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_R14;
  
  if ((*(longlong *)(param_2 + 0x40) == 0) || (*(longlong *)(param_1 + 0x40) != 0)) {
    uVar5 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    uVar5 = (uint)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  }
  lVar3 = *(longlong *)(param_2 + 0x38);
  iVar1 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      *(undefined8 *)(lVar2 + 0x4c0) = 0;
      *(byte *)(lVar2 + 0x495) = *(byte *)(lVar2 + 0x495) & 0xfe;
      FUN_140340e71(param_1,lVar2,uVar5 ^ 1);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_2 + 0x38);
  }
  if (lVar3 != 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    FUN_14030fda4(lVar3);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  if (((char)uVar5 == '\0') && (*(longlong *)(param_2 + 0x40) != 0)) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x20) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x20);
    }
    FUN_1403416d9(param_2);
    return;
  }
  return;
}

