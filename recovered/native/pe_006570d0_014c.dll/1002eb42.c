/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002eb42 */

void FUN_1002eb42(uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,uint param_7,uint param_8,int *param_9,int *param_10)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *local_2b0;
  uint local_2ac;
  int local_2a8;
  code *local_2a4;
  undefined4 local_2a0 [33];
  undefined4 local_21c;
  undefined4 *local_218;
  uint local_214;
  int local_210;
  code *local_20c;
  undefined4 local_208 [33];
  undefined4 local_184;
  undefined4 *local_180;
  uint local_17c;
  int local_178;
  code *local_174;
  undefined4 local_170 [33];
  undefined4 local_ec;
  undefined1 local_e8 [12];
  undefined1 *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined1 local_cc [132];
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 **local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 **local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2b0;
  local_18 = &LAB_100599c0;
  local_1c = ExceptionList;
  local_38 = param_1;
  local_30 = param_2;
  local_40 = param_4;
  local_dc = local_cc;
  local_d8 = 0;
  local_d0 = FUN_1002f980;
  local_d4 = 0x20;
  local_48 = 0;
  local_34 = param_3;
  local_24 = param_5;
  local_180 = local_170;
  local_17c = 0;
  local_174 = FUN_1002f980;
  local_178 = 0x20;
  local_ec = 0;
  local_218 = local_208;
  local_214 = 0;
  local_20c = FUN_1002f980;
  local_210 = 0x20;
  local_184 = 0;
  local_2b0 = local_2a0;
  local_2ac = 0;
  local_2a4 = FUN_1002f980;
  local_2a8 = 0x20;
  local_21c = 0;
  local_14 = 7;
  local_28 = param_7 & 1;
  local_3c = (undefined4 **)(local_28 + 1);
  ExceptionList = &local_1c;
  if (param_5 < 0) {
    if (*param_10 < 0) {
      FUN_1002f596(-*param_10);
      FUN_1002f636(&local_dc);
      local_2c = (undefined4 **)0x0;
      if (local_28 != 0) {
        local_2c = &local_2b0;
        FUN_1002f636(&local_dc);
        FUN_1002f4fa(1);
      }
      FUN_1002fd2e(local_38,local_30,local_34,local_40);
      FUN_1002f4fa(local_3c);
      *local_180 = 1;
      if (local_178 == 0) {
        (*local_174)(&local_180,1);
        local_17c = (uint)(local_178 != 0);
      }
      else {
        local_17c = 1;
      }
      local_ec = 0;
      FUN_1002f4fa((int)local_3c - local_24);
    }
    else {
      local_20 = (undefined1 *)&local_2b0;
      FUN_1002f9ee(param_1,param_2,param_3,param_4);
      FUN_1002f4fa(local_28 + 1);
      FUN_1002f596(*param_10);
      FUN_1002f4fa((local_28 + 1) - local_24);
      *local_218 = 1;
      if (local_210 == 0) {
        (*local_20c)(&local_218,1);
        local_214 = (uint)(local_210 != 0);
      }
      else {
        local_214 = 1;
      }
      local_2c = (undefined4 **)0x0;
      local_184 = 0;
      if (local_28 != 0) {
        *local_2b0 = 2;
        if (local_2a8 == 0) {
          (*local_2a4)(&local_2b0,1);
          local_2ac = (uint)(local_2a8 != 0);
        }
        else {
          local_2ac = 1;
        }
        local_2c = &local_2b0;
        local_21c = 0;
      }
    }
  }
  else {
    local_20 = (undefined1 *)&local_2b0;
    FUN_1002f9ee(param_1,param_2,param_3,param_4);
    FUN_1002f4fa(local_24 + local_28 + 1);
    *local_218 = 1;
    if (local_210 == 0) {
      (*local_20c)(&local_218,1);
      local_214 = (uint)(local_210 != 0);
    }
    else {
      local_214 = 1;
    }
    local_184 = 0;
    FUN_1002f4fa(local_24);
    local_2c = (undefined4 **)0x0;
    if (local_28 != 0) {
      *local_2b0 = 1;
      if (local_2a8 == 0) {
        (*local_2a4)(&local_2b0,1);
        local_2ac = (uint)(local_2a8 != 0);
      }
      else {
        local_2ac = 1;
      }
      local_2c = &local_2b0;
      local_21c = 0;
      FUN_1002f4fa(local_24 + 1);
    }
    FUN_1002f596(*param_10);
    FUN_1002f4fa(local_3c);
  }
  local_38 = local_38 & 1;
  local_34 = local_38 ^ 1;
  local_3c = local_2c;
  if (local_2c == (undefined4 **)0x0) {
    local_3c = &local_218;
  }
  uVar5 = param_8;
  if ((param_7 & 2) != 0) {
    iVar3 = FUN_1002f68a(&local_dc,local_3c,&local_180);
    if (iVar3 + local_34 == 0 || SCARRY4(iVar3,local_34) != (int)(iVar3 + local_34) < 0) {
      *param_10 = *param_10 + -1;
      FUN_1002fe68(10);
      if ((int)param_8 < 0) {
        FUN_1002fe68(10);
        if (local_2c != (undefined4 **)0x0) {
          FUN_1002fe68(10);
        }
      }
    }
    if ((param_7 & 4) != 0) {
      iVar3 = *param_10;
      if (0x7ffffffe - iVar3 < (int)param_8 && -1 < iVar3) {
        FUN_10025774();
                    /* WARNING: Subroutine does not return */
        FUN_102586e0(local_e8,&DAT_103607ac);
      }
      uVar5 = param_8 + iVar3 + 1;
    }
  }
  if (-1 < (int)param_8) {
    local_28 = uVar5 - 1;
    *param_10 = *param_10 - local_28;
    if ((int)uVar5 < 1) {
      local_24 = CONCAT31(local_24._1_3_,0x30);
      if (uVar5 == 0) {
        FUN_1002fe68(10);
        iVar3 = FUN_1002f68a(&local_dc,&local_dc,&local_180);
        local_24 = CONCAT31(local_24._1_3_,0 < iVar3) | 0x30;
      }
      iVar3 = param_9[1];
      uVar5 = iVar3 + 1;
      if ((uint)param_9[2] < uVar5) {
        (*(code *)param_9[3])(param_9,uVar5);
        iVar3 = param_9[1];
        uVar5 = iVar3 + 1;
      }
      param_9[1] = uVar5;
      *(undefined1 *)(*param_9 + iVar3) = (undefined1)local_24;
    }
    else {
      uVar4 = param_9[2];
      local_30 = uVar5;
      if (uVar4 < uVar5) {
        (*(code *)param_9[3])(param_9,uVar5);
        uVar4 = param_9[2];
      }
      if (local_30 < uVar4) {
        uVar4 = local_30;
      }
      param_9[1] = uVar4;
      for (local_24 = 0; (int)local_24 < (int)local_28; local_24 = local_24 + 1) {
        cVar2 = FUN_1002f834(&local_180);
        *(char *)(*param_9 + local_24) = cVar2 + '0';
        FUN_1002fe68(10);
      }
      local_24 = FUN_1002f834(&local_180);
      iVar3 = FUN_1002f68a(&local_dc,&local_dc,&local_180);
      if ((0 < iVar3) || (uVar5 = local_24, (local_24 & 1) != 0 && iVar3 == 0)) {
        if (local_24 == 9) {
          *(undefined1 *)(*param_9 + -1 + local_30) = 0x3a;
          if (local_30 != 1) {
            iVar3 = local_30 + 1;
            do {
              if (*(char *)(*param_9 + -2 + iVar3) != ':') break;
              *(undefined1 *)(*param_9 + -2 + iVar3) = 0x30;
              pcVar1 = (char *)(*param_9 + -3 + iVar3);
              *pcVar1 = *pcVar1 + '\x01';
              iVar3 = iVar3 + -1;
            } while (2 < iVar3);
          }
          if (*(char *)*param_9 == ':') {
            *(char *)*param_9 = '1';
            if ((param_7 & 4) == 0) {
              *param_10 = *param_10 + 1;
            }
            else {
              iVar3 = param_9[1];
              uVar5 = iVar3 + 1;
              if ((uint)param_9[2] < uVar5) {
                local_14 = 7;
                (*(code *)param_9[3])(param_9,uVar5);
                iVar3 = param_9[1];
                uVar5 = iVar3 + 1;
              }
              param_9[1] = uVar5;
              *(undefined1 *)(*param_9 + iVar3) = 0x30;
            }
          }
          goto code_r0x1002f207;
        }
        uVar5 = local_24 + 1;
      }
      *(char *)(*param_9 + local_28) = (char)uVar5 + '0';
    }
    goto code_r0x1002f207;
  }
  local_44 = *param_9;
  local_24 = 0;
  while( true ) {
    local_30 = FUN_1002f834(&local_180);
    local_40 = FUN_1002f878(&local_dc,&local_218);
    iVar3 = FUN_1002f68a(&local_dc,local_3c,&local_180);
    *(char *)(local_44 + local_24) = (char)local_30 + '0';
    local_28 = local_24 + 1;
    if ((local_40 < (int)local_34) || ((int)local_38 <= iVar3)) break;
    FUN_1002fe68(10);
    FUN_1002fe68(10);
    local_24 = local_28;
    if (local_2c != (undefined4 **)0x0) {
      FUN_1002fe68(10);
      local_24 = local_28;
    }
  }
  if (local_40 < (int)local_34) {
    if ((int)local_38 <= iVar3) {
      iVar3 = FUN_1002f68a(&local_dc,&local_dc,&local_180);
      if ((0 < iVar3) || ((local_30 & 1) != 0 && iVar3 == 0)) {
        cVar2 = *(char *)(local_44 + local_24) + '\x01';
        goto code_r0x1002f1ba;
      }
    }
  }
  else {
    cVar2 = (char)local_30 + '1';
code_r0x1002f1ba:
    *(char *)(local_44 + local_24) = cVar2;
  }
  uVar5 = param_9[2];
  if (uVar5 <= local_24) {
    (*(code *)param_9[3])(param_9,local_28);
    uVar5 = param_9[2];
  }
  if (local_28 < uVar5) {
    uVar5 = local_28;
  }
  param_9[1] = uVar5;
  *param_10 = *param_10 - local_24;
code_r0x1002f207:
  local_14 = 0xffffffff;
  if (local_2b0 != local_2a0) {
    thunk_FUN_10274120(local_2b0);
  }
  local_14 = 0xffffffff;
  if (local_218 != local_208) {
    thunk_FUN_10274120(local_218);
  }
  local_14 = 0xffffffff;
  if (local_180 != local_170) {
    thunk_FUN_10274120(local_180);
  }
  local_14 = 0xffffffff;
  if (local_dc != local_cc) {
    thunk_FUN_10274120(local_dc);
  }
  ExceptionList = local_1c;
  return;
}

