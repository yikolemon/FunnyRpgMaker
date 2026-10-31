/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f338 */

undefined8 FUN_14002f338(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 8) = (uint)*(ushort *)(param_2 + 0x68);
  uVar2 = FUN_14001f1cc(param_2,0x756e6963);
  if ((int)uVar2 == 0) {
    FUN_1400308af(param_1,param_2);
    FUN_140030c03(param_1,param_2);
    FUN_14003106e(param_1);
  }
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return 0;
}

