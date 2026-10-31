/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006e637 */

void FUN_14006e637(undefined4 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  HWND hWndInsertAfter;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  ulonglong local_c8;
  undefined1 local_c0 [40];
  longlong local_98;
  longlong local_90;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar4 = FUN_1400799b5();
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x2178);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x2180);
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar7);
        if ((*(longlong *)(lVar2 + 0x60) != 0) && (lVar5 = FUN_140088c06(), lVar2 != lVar5)) {
          FUN_14006e95b(*(undefined8 *)(lVar2 + 0x60),param_1);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    if (param_2 == '\0') {
      FUN_14006e9e9(&local_98);
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
      FUN_14006f16c(local_d8);
      hWndInsertAfter = (HWND)-(ulonglong)DAT_140f17970;
      while (local_90 != local_98) {
        if (local_68 != plStack_60) {
          plStack_60 = local_68;
        }
        FUN_1400483bc(&local_68,
                      *(longlong *)(local_90 + -0x18) - *(longlong *)(local_90 + -0x20) >> 3);
        local_80 = local_90 + -0x28;
        plVar3 = *(longlong **)(local_90 + -0x18);
        for (plVar8 = *(longlong **)(local_90 + -0x20); plVar6 = plStack_60, plVar8 != plVar3;
            plVar8 = plVar8 + 1) {
          lVar4 = *plVar8;
          lVar7 = *(longlong *)(lVar4 + 0x48);
          if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x60) != 0)) &&
             (plVar6 = (longlong *)FUN_1400742ce(local_68,plStack_60), plVar6 == plStack_60)) {
            local_78 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x60);
            if (plVar6 == local_58) {
              FUN_14000d3b4(&local_68,plStack_60,&local_78);
            }
            else {
              *plStack_60 = local_78;
              plStack_60 = plStack_60 + 1;
            }
          }
        }
        while (local_90 = local_80, plVar6 != local_68) {
          plVar6 = plVar6 + -1;
          FUN_14006f1c0(local_d8,&local_78,plVar6);
          if (local_70 == '\x01') {
            if (1 < local_c8) {
              SetWindowPos(*(HWND *)(local_78 + 0x10),hWndInsertAfter,0,0,0,0,0x213);
            }
            hWndInsertAfter = *(HWND *)(local_78 + 0x10);
          }
        }
      }
      FUN_1400022f6(local_c0);
      FUN_1400707ca(local_d0);
      FUN_1400022f6(&local_68);
      FUN_1400742f6(&local_98);
    }
  }
  return;
}

