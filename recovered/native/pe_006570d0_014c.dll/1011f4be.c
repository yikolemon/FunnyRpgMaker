/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011f4be */

int __thiscall FUN_1011f4be(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)&stack0x0000000c;
    iVar1 = param_1;
  }
  else {
    iVar1 = FUN_100fa4b1(param_1,0x1e,"#%03d: ",*param_2);
    param_2 = param_2 + 4;
    iVar1 = iVar1 + param_1;
  }
  uVar2 = FUN_1011e14d(*param_2,param_2[1]);
  FUN_100fa4b1(iVar1,(param_1 - iVar1) + 0x1e,"0x%X",uVar2);
  return param_1;
}

