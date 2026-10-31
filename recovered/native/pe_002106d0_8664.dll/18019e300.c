/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e300 */

undefined8 FUN_18019e300(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  iVar1 = FUN_1801cbc4f(param_2,*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30),
                        *(undefined4 *)(param_3 + 100),param_1);
  if ((iVar1 != 0) || (iVar1 = FUN_1801cc871(*param_1,0x756e6963), iVar1 != 0)) {
    return 0;
  }
  param_4 = param_4 | *(uint *)(param_3 + 0x68);
  *(uint *)(param_1 + 1) = param_4;
  uVar3 = ((param_4 & 2) << 0xe | (param_4 >> 6 & 8) + (param_4 & 1) * 2) + (param_4 & 4) * 8 ^ 8;
  *(uint *)((longlong)param_1 + 0xc) = uVar3;
  uVar2 = 0x10000;
  if (((param_4 & 8) != 0) || (uVar2 = 0x20000, (param_4 & 0x10) != 0)) {
    uVar3 = uVar3 | (uint)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
  }
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  if ((param_4 >> 8 & 1) == 0) {
    return uVar2;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar3 | 0x100000;
  return uVar2;
}

