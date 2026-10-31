/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063f00 */

void FUN_140063f00(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar4 = (longlong *)*param_1;
  if ((param_2 != 1 || plVar4 != (longlong *)0x0) &&
     (param_2 != 8 && (param_2 & 0xfe) != 2 || plVar4 != (longlong *)0x0)) {
    if ((byte)(param_2 - 1) < 2) {
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      lVar2 = plVar4[1] - *plVar4 >> 4;
      if (param_2 == 2) {
        FUN_14006423e(&local_78,lVar2);
        lVar2 = *(longlong *)*param_1;
        lVar3 = ((longlong *)*param_1)[1];
        if (lVar2 != lVar3) {
          do {
            FUN_14006446a(&local_78,lVar2);
            lVar2 = lVar2 + 0x10;
          } while (lVar2 != lVar3);
        }
      }
      else {
        FUN_14006423e(&local_78,lVar2 * -0x5555555555555555);
        lVar3 = ((longlong *)*param_1)[1];
        for (lVar2 = *(longlong *)*param_1; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
          FUN_14006446a(&local_78,lVar2 + 0x20);
        }
      }
      if (local_78 != lStack_70) {
        do {
          local_58 = *(uint *)(lStack_70 + -0x10);
          uStack_54 = *(undefined4 *)(lStack_70 + -0xc);
          uStack_50 = *(undefined4 *)(lStack_70 + -8);
          uStack_4c = *(undefined4 *)(lStack_70 + -4);
          *(undefined1 *)(lStack_70 + -0x10) = 0;
          *(undefined8 *)(lStack_70 + -8) = 0;
          FUN_1400578a6(lStack_70 + -0x10);
          lStack_70 = lStack_70 + -0x10;
          if ((local_58 & 0xff) == 1) {
            lVar3 = ((longlong *)CONCAT44(uStack_4c,uStack_50))[1];
            for (lVar2 = *(longlong *)CONCAT44(uStack_4c,uStack_50); lVar2 != lVar3;
                lVar2 = lVar2 + 0x30) {
              FUN_14006446a(&local_78,lVar2 + 0x20);
            }
            plVar4 = (longlong *)CONCAT44(uStack_4c,uStack_50);
            lVar2 = *plVar4;
            lVar3 = plVar4[1];
            if (lVar2 != lVar3) {
              do {
                FUN_1400639fd(lVar2);
                lVar2 = lVar2 + 0x30;
              } while (lVar2 != lVar3);
              plVar4[1] = *plVar4;
            }
          }
          else if ((local_58 & 0xff) == 2) {
            plVar4 = (longlong *)CONCAT44(uStack_4c,uStack_50);
            lVar2 = *plVar4;
            lVar3 = plVar4[1];
            if (lVar2 != lVar3) {
              do {
                FUN_14006446a(&local_78,lVar2);
                lVar2 = lVar2 + 0x10;
              } while (lVar2 != lVar3);
              plVar4 = (longlong *)CONCAT44(uStack_4c,uStack_50);
              lVar2 = *plVar4;
              lVar3 = plVar4[1];
            }
            if (lVar2 != lVar3) {
              do {
                FUN_1400578a6(lVar2);
                lVar2 = lVar2 + 0x10;
              } while (lVar2 != lVar3);
              plVar4[1] = *plVar4;
            }
          }
          FUN_1400578a6(&local_58);
        } while (local_78 != lStack_70);
      }
      FUN_14006471c(&local_78);
    }
    switch(param_2) {
    case 1:
      FUN_140063912(*param_1);
      uVar1 = 0x20;
      break;
    case 2:
      FUN_14006471c(*param_1);
      uVar1 = 0x18;
      break;
    case 3:
      FUN_1400017de(*param_1);
      uVar1 = 0x20;
      break;
    default:
      goto switchD_1400640f8_caseD_4;
    case 8:
      FUN_140016e5c(*param_1);
      uVar1 = 0x28;
    }
    thunk_FUN_1400ddcd0(*param_1,uVar1);
  }
switchD_1400640f8_caseD_4:
  return;
}

