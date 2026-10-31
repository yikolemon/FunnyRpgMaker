/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ac0ab */

uint FUN_101ac0ab(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint local_18;
  undefined8 local_14;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_18;
  if ((int)DAT_1038a920 < 0) {
    puVar3 = &DAT_10356101;
  }
  else {
    puVar3 = (&PTR_DAT_1030207c)[DAT_1038a920];
  }
  uVar4 = 0;
  cVar1 = FUN_10132c48(param_1,puVar3,0);
  if (cVar1 != '\0') {
    local_18 = 0;
    do {
      local_14 = 0;
      cVar1 = FUN_10133727((&PTR_DAT_1030207c)[uVar4],uVar4 == DAT_1038a920,0x40,&local_14);
      if (cVar1 == '\0') {
        if (uVar4 == DAT_1038a920) {
          FUN_1011262c();
        }
      }
      else {
        DAT_1038a920 = uVar4;
        if (uVar4 == 0) {
          uVar2 = FUN_101861ec(0);
        }
        else {
          if (uVar4 != 1) {
            uVar2 = FUN_10186540(0);
            local_18 = CONCAT31((int3)((uint)uVar2 >> 8),1);
            break;
          }
          uVar2 = FUN_101868b0(0);
        }
        local_18 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 3);
    FUN_101334a7();
    uVar4 = local_18;
  }
  if (DAT_10388d00 != (local_c ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4 & 0xffffff01;
}

