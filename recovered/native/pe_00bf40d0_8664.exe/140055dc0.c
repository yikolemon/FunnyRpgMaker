/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140055dc0 */

undefined8
FUN_140055dc0(longlong param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x18c);
  }
  if (lVar1 == 0) {
    iVar3 = 0x10000;
    iVar2 = 0x10000;
  }
  else {
    iVar2 = FUN_14001ecff((uint)*(ushort *)(lVar1 + 0x18) << 6,*(uint *)(param_1 + 0x18c));
    iVar3 = FUN_14001ecff((uint)*(ushort *)(lVar1 + 0x1a) << 6,*(uint *)(param_1 + 0x18c));
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar3;
  }
  return 0;
}

