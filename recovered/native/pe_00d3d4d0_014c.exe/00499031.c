/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00499031 */

void __cdecl
FUN_00499031(undefined4 *param_1,char *param_2,uint param_3,char *param_4,int param_5,size_t param_6
            ,int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = FUN_004a3ade((uint *****)*param_1,param_1[1],param_6,0,(undefined4 *)&stack0xfffffff0,
                       param_4,param_5);
  uVar2 = param_3 - (iVar3 == 0x2d);
  if (param_3 == 0xffffffff) {
    uVar2 = 0xffffffff;
  }
  iVar1 = FUN_004a3934((uint *)(param_2 + (iVar3 == 0x2d)),uVar2,iVar4 + param_6,
                       (int *)&stack0xfffffff0,iVar1,param_7,param_8);
  if (iVar1 == 0) {
    FUN_00498f51(param_2,param_3,param_6,(int *)&stack0xfffffff0,'\0',param_8);
  }
  else {
    *param_2 = '\0';
  }
  return;
}

