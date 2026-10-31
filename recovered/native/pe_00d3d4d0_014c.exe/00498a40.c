/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00498a40 */

void __cdecl
FUN_00498a40(undefined4 *param_1,char *param_2,uint param_3,char *param_4,int param_5,int param_6,
            char param_7,int param_8,int param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  int in_stack_fffffff0;
  
  iVar1 = FUN_004a3ade((uint *****)*param_1,param_1[1],param_6 + 1,1,(undefined4 *)&stack0xfffffff0,
                       param_4,param_5);
  uVar2 = (param_3 - (0 < param_6)) - (uint)(in_stack_fffffff0 == 0x2d);
  if (param_3 == 0xffffffff) {
    uVar2 = 0xffffffff;
  }
  iVar1 = FUN_004a3934((uint *)(param_2 + (uint)(0 < param_6) + (uint)(in_stack_fffffff0 == 0x2d)),
                       uVar2,param_6 + 1,(int *)&stack0xfffffff0,iVar1,param_9,param_10);
  if (iVar1 == 0) {
    FUN_004988fd(param_2,param_3,param_6,param_7,param_8,(int *)&stack0xfffffff0,0,param_10);
  }
  else {
    *param_2 = '\0';
  }
  return;
}

