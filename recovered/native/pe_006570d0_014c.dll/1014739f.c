/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014739f */

void FUN_1014739f(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float local_44;
  int local_40;
  uint local_3c;
  float local_38;
  undefined1 local_34 [12];
  undefined1 auStack_28 [4];
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_44;
  if ((((param_2 & 0x6000000) != 0) && ((param_2 & 0x40002) != 0)) ||
     (cVar1 = FUN_10116736("context",0), iVar3 = DAT_1039d74c, cVar1 == '\0')) goto LAB_101475c7;
  FUN_1011177d(0x10000,1);
  if ((param_2 & 0x6000000) == 0) {
    local_3c = param_2 & 2;
    local_44 = *(float *)(iVar3 + 0x1228) * DAT_102b8f18;
    fVar6 = (float10)FUN_101155f9();
    local_38 = (float)fVar6;
    fVar6 = (float10)FUN_100fdbca(local_44 - (local_38 + *(float *)(iVar3 + 0xd24)),0x3f800000);
    local_40 = iVar3;
    local_1c = DAT_102b8f18 * *(float *)(iVar3 + 0x1228);
    local_18 = (float)fVar6;
    uVar2 = FUN_1011520a(local_1c);
    local_44 = (float)CONCAT31((int3)((uint)uVar2 >> 8),1);
    iVar3 = 0;
    uVar2 = 0;
    do {
      if ((char)iVar3 != '\0') {
        FUN_10132188();
      }
      FUN_10113358(uVar2);
      uVar5 = iVar3 * 0x4000000 + ((uint)local_44 & 1) * 0x2000000 + local_3c + 0x1a8;
      FUN_10114f9f(local_24);
      cVar1 = FUN_10133727("##selectable",0,0,&local_1c);
      if (cVar1 != '\0') {
        *(uint *)(local_40 + 0x2560) = uVar5 & 0x6000000 | *(uint *)(local_40 + 0x2560) & 0xf9ffffff
        ;
      }
      FUN_10114fbc(local_24);
      uVar4 = (uint)((uVar5 & 2) == 0);
      _memset(auStack_28 + uVar4 * 4,0,uVar5 * 2 & 4);
      FUN_1025b2d0(local_34,param_1,uVar4 * 4 + 0xc);
      FUN_10145288("##previewing_picker",local_34,uVar5,0);
      FUN_10113568();
      iVar3 = 1;
      uVar2 = 1;
      uVar5 = (uint)local_44 & 1;
      local_44 = 0.0;
    } while (uVar5 != 0);
    FUN_101154f4();
    iVar3 = local_40;
    if ((param_2 & 0x40002) == 0) {
      FUN_10132188();
      goto LAB_101475a4;
    }
  }
  else if ((param_2 & 0x40002) == 0) {
LAB_101475a4:
    thunk_FUN_10130d81("Alpha Bar",iVar3 + 0x2560,0x40000);
  }
  FUN_10111839();
  FUN_101165cb();
LAB_101475c7:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_44)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

