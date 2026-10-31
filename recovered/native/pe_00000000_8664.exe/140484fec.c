/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140484fec */

undefined8 FUN_140484fec(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar3 + 1;
  puVar4 = (ushort *)*puVar3;
  if ((puVar4 == (ushort *)0x0) || (*(longlong *)(puVar4 + 4) == 0)) {
    uVar5 = 6;
    *(char **)(param_1 + 0x40) = "ed";
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
LAB_140485036:
      bVar6 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar6 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_140485036;
      bVar6 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(puVar4 + 4);
    uVar1 = *puVar4;
    uVar5 = (ulonglong)uVar1;
    if (bVar6) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_140485062;
    }
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
LAB_140485062:
  *(int *)(param_1 + 0x48) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}

