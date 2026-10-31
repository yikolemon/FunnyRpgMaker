/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400448cb */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1400448cb(longlong ****param_1,void *param_2,size_t param_3)

{
  longlong ***ppplVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong ****pppplVar6;
  longlong ***local_30d8;
  longlong ***local_30d0;
  longlong local_10c0 [7];
  longlong *local_1088;
  void *local_80;
  longlong local_78;
  undefined8 local_68;
  int local_60;
  longlong ***local_58;
  undefined8 local_50;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_140044c6e(&local_80,param_1);
  if ((local_78 - (longlong)local_80 == param_3) &&
     (iVar3 = memcmp(local_80,param_2,param_3), iVar3 == 0)) {
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  else {
    FUN_140002f76();
    FUN_140002f76();
    local_68 = 0xffff00000000;
    pppplVar6 = param_1;
    if ((longlong ***)0x7 < param_1[3]) {
      pppplVar6 = (longlong ****)*param_1;
    }
    local_60 = FUN_14018a650(pppplVar6,&local_30d8,3,0xffffffff);
    FUN_140002738(&local_68,local_60,&local_30d8);
    iVar2 = local_60;
    local_50 = FUN_140002f76();
    local_58 = (longlong ***)CONCAT44(local_58._4_4_,iVar2);
    iVar3 = (int)local_68;
    if ((int)local_68 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14003cdf3("exists",&local_58,param_1);
      }
    }
    else {
      FUN_140002f76();
      if (iVar3 != 1) {
        pppplVar6 = param_1;
        if ((longlong ***)0x7 < param_1[3]) {
          pppplVar6 = (longlong ****)*param_1;
        }
        uVar5 = FUN_14018ad70(pppplVar6);
        FUN_140002f76();
        if ((uVar5 & 1) == 0) {
          local_30d0 = param_1[2];
          local_30d8 = (longlong ***)param_1;
          if ((longlong ***)0x7 < param_1[3]) {
            local_30d8 = *param_1;
          }
          FUN_140017160(&local_58,&local_30d8,&local_68);
          pppplVar6 = &local_58;
          if (0xf < local_40) {
            pppplVar6 = (longlong ****)local_58;
          }
          FUN_14003c798(&local_30d8,3,"%s: %s",&DAT_140ec206a,pppplVar6);
          FUN_14003c732(&DAT_140f2a2d8,&local_30d8);
          if (local_1088 != (longlong *)0x0) {
            (**(code **)(*local_1088 + 0x20))(local_1088,local_1088 != local_10c0);
            local_1088 = (longlong *)0x0;
          }
          FUN_14000109c(&local_58);
          local_58 = (longlong ***)param_1;
          if ((longlong ***)0x7 < param_1[3]) {
            local_58 = *param_1;
          }
          local_50 = FUN_1401aa6d0();
          FUN_140057b48(&local_30d8,&local_58);
          ppplVar1 = local_30d0;
          for (pppplVar6 = (longlong ****)local_30d8; pppplVar6 != (longlong ****)ppplVar1;
              pppplVar6 = (longlong ****)((longlong)pppplVar6 + 4)) {
            FUN_140057e78(*(undefined4 *)pppplVar6);
          }
          FUN_1400022f6(&local_30d8);
        }
      }
    }
    uVar4 = FUN_140044db9(param_1,param_2,param_3);
    uVar5 = (ulonglong)uVar4;
  }
  FUN_1400022f6(&local_80);
  return uVar5 & 0xffffffff;
}

