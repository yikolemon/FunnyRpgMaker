/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004990ba */

void __cdecl
FUN_004990ba(undefined4 *param_1,char *param_2,uint param_3,char *param_4,int param_5,size_t param_6
            ,char param_7,int param_8,int param_9,int *param_10)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  iVar2 = FUN_004a3ade((uint *****)*param_1,param_1[1],param_6,0,(undefined4 *)&stack0xffffffec,
                       param_4,param_5);
  iVar4 = iVar7 + -1;
  uVar3 = param_3 - (iVar6 == 0x2d);
  if (param_3 == 0xffffffff) {
    uVar3 = 0xffffffff;
  }
  iVar2 = FUN_004a3934((uint *)(param_2 + (iVar6 == 0x2d)),uVar3,param_6,(int *)&stack0xffffffec,
                       iVar2,param_9,param_10);
  if (iVar2 == 0) {
    iVar7 = iVar7 + -1;
    if ((iVar7 < -4) || ((int)param_6 <= iVar7)) {
      FUN_004988fd(param_2,param_3,param_6,param_7,param_8,(int *)&stack0xffffffec,1,param_10);
    }
    else {
      puVar1 = (uint *)(param_2 + (iVar6 == 0x2d));
      if (iVar4 < iVar7) {
        do {
          puVar5 = puVar1;
          puVar1 = (uint *)((int)puVar5 + 1);
        } while ((char)*puVar5 != '\0');
        *(undefined1 *)((int)puVar5 + -1) = 0;
      }
      FUN_00498f51(param_2,param_3,param_6,(int *)&stack0xffffffec,'\x01',param_10);
    }
  }
  else {
    *param_2 = '\0';
  }
  return;
}

