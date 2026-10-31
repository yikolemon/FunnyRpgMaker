/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140227884 */

void FUN_140227884(longlong *param_1,byte param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
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
  plVar3 = (longlong *)*param_1;
  if ((param_2 != 1 || plVar3 != (longlong *)0x0) &&
     (param_2 != 8 && (param_2 & 0xfe) != 2 || plVar3 != (longlong *)0x0)) {
    if ((byte)(param_2 - 1) < 2) {
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
      local_50 = param_1;
      if (param_2 == 2) {
        FUN_140227bfc(&local_88,plVar3[1] - *plVar3 >> 4);
        lVar2 = *(longlong *)*local_50;
        lVar4 = ((longlong *)*local_50)[1];
        if (lVar2 != lVar4) {
          do {
            FUN_140227e6a(&local_88,lVar2);
            lVar2 = lVar2 + 0x10;
          } while (lVar2 != lVar4);
        }
      }
      else {
        FUN_140227bfc(&local_88,plVar3[1]);
        puVar1 = *(undefined8 **)*local_50;
        local_68 = (undefined8 *)*puVar1;
        while (local_68 != puVar1) {
          FUN_140227e6a(&local_88,local_68 + 8);
          FUN_14022811c(&local_68);
        }
      }
      if (local_88 != lStack_80) {
        do {
          local_68 = *(undefined8 **)(lStack_80 + -0x10);
          uStack_60 = *(undefined4 *)(lStack_80 + -8);
          uStack_5c = *(undefined4 *)(lStack_80 + -4);
          *(undefined1 *)(lStack_80 + -0x10) = 0;
          *(undefined8 *)(lStack_80 + -8) = 0;
          FUN_140224c96(lStack_80 + -0x10);
          lStack_80 = lStack_80 + -0x10;
          if ((char)local_68 == '\x01') {
            local_90 = **(longlong **)CONCAT44(uStack_5c,uStack_60);
            lVar2 = *(longlong *)CONCAT44(uStack_5c,uStack_60);
            while (local_90 != lVar2) {
              FUN_140227e6a(&local_88,local_90 + 0x40);
              FUN_14022811c(&local_90);
            }
            plVar3 = (longlong *)CONCAT44(uStack_5c,uStack_60);
            lVar2 = *plVar3;
            FUN_14022815e(plVar3,plVar3,*(undefined8 *)(lVar2 + 8));
            *(longlong *)(lVar2 + 8) = lVar2;
            *(longlong *)lVar2 = lVar2;
            *(longlong *)(lVar2 + 0x10) = lVar2;
            plVar3[1] = 0;
          }
          else if ((char)local_68 == '\x02') {
            plVar3 = (longlong *)CONCAT44(uStack_5c,uStack_60);
            lVar2 = *plVar3;
            lVar4 = plVar3[1];
            if (lVar2 != lVar4) {
              do {
                FUN_140227e6a(&local_88,lVar2);
                lVar2 = lVar2 + 0x10;
              } while (lVar2 != lVar4);
              plVar3 = (longlong *)CONCAT44(uStack_5c,uStack_60);
              lVar2 = *plVar3;
              lVar4 = plVar3[1];
            }
            if (lVar2 != lVar4) {
              do {
                FUN_140224c96(lVar2);
                lVar2 = lVar2 + 0x10;
              } while (lVar2 != lVar4);
              plVar3[1] = *plVar3;
            }
          }
          FUN_140224c96(&local_68);
        } while (local_88 != lStack_80);
      }
      FUN_140228320(&local_88);
    }
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return;
    }
  }
  return;
}

