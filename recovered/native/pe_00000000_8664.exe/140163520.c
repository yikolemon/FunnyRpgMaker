/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140163520 */

void FUN_140163520(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  bool bVar4;
  ushort uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  puVar2 = *(ushort **)(param_1 + 0x28);
  if (puVar2 == (ushort *)0x0) {
    return;
  }
  uVar1 = *puVar2;
  if (uVar1 < 2) {
    uVar7 = 0;
    if (uVar1 == 0) {
      uVar5 = puVar2[1];
      uVar7 = 0;
      bVar4 = true;
      goto LAB_140163574;
    }
  }
  else {
    uVar7 = *(ushort *)(*(longlong *)(puVar2 + 0xc) + (ulonglong)(uVar1 - 2) * 2) + 1;
  }
  uVar5 = puVar2[1];
  if (uVar7 == uVar5) {
    *puVar2 = uVar1 - 1;
    return;
  }
  bVar4 = false;
LAB_140163574:
  uVar6 = (ulonglong)uVar5;
  if (1 < uVar5) {
    lVar3 = *(longlong *)(puVar2 + 4);
    if (((*(int *)(lVar3 + (ulonglong)uVar7 * 8) == *(int *)(lVar3 + -8 + uVar6 * 8)) &&
        (*(int *)(lVar3 + 4 + (ulonglong)uVar7 * 8) == *(int *)(lVar3 + -4 + uVar6 * 8))) &&
       (*(char *)(*(longlong *)(puVar2 + 8) + -1 + uVar6) == '\x01')) {
      uVar5 = uVar5 - 1;
      puVar2[1] = uVar5;
    }
  }
  if (!bVar4) {
    if (uVar7 == uVar5 - 1) {
      *puVar2 = uVar1 - 1;
      puVar2[1] = uVar5 - 1;
    }
    else {
      *(short *)(*(longlong *)(puVar2 + 0xc) + (ulonglong)(uVar1 - 1) * 2) = (short)(uVar5 - 1);
    }
  }
  return;
}

