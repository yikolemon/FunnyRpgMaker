/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d6e40 */

void FUN_100d6e40(uint ***param_1,uint ***param_2,uint param_3)

{
  uint **ppuVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint ***pppuVar7;
  uint ***pppuVar8;
  uint ***local_60;
  uint **local_5c;
  uint **local_58;
  undefined1 local_54;
  undefined1 local_50;
  uint **local_4c;
  uint **local_48;
  int local_44;
  undefined1 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined1 local_34;
  uint **local_28;
  uint **local_24;
  undefined1 local_20;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  iVar6 = (int)param_2 - (int)param_1;
  pppuVar7 = param_1;
  pppuVar8 = local_60;
  do {
    local_60 = pppuVar7;
    if (iVar6 < 0x101) {
      if ((local_60 != param_2) && (local_60 + 2 != param_2)) {
        pppuVar7 = local_60 + 2;
        iVar6 = 8;
        do {
          local_44 = iVar6;
          local_4c = (uint **)pppuVar7;
          ppuVar1 = (uint **)*local_4c;
          ppuVar2 = (uint **)local_4c[1];
          iVar6 = local_44;
          do {
            ppuVar3 = *(uint ***)((int)local_60 + iVar6 + -8);
            iVar4 = *(int *)((int)local_60 + iVar6 + -4);
            uVar5 = (uint)(ppuVar1 < ppuVar3);
            if ((SBORROW4((int)ppuVar2,iVar4) != SBORROW4((int)ppuVar2 - iVar4,uVar5)) ==
                (int)(((int)ppuVar2 - iVar4) - uVar5) < 0) {
              pppuVar7 = (uint ***)(iVar6 + (int)local_60);
              break;
            }
            *(uint ***)((int)local_60 + iVar6) = ppuVar3;
            *(int *)((int)local_60 + iVar6 + 4) = iVar4;
            iVar6 = iVar6 + -8;
            pppuVar7 = local_60;
          } while (iVar6 != 0);
          *pppuVar7 = ppuVar1;
          pppuVar7[1] = ppuVar2;
          pppuVar7 = (uint ***)(local_4c + 2);
          iVar6 = local_44 + 8;
          local_48 = (uint **)param_2;
        } while ((uint ***)(local_4c + 2) != param_2);
      }
LAB_100d6fda:
      local_60 = pppuVar8;
      if (DAT_10388d00 == (local_14 ^ (uint)&local_60)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    if ((int)param_3 < 1) {
      local_58._1_3_ = (undefined3)((uint)local_58 >> 8);
      local_58 = (uint **)CONCAT31(local_58._1_3_,local_20);
      local_5c = (uint **)param_2;
      local_4c = (uint **)local_60;
      FUN_100d6ffd();
      iVar6 = (int)param_2 - (int)local_4c;
      do {
        local_54 = local_28._0_1_;
        local_58 = (uint **)CONCAT31(local_58._1_3_,local_18);
        local_60 = (uint ***)local_4c;
        local_5c = (uint **)param_2;
        FUN_100d720a();
        param_2 = param_2 + -2;
        iVar6 = iVar6 + -8;
        pppuVar8 = local_60;
      } while (8 < iVar6);
      goto LAB_100d6fda;
    }
    local_5c = (uint **)local_60;
    local_60 = &local_28;
    local_58 = (uint **)param_2;
    local_4c = local_5c;
    FUN_100d7092();
    pppuVar7 = (uint ***)local_24;
    pppuVar8 = (uint ***)local_28;
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    local_58 = (uint **)param_3;
    if ((int)local_28 - (int)local_4c < (int)param_2 - (int)local_24) {
      local_50 = local_34;
      local_54 = local_38;
      local_5c = local_28;
      local_60 = (uint ***)local_4c;
      FUN_100d6e40();
      pppuVar8 = param_2;
    }
    else {
      local_50 = local_3c;
      local_54 = local_40;
      local_60 = (uint ***)local_24;
      local_5c = (uint **)param_2;
      FUN_100d6e40();
      pppuVar7 = (uint ***)local_4c;
    }
    iVar6 = (int)pppuVar8 - (int)pppuVar7;
    param_2 = pppuVar8;
    pppuVar8 = local_60;
  } while( true );
}

