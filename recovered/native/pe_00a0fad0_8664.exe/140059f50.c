/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059f50 */

void FUN_140059f50(longlong *param_1,byte param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar5 = (longlong *)*param_1;
  if ((param_2 != 1 || plVar5 != (longlong *)0x0) &&
     (param_2 != 8 && (param_2 & 0xfe) != 2 || plVar5 != (longlong *)0x0)) {
    local_50 = param_1;
    if ((byte)(param_2 - 1) < 2) {
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
      if (param_2 == 2) {
        FUN_14005a2c8(&local_88,plVar5[1] - *plVar5 >> 4);
        lVar4 = *(longlong *)*local_50;
        lVar6 = ((longlong *)*local_50)[1];
        if (lVar4 != lVar6) {
          do {
            FUN_14005a536(&local_88,lVar4);
            lVar4 = lVar4 + 0x10;
          } while (lVar4 != lVar6);
        }
      }
      else {
        FUN_14005a2c8(&local_88,plVar5[1]);
        puVar1 = *(undefined8 **)*local_50;
        local_68 = (undefined8 *)*puVar1;
        while (local_68 != puVar1) {
          FUN_14005a536(&local_88,local_68 + 8);
          FUN_14001010a(&local_68);
        }
      }
      if (local_88 != lStack_80) {
        do {
          local_68 = *(undefined8 **)(lStack_80 + -0x10);
          uStack_60 = *(undefined4 *)(lStack_80 + -8);
          uStack_5c = *(undefined4 *)(lStack_80 + -4);
          *(undefined1 *)(lStack_80 + -0x10) = 0;
          *(undefined8 *)(lStack_80 + -8) = 0;
          FUN_140057b90(lStack_80 + -0x10);
          lStack_80 = lStack_80 + -0x10;
          if ((char)local_68 == '\x01') {
            local_90 = **(longlong **)CONCAT44(uStack_5c,uStack_60);
            lVar4 = *(longlong *)CONCAT44(uStack_5c,uStack_60);
            while (local_90 != lVar4) {
              FUN_14005a536(&local_88,local_90 + 0x40);
              FUN_14001010a(&local_90);
            }
            plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
            lVar4 = *plVar5;
            FUN_14005a7e8(plVar5,plVar5,*(undefined8 *)(lVar4 + 8));
            *(longlong *)(lVar4 + 8) = lVar4;
            *(longlong *)lVar4 = lVar4;
            *(longlong *)(lVar4 + 0x10) = lVar4;
            plVar5[1] = 0;
          }
          else if ((char)local_68 == '\x02') {
            plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
            lVar4 = *plVar5;
            lVar6 = plVar5[1];
            if (lVar4 != lVar6) {
              do {
                FUN_14005a536(&local_88,lVar4);
                lVar4 = lVar4 + 0x10;
              } while (lVar4 != lVar6);
              plVar5 = (longlong *)CONCAT44(uStack_5c,uStack_60);
              lVar4 = *plVar5;
              lVar6 = plVar5[1];
            }
            if (lVar4 != lVar6) {
              do {
                FUN_140057b90(lVar4);
                lVar4 = lVar4 + 0x10;
              } while (lVar4 != lVar6);
              plVar5[1] = *plVar5;
            }
          }
          FUN_140057b90(&local_68);
        } while (local_88 != lStack_80);
      }
      FUN_14005a932(&local_88);
    }
    plVar5 = local_50;
    switch(param_2) {
    case 1:
      plVar2 = (longlong *)*local_50;
      FUN_14005a7e8(plVar2,plVar2,*(undefined8 *)(*plVar2 + 8));
      thunk_FUN_1400ddcd0(*plVar2,0x50);
      uVar3 = 0x10;
      break;
    case 2:
      FUN_14005a932(*local_50);
      uVar3 = 0x18;
      break;
    case 3:
      FUN_1400017de(*local_50);
      uVar3 = 0x20;
      break;
    default:
      goto switchD_14005a1a2_caseD_4;
    case 8:
      FUN_140016e5c(*local_50);
      uVar3 = 0x28;
    }
    thunk_FUN_1400ddcd0(*plVar5,uVar3);
  }
switchD_14005a1a2_caseD_4:
  return;
}

