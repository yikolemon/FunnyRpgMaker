/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd142 */

int __fastcall
FUN_101dd142(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_4 + 8);
  iVar2 = FUN_101c0692(param_2 & 0xffff,param_3,param_4,param_6);
  if (iVar2 == 0) {
    if (((uVar1 < *(uint *)(param_4 + 8)) &&
        (iVar2 = FUN_101c06e3(param_2 & 0xffff,param_5), iVar2 != 0)) &&
       (iVar2 = FUN_101dd142(param_3,param_4,param_5,param_6), iVar2 != 0)) {
      return iVar2;
    }
    iVar2 = 0;
    if (0xffff < param_2) {
      param_2 = param_2 >> 0x10;
      do {
        param_1 = param_1 + 0x10000;
        puVar3 = (undefined4 *)FUN_101c06e3(param_1,param_5);
        uVar1 = *(uint *)(param_4 + 8);
        iVar2 = FUN_101c0692(*puVar3,param_3,param_4,param_6);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (((uVar1 < *(uint *)(param_4 + 8)) && (iVar2 = FUN_101c06e3(*puVar3,param_5), iVar2 != 0)
            ) && (iVar2 = FUN_101dd142(param_3,param_4,param_5,param_6), iVar2 != 0)) {
          return iVar2;
        }
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      iVar2 = 0;
    }
  }
  return iVar2;
}

