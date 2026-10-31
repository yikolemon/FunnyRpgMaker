/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bafa6 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1400bafa6(undefined8 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined8 param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_1708 [32];
  undefined4 local_16e8;
  longlong *local_16e0;
  longlong *local_16d8;
  longlong *local_16d0;
  undefined4 *local_16c8;
  undefined4 local_16c0;
  undefined8 local_16b8;
  longlong local_16a8;
  undefined4 local_16a0;
  undefined4 local_169c;
  uint local_1698;
  uint uStack_1694;
  undefined8 uStack_1690;
  longlong local_1688 [100];
  longlong local_1368 [50];
  longlong local_11d8 [50];
  undefined1 local_1048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_1708;
  FUN_1400baaa8(param_1,local_1048,0);
  FUN_1400baf6e(local_1048,0x5c);
  iVar2 = FUN_1400bad6c(local_1048);
  uVar7 = 0xffffffff;
  if (iVar2 != -1) {
    iVar2 = FUN_1400bad6c(local_1048);
    if (iVar2 == 0) {
      *param_2 = 1;
      uVar6 = _malloc_base(0x50);
      *(undefined8 *)(param_2 + 2) = uVar6;
      FUN_1400bade0(param_1,uVar6);
      uVar7 = 1;
    }
    else {
      FUN_1400bad19(local_1048);
      local_1698 = 0;
      uStack_1690 = 0;
      lVar3 = _malloc_base(0x1000);
      if (lVar3 == 0) {
        FUN_1400bba25(&local_1698);
      }
      else {
        lVar4 = _malloc_base(0x1000);
        if (lVar4 == 0) {
          FUN_1400bba25(&local_1698);
        }
        else {
          local_16a8 = _malloc_base(0x1000);
          if (local_16a8 == 0) {
            FUN_1400bba25(&local_1698);
            thunk_FUN_1401212e0(lVar3);
            lVar3 = lVar4;
          }
          else {
            if (param_5 == 0) {
              local_11d8[0] = 0;
            }
            else {
              FUN_14011cf10(lVar3);
              local_11d8[0] = lVar3;
              puVar5 = (undefined2 *)FUN_140107f30(lVar3,0x3b);
              if (puVar5 == (undefined2 *)0x0) {
                uVar8 = 1;
              }
              else {
                uVar8 = 1;
                do {
                  *puVar5 = 0;
                  local_11d8[uVar8] = (longlong)(puVar5 + 1);
                  uVar8 = uVar8 + 1;
                  puVar5 = (undefined2 *)FUN_140107f30(puVar5 + 1,0x3b);
                } while (puVar5 != (undefined2 *)0x0);
                uVar8 = uVar8 & 0xffffffff;
              }
              local_11d8[uVar8] = 0;
            }
            if (param_6 == 0) {
              local_1368[0] = 0;
            }
            else {
              FUN_14011cf10(lVar4,param_6);
              local_1368[0] = lVar4;
              puVar5 = (undefined2 *)FUN_140107f30(lVar4,0x3b);
              if (puVar5 == (undefined2 *)0x0) {
                uVar8 = 1;
              }
              else {
                uVar8 = 1;
                do {
                  *puVar5 = 0;
                  local_1368[uVar8] = (longlong)(puVar5 + 1);
                  uVar8 = uVar8 + 1;
                  puVar5 = (undefined2 *)FUN_140107f30(puVar5 + 1,0x3b);
                } while (puVar5 != (undefined2 *)0x0);
                uVar8 = uVar8 & 0xffffffff;
              }
              local_1368[uVar8] = 0;
            }
            lVar1 = local_16a8;
            if (param_7 == 0) {
              local_1688[0] = 0;
              plVar9 = (longlong *)0x0;
            }
            else {
              FUN_14011cf10(local_16a8);
              local_1688[0] = lVar1;
              puVar5 = (undefined2 *)FUN_140107f30(lVar1,0x3b);
              if (puVar5 == (undefined2 *)0x0) {
                uVar8 = 1;
              }
              else {
                uVar8 = 1;
                do {
                  *puVar5 = 0;
                  local_1688[uVar8] = (longlong)(puVar5 + 1);
                  uVar8 = uVar8 + 1;
                  puVar5 = (undefined2 *)FUN_140107f30(puVar5 + 1,0x3b);
                } while (puVar5 != (undefined2 *)0x0);
                uVar8 = uVar8 & 0xffffffff;
              }
              local_1688[uVar8] = 0;
              plVar9 = local_1688;
              if (local_1688[0] == 0) {
                plVar9 = (longlong *)0x0;
              }
            }
            local_169c = 0;
            local_16b8 = param_8;
            local_16c0 = 0;
            local_16d8 = local_1368;
            local_16e0 = local_11d8;
            local_16e8 = param_4;
            local_16d0 = plVar9;
            local_16c8 = &local_169c;
            local_1698 = FUN_1400bb413(local_1048,local_1048,0,param_3);
            if (-1 < (int)local_1698) {
              local_16a0 = local_169c;
              uStack_1690 = _calloc_base(1,(ulonglong)local_1698 * 0x50);
              if (uStack_1690 != 0) {
                local_169c = 0;
                local_1698 = 0;
                local_16b8 = param_8;
                local_16c0 = local_16a0;
                local_16d8 = local_1368;
                local_16e0 = local_11d8;
                local_16e8 = param_4;
                local_16d0 = plVar9;
                local_16c8 = &local_169c;
                iVar2 = FUN_1400bb413(local_1048,local_1048,&local_1698,param_3);
                if (-1 < iVar2) {
                  if (param_2 != (uint *)0x0) {
                    *param_2 = local_1698;
                    param_2[1] = uStack_1694;
                    param_2[2] = (uint)uStack_1690;
                    param_2[3] = uStack_1690._4_4_;
                  }
                  thunk_FUN_1401212e0(lVar3);
                  thunk_FUN_1401212e0(lVar4);
                  thunk_FUN_1401212e0(local_16a8);
                  uVar7 = local_1698;
                  goto LAB_1400bb3d5;
                }
              }
            }
            FUN_1400bba25(&local_1698);
            thunk_FUN_1401212e0(lVar3);
            thunk_FUN_1401212e0(lVar4);
            lVar3 = local_16a8;
          }
        }
        thunk_FUN_1401212e0(lVar3);
      }
    }
  }
LAB_1400bb3d5:
  if (DAT_1401c9640 == (local_48 ^ (ulonglong)auStack_1708)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_1708);
}

