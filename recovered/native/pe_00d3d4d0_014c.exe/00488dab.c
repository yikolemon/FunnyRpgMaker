/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488dab */

undefined4 __cdecl
FUN_00488dab(uint param_1,undefined4 param_2,undefined2 ****param_3,int param_4,int param_5,
            undefined4 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int local_2c [5];
  undefined4 uStack_18;
  
  FUN_00488e30(local_2c,param_6);
  uVar1 = FUN_0048913b(param_1,param_2,param_3,param_4,param_5,local_2c,param_7);
  uStack_18 = 0x488de7;
  FUN_00488e90(local_2c);
  return uVar1;
}

