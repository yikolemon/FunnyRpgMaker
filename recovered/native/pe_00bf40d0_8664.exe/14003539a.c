/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003539a */

int FUN_14003539a(uint param_1,ulonglong param_2,uint param_3,uint *param_4,longlong param_5,
                 longlong param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (uint)param_2 & 0xffff;
  uVar5 = param_4[2];
  iVar2 = FUN_14001ccbb(uVar6,(ulonglong)param_3,param_4,param_6);
  if ((iVar2 == 0) &&
     (((param_4[2] <= uVar5 ||
       (puVar3 = (ulonglong *)FUN_14001ccf2(uVar6,param_5), puVar3 == (ulonglong *)0x0)) ||
      (iVar2 = FUN_14003539a(uVar6,*puVar3,param_3,param_4,param_5,param_6), iVar2 == 0)))) {
    iVar2 = 0;
    if (((short)(param_2 >> 0x10) != 0) && (uVar5 = (uint)(param_2 >> 0x10), uVar5 != 0)) {
      uVar6 = 1;
      do {
        param_1 = param_1 + 0x10000;
        puVar4 = (uint *)FUN_14001ccf2(param_1,param_5);
        uVar1 = param_4[2];
        iVar2 = FUN_14001ccbb(*puVar4,(ulonglong)param_3,param_4,param_6);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (((uVar1 < param_4[2]) &&
            (puVar3 = (ulonglong *)FUN_14001ccf2(*puVar4,param_5), puVar3 != (ulonglong *)0x0)) &&
           (iVar2 = FUN_14003539a(*puVar4,*puVar3,param_3,param_4,param_5,param_6), iVar2 != 0)) {
          return iVar2;
        }
        uVar6 = uVar6 + 1;
        iVar2 = 0;
      } while (uVar6 <= uVar5);
    }
  }
  return iVar2;
}

