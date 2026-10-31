/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1fe8 */

undefined8 FUN_1801e1fe8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_1801cc871(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_1801e69ed(param_1,param_2);
    iVar2 = FUN_1801e6d53(param_1,param_2);
    uVar3 = 0xffffffff;
    if (iVar2 != 0) goto LAB_1801e2045;
    FUN_1801e3a3a(param_1);
  }
  FUN_1801e78b2(param_1 + 0x38,param_1);
  uVar3 = 0;
LAB_1801e2045:
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return uVar3;
}

