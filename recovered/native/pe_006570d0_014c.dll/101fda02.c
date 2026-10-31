/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fda02 */

int __fastcall FUN_101fda02(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 8;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar3 = (uint)*(ushort *)(iVar1 + 0x3a);
  if (*(uint *)(iVar1 + 4) < *(ushort *)(iVar1 + 0x16) + uVar3 + 3) {
    iVar4 = FUN_101c01a9(iVar1,3,0);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar3 = (uint)*(ushort *)(iVar1 + 0x3a);
  }
  iVar4 = *(int *)(iVar1 + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x40);
  *(undefined8 *)(iVar4 + uVar3 * 8) = *param_2;
  *(undefined8 *)(iVar4 + 8 + uVar3 * 8) = *param_3;
  *(undefined8 *)(iVar4 + 0x10 + uVar3 * 8) = *param_4;
  *(undefined2 *)(iVar2 + uVar3) = 0x202;
  *(undefined1 *)(iVar2 + 2 + uVar3) = 1;
  *(short *)(iVar1 + 0x3a) = *(short *)(iVar1 + 0x3a) + 3;
  return 0;
}

