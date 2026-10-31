/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004348b2 */

int __fastcall
FUN_004348b2(int param_1,uint param_2,undefined4 param_3,uint *param_4,int param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2 & 0xffff;
  uVar5 = param_4[2];
  iVar1 = FUN_0041cc82(uVar4,param_3,param_4,param_6);
  if (iVar1 == 0) {
    if (((uVar5 < param_4[2]) &&
        (puVar2 = (uint *)FUN_0041ccd3(uVar4,param_5), puVar2 != (uint *)0x0)) &&
       (iVar1 = FUN_004348b2(uVar4,*puVar2,param_3,param_4,param_5,param_6), iVar1 != 0)) {
      return iVar1;
    }
    iVar1 = 0;
    if (0xffff < param_2) {
      uVar5 = param_2 >> 0x10;
      do {
        param_1 = param_1 + 0x10000;
        piVar3 = (int *)FUN_0041ccd3(param_1,param_5);
        uVar4 = param_4[2];
        iVar1 = FUN_0041cc82(*piVar3,param_3,param_4,param_6);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (((uVar4 < param_4[2]) &&
            (puVar2 = (uint *)FUN_0041ccd3(*piVar3,param_5), puVar2 != (uint *)0x0)) &&
           (iVar1 = FUN_004348b2(*piVar3,*puVar2,param_3,param_4,param_5,param_6), iVar1 != 0)) {
          return iVar1;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      iVar1 = 0;
    }
  }
  return iVar1;
}

