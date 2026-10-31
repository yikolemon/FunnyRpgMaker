/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10065c7c */

void FUN_10065c7c(uint ***param_1,uint ***param_2,uint param_3)

{
  uint ***pppuVar1;
  uint **ppuVar2;
  int iVar3;
  uint ***pppuVar4;
  uint ***pppuVar5;
  uint ***pppuVar6;
  uint ***local_64;
  uint **local_60;
  uint **local_5c;
  undefined1 local_58;
  undefined1 local_54;
  uint **local_50;
  uint **local_4c;
  uint *local_48;
  uint *local_44;
  undefined1 local_40;
  undefined1 local_3c;
  undefined1 local_38;
  undefined1 local_34;
  uint **local_28;
  uint **local_24;
  undefined1 local_20;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_64;
  iVar3 = (int)param_2 - (int)param_1;
  do {
    if (iVar3 < 0x18c) {
      if ((param_1 != param_2) && (param_1 + 3 != param_2)) {
        pppuVar4 = (uint ***)0xc;
        pppuVar5 = param_1;
        pppuVar6 = param_1 + 3;
        do {
          local_50 = (uint **)pppuVar4;
          ppuVar2 = pppuVar5[3];
          local_44 = (uint *)pppuVar5[4];
          local_48 = (uint *)pppuVar5[5];
          pppuVar4 = (uint ***)local_50;
          do {
            pppuVar5 = (uint ***)((int)param_1 + (int)pppuVar4);
            if (*(uint ***)((int)(param_1 + -3) + (int)pppuVar4) <= ppuVar2) break;
            pppuVar5[2] = *(uint ***)((int)param_1 + (int)pppuVar4 + -4);
            *(undefined8 *)pppuVar5 = *(undefined8 *)((int)param_1 + (int)pppuVar4 + -0xc);
            pppuVar4 = pppuVar4 + -3;
            pppuVar5 = param_1;
          } while (pppuVar4 != (uint ***)0x0);
          *pppuVar5 = ppuVar2;
          pppuVar5[1] = (uint **)local_44;
          pppuVar5[2] = (uint **)local_48;
          pppuVar1 = pppuVar6 + 3;
          pppuVar4 = (uint ***)(local_50 + 3);
          pppuVar5 = pppuVar6;
          pppuVar6 = pppuVar1;
          local_4c = (uint **)param_2;
        } while (pppuVar1 != param_2);
      }
LAB_10065e2d:
      if (DAT_10388d00 == (local_14 ^ (uint)&local_64)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    if ((int)param_3 < 1) {
      local_5c._1_3_ = (undefined3)((uint)local_5c >> 8);
      local_5c = (uint **)CONCAT31(local_5c._1_3_,local_20);
      local_64 = param_1;
      local_60 = (uint **)param_2;
      FUN_10065e50();
      iVar3 = (int)param_2 - (int)param_1;
      do {
        local_58 = local_28._0_1_;
        local_5c = (uint **)CONCAT31(local_5c._1_3_,local_18);
        local_64 = param_1;
        local_60 = (uint **)param_2;
        FUN_1006607f();
        param_2 = param_2 + -3;
        iVar3 = iVar3 + -0xc;
      } while (0xc < iVar3);
      goto LAB_10065e2d;
    }
    local_64 = &local_28;
    local_60 = (uint **)param_1;
    local_5c = (uint **)param_2;
    local_50 = (uint **)param_1;
    local_4c = (uint **)param_2;
    FUN_10065eff();
    param_1 = (uint ***)local_24;
    pppuVar4 = (uint ***)local_28;
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    local_5c = (uint **)param_3;
    if ((int)local_28 - (int)local_50 < (int)param_2 - (int)local_24) {
      local_54 = local_34;
      local_58 = local_38;
      local_60 = local_28;
      local_64 = (uint ***)local_50;
      FUN_10065c7c();
      pppuVar4 = (uint ***)local_4c;
    }
    else {
      local_54 = local_3c;
      local_58 = local_40;
      local_60 = local_4c;
      local_64 = (uint ***)local_24;
      FUN_10065c7c();
      param_1 = (uint ***)local_50;
    }
    iVar3 = (int)pppuVar4 - (int)param_1;
    param_2 = pppuVar4;
  } while( true );
}

