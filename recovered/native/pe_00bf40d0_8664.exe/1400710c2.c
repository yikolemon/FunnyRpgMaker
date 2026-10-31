/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400710c2 */

undefined8 FUN_1400710c2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x636d6170,param_2,(undefined4 *)(param_1 + 0x298))
  ;
  if ((int)uVar1 == 0) {
    uVar1 = FUN_140021039(param_2,*(uint *)(param_1 + 0x298),(longlong *)(param_1 + 0x290));
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x298) = 0;
    }
  }
  return uVar1;
}

