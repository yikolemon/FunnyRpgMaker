/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013e2cc */

void FUN_14013e2cc(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar2 = uVar1 & 0xffff;
  if ((uVar2 < *(ushort *)(param_1 + 0x78)) &&
     (uVar4 = *(ushort *)(param_1 + 0x18c), uVar4 < *(ushort *)(param_1 + 0x40))) {
    if (*(short *)(param_1 + 0x194) == 0) {
      uVar5 = (ulonglong)(uVar2 * 8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar5) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar4 * 8);
      (**(code **)(param_1 + 0x2f8))(param_1,param_1 + 0x78,uVar1,param_2[1]);
      *(undefined8 *)(*(longlong *)(param_1 + 0x88) + uVar5) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar5);
      uVar4 = *(ushort *)(param_1 + 0x18c);
    }
    iVar3 = (**(code **)(param_1 + 0x2d8))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)uVar2 * 8) -
                               *(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar4 * 8),
                       *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)uVar2 * 8) -
                       *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (ulonglong)uVar4 * 8));
    (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar1,param_2[1] - iVar3);
    *(undefined2 *)(param_1 + 0x18e) = *(undefined2 *)(param_1 + 0x18c);
    *(short *)(param_1 + 400) = (short)uVar1;
    if ((*(byte *)(param_1 + 0x1f0) & 1) != 0) {
      *(short *)(param_1 + 0x18c) = (short)uVar1;
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  return;
}

