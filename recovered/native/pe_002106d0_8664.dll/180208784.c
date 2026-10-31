/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180208784 */

undefined8
FUN_180208784(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x18c);
  }
  if (lVar1 == 0) {
    uVar3 = 0x10000;
    uVar2 = 0x10000;
  }
  else {
    uVar2 = FUN_1801cc3a4((ulonglong)*(ushort *)(lVar1 + 0x18) << 6,*(undefined4 *)(param_1 + 0x18c)
                         );
    uVar3 = FUN_1801cc3a4((ulonglong)*(ushort *)(lVar1 + 0x1a) << 6,*(undefined4 *)(param_1 + 0x18c)
                         );
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar3;
  }
  return 0;
}

