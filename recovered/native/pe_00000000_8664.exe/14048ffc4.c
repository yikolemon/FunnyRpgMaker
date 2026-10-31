/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048ffc4 */

undefined4 FUN_14048ffc4(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1404a2100(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1404838d0();
    uVar1 = FUN_14048fed8(param_1,param_2,param_3,param_4);
    FUN_1404838dc(param_1);
  }
  return uVar1;
}

