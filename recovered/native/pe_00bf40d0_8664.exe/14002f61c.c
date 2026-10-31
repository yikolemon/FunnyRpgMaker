/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f61c */

undefined8 FUN_14002f61c(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 8) = (uint)*(ushort *)(param_2 + 0x68);
  uVar2 = FUN_14001f1cc(param_2,0x756e6963);
  if ((int)uVar2 == 0) {
    FUN_140034021(param_1,param_2);
    uVar2 = FUN_140034387(param_1,param_2);
    uVar3 = 0xffffffff;
    if ((int)uVar2 != 0) goto LAB_14002f679;
    FUN_14003106e(param_1);
  }
  FUN_140034ee6(param_1 + 7,param_1);
  uVar3 = 0;
LAB_14002f679:
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return uVar3;
}

