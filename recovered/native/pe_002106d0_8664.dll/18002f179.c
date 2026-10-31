/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002f179 */

void FUN_18002f179(uint *param_1,uint param_2,uint param_3,longlong *param_4,int *param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *local_348;
  ulonglong local_340;
  longlong local_338;
  code *local_330;
  undefined4 local_328 [34];
  undefined4 local_2a0;
  undefined4 *local_298;
  ulonglong local_290;
  longlong local_288;
  code *local_280;
  undefined4 local_278 [34];
  undefined4 local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  code *local_1d0;
  undefined1 local_1c8 [136];
  undefined4 local_140;
  undefined4 *local_138;
  ulonglong local_130;
  longlong local_128;
  code *local_120;
  undefined4 local_118 [34];
  undefined4 local_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 **local_70;
  longlong local_68;
  uint local_60;
  uint local_5c;
  undefined4 **local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_1e8 = local_1c8;
  local_1e0 = 0;
  local_1d0 = FUN_18003005e;
  local_1d8 = 0x20;
  local_140 = 0;
  local_138 = local_118;
  local_130 = 0;
  local_120 = FUN_18003005e;
  local_128 = 0x20;
  local_90 = 0;
  local_298 = local_278;
  local_290 = 0;
  local_280 = FUN_18003005e;
  local_288 = 0x20;
  local_1f0 = 0;
  local_348 = local_328;
  local_340 = 0;
  local_330 = FUN_18003005e;
  local_338 = 0x20;
  local_2a0 = 0;
  uVar10 = param_2 & 1;
  iVar3 = uVar10 + 1;
  local_50 = param_4;
  if ((int)param_1[4] < 0) {
    if (*param_5 < 0) {
      FUN_18002fcbc(&local_1e8,-*param_5);
      FUN_18002fd7e(&local_298,&local_1e8);
      if (uVar10 == 0) {
        local_58 = (undefined4 **)0x0;
      }
      else {
        local_58 = &local_348;
        FUN_18002fd7e(local_58,&local_1e8);
        FUN_18002fc2a(&local_348,1);
      }
      local_88 = *param_1;
      uStack_84 = param_1[1];
      uStack_80 = param_1[2];
      uStack_7c = param_1[3];
      FUN_180030428(&local_1e8);
      FUN_18002fc2a(&local_1e8,iVar3);
      *local_138 = 1;
      uVar5 = 1;
      if (local_128 == 0) {
        (*local_120)(&local_138,1);
        uVar5 = (ulonglong)(local_128 != 0);
      }
      local_90 = 0;
      local_130 = uVar5;
      FUN_18002fc2a(&local_138,iVar3 - param_1[4]);
    }
    else {
      local_88 = *param_1;
      uStack_84 = param_1[1];
      uStack_80 = param_1[2];
      uStack_7c = param_1[3];
      FUN_1800300ee(&local_1e8);
      FUN_18002fc2a(&local_1e8,iVar3);
      FUN_18002fcbc(&local_138,*param_5);
      FUN_18002fc2a(&local_138,iVar3 - param_1[4]);
      *local_298 = 1;
      uVar5 = 1;
      if (local_288 == 0) {
        (*local_280)(&local_298,1);
        uVar5 = (ulonglong)(local_288 != 0);
      }
      local_1f0 = 0;
      local_290 = uVar5;
      if (uVar10 == 0) {
        local_58 = (undefined4 **)0x0;
      }
      else {
        *local_348 = 2;
        uVar5 = 1;
        if (local_338 == 0) {
          (*local_330)(&local_348,1);
          uVar5 = (ulonglong)(local_338 != 0);
        }
        local_58 = &local_348;
        local_2a0 = 0;
        local_340 = uVar5;
      }
    }
  }
  else {
    local_88 = *param_1;
    uStack_84 = param_1[1];
    uStack_80 = param_1[2];
    uStack_7c = param_1[3];
    FUN_1800300ee(&local_1e8);
    FUN_18002fc2a(&local_1e8,param_1[4] + iVar3);
    *local_298 = 1;
    uVar5 = 1;
    if (local_288 == 0) {
      (*local_280)(&local_298,1);
      uVar5 = (ulonglong)(local_288 != 0);
    }
    local_1f0 = 0;
    local_290 = uVar5;
    FUN_18002fc2a(&local_298,param_1[4]);
    if (uVar10 == 0) {
      local_58 = (undefined4 **)0x0;
    }
    else {
      *local_348 = 1;
      uVar5 = 1;
      if (local_338 == 0) {
        (*local_330)(&local_348,1);
        uVar5 = (ulonglong)(local_338 != 0);
      }
      local_58 = &local_348;
      local_2a0 = 0;
      local_340 = uVar5;
      FUN_18002fc2a(local_58,param_1[4] + 1);
    }
    FUN_18002fcbc(&local_138,*param_5);
    FUN_18002fc2a(&local_138,iVar3);
  }
  local_60 = *param_1 & 1;
  local_5c = local_60 ^ 1;
  local_70 = &local_298;
  if (local_58 != (undefined4 **)0x0) {
    local_70 = local_58;
  }
  uVar10 = param_3;
  if ((param_2 & 2) != 0) {
    iVar3 = FUN_18002fde9(&local_1e8,local_70,&local_138);
    if (iVar3 + local_5c == 0 || SCARRY4(iVar3,local_5c) != (int)(iVar3 + local_5c) < 0) {
      *param_5 = *param_5 + -1;
      FUN_18003057c(&local_1e8,10);
      if ((int)param_3 < 0) {
        FUN_18003057c(&local_298,10);
        if (local_58 != (undefined4 **)0x0) {
          FUN_18003057c(local_58,10);
        }
      }
    }
    if ((param_2 & 4) != 0) {
      iVar3 = *param_5;
      if (0x7ffffffe - iVar3 < (int)param_3 && -1 < iVar3) {
        FUN_180025c48(&local_88,"number is too big");
                    /* WARNING: Subroutine does not return */
        FUN_18026d5b0(&local_88,&DAT_180391580);
      }
      uVar10 = param_3 + iVar3 + 1;
    }
  }
  if ((int)param_3 < 0) {
    local_68 = *local_50;
    uVar5 = 0;
    while( true ) {
      bVar8 = FUN_18002ff36(&local_1e8,&local_138);
      iVar3 = FUN_18002ff83(&local_1e8,&local_298);
      iVar4 = FUN_18002fde9(&local_1e8,local_70,&local_138);
      uVar9 = uVar5 + 1;
      *(byte *)(local_68 + uVar5) = bVar8 + 0x30;
      if ((iVar3 < (int)local_5c) || ((int)local_60 <= iVar4)) break;
      FUN_18003057c(&local_1e8,10);
      FUN_18003057c(&local_298,10);
      uVar5 = uVar9 & 0xffffffff;
      if (local_58 != (undefined4 **)0x0) {
        FUN_18003057c(local_58,10);
        uVar5 = uVar9 & 0xffffffff;
      }
    }
    if (iVar3 < (int)local_5c) {
      if ((int)local_60 <= iVar4) {
        iVar3 = FUN_18002fde9(&local_1e8,&local_1e8,&local_138);
        if ((0 < iVar3) || ((bVar8 & 1) != 0 && iVar3 == 0)) {
          pcVar1 = (char *)(local_68 + -1 + uVar9);
          *pcVar1 = *pcVar1 + '\x01';
        }
      }
    }
    else {
      *(byte *)(local_68 + -1 + uVar9) = bVar8 + 0x31;
    }
    uVar9 = uVar9 & 0xffffffff;
    uVar6 = local_50[2];
    if (uVar6 < uVar9) {
      (*(code *)local_50[3])(local_50,uVar9);
      uVar6 = local_50[2];
    }
    if (uVar9 < uVar6) {
      uVar6 = uVar9;
    }
    local_50[1] = uVar6;
    *param_5 = *param_5 - (int)uVar5;
  }
  else {
    lVar7 = (longlong)(int)uVar10 + -1;
    *param_5 = *param_5 - (int)lVar7;
    if ((int)uVar10 < 1) {
      bVar8 = 0x30;
      if (uVar10 == 0) {
        FUN_18003057c(&local_138,10);
        iVar3 = FUN_18002fde9(&local_1e8,&local_1e8,&local_138);
        bVar8 = 0 < iVar3 | 0x30;
      }
      lVar7 = local_50[1];
      uVar5 = lVar7 + 1;
      if ((ulonglong)local_50[2] < uVar5) {
        (*(code *)local_50[3])();
        lVar7 = local_50[1];
        uVar5 = lVar7 + 1;
      }
      local_50[1] = uVar5;
      *(byte *)(*local_50 + lVar7) = bVar8;
    }
    else {
      uVar9 = (ulonglong)uVar10;
      uVar5 = local_50[2];
      if (uVar5 < uVar9) {
        (*(code *)local_50[3])(local_50,uVar9);
        uVar5 = local_50[2];
      }
      if (uVar9 < uVar5) {
        uVar5 = uVar9;
      }
      local_50[1] = uVar5;
      for (uVar11 = 0; (int)uVar11 < (int)lVar7; uVar11 = uVar11 + 1) {
        cVar2 = FUN_18002ff36(&local_1e8,&local_138);
        *(char *)(*local_50 + (ulonglong)uVar11) = cVar2 + '0';
        FUN_18003057c(&local_1e8,10);
      }
      uVar11 = FUN_18002ff36(&local_1e8,&local_138);
      iVar3 = FUN_18002fde9(&local_1e8,&local_1e8,&local_138);
      if ((0 < iVar3) || ((uVar11 & 1) != 0 && iVar3 == 0)) {
        if (uVar11 == 9) {
          *(undefined1 *)(*local_50 + lVar7) = 0x3a;
          if (uVar10 != 1) {
            iVar3 = uVar10 + 1;
            do {
              uVar9 = uVar9 - 1;
              if (*(char *)(*local_50 + (uVar9 & 0xffffffff)) != ':') break;
              *(undefined1 *)(*local_50 + (uVar9 & 0xffffffff)) = 0x30;
              pcVar1 = (char *)(*local_50 + -1 + uVar9);
              *pcVar1 = *pcVar1 + '\x01';
              iVar3 = iVar3 + -1;
            } while (2 < iVar3);
          }
          if (*(char *)*local_50 == ':') {
            *(char *)*local_50 = '1';
            if ((param_2 & 4) == 0) {
              *param_5 = *param_5 + 1;
            }
            else {
              lVar7 = local_50[1];
              uVar5 = lVar7 + 1;
              if ((ulonglong)local_50[2] < uVar5) {
                (*(code *)local_50[3])();
                lVar7 = local_50[1];
                uVar5 = lVar7 + 1;
              }
              local_50[1] = uVar5;
              *(undefined1 *)(*local_50 + lVar7) = 0x30;
            }
          }
          goto code_r0x00018002f839;
        }
        uVar11 = uVar11 + 1;
      }
      *(char *)(*local_50 + lVar7) = (char)uVar11 + '0';
    }
  }
code_r0x00018002f839:
  if (local_348 != local_328) {
    thunk_FUN_180290e40();
  }
  if (local_298 != local_278) {
    thunk_FUN_180290e40();
  }
  if (local_138 != local_118) {
    thunk_FUN_180290e40();
  }
  if (local_1e8 != local_1c8) {
    thunk_FUN_180290e40();
  }
  return;
}

