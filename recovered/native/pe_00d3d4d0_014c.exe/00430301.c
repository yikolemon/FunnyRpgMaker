/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00430301 */

void __cdecl
FUN_00430301(int param_1,uint *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042fab9(*(int *)(param_1 + 0x24));
  if ((char)uVar1 == '\0') {
    FUN_004303d8(param_1,param_2,(int)param_4,param_5);
  }
  else {
    FUN_00430344(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

