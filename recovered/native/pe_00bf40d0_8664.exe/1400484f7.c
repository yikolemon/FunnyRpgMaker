/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400484f7 */

int FUN_1400484f7(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [32];
  undefined1 auStack_88 [36];
  int local_64;
  undefined1 local_60 [16];
  undefined1 (*local_50) [32];
  code *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  lVar1 = param_2[6];
  local_64 = 2;
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_140049cef(lVar1,*(longlong *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  pauVar7 = FUN_14001c423(lVar1,0x40,&local_64);
  if (local_64 != 0) goto LAB_1400486c4;
  local_64 = FUN_140021063(param_2,*(uint *)(param_2 + 1));
  if (local_64 != 0) goto LAB_1400486c4;
  uVar3 = *(undefined4 *)(param_1 + 0x280);
  uVar4 = *(undefined4 *)(param_1 + 0x284);
  uVar5 = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(*pauVar7 + 4) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(*pauVar7 + 8) = uVar3;
  *(undefined4 *)(*pauVar7 + 0xc) = uVar4;
  *(undefined4 *)(*pauVar7 + 0x10) = uVar5;
  *(undefined4 *)(*pauVar7 + 0x14) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(*pauVar7 + 0x18) = *(undefined4 *)(param_1 + 0x280);
  lVar2 = *(longlong *)(param_1 + 0x2a0);
  if (*(undefined8 **)(lVar2 + 0x48) == (undefined8 *)0x0) {
LAB_140048647:
    uVar6 = *(undefined8 *)(*pauVar7 + 0xc);
    *(undefined8 *)(param_1 + 0x27c) = *(undefined8 *)(*pauVar7 + 4);
    *(undefined8 *)(param_1 + 0x284) = uVar6;
    *(int *)(param_1 + 0x58) = (int)*(short *)(*pauVar7 + 6);
    *(int *)(param_1 + 0x5c) = (int)*(short *)(*pauVar7 + 10);
    *(int *)(param_1 + 0x60) = *(int *)(*pauVar7 + 0xc) + 0xffff >> 0x10;
    *(int *)(param_1 + 100) = *(int *)(*pauVar7 + 0x10) + 0xffff >> 0x10;
    if (*(int *)(*pauVar7 + 0x18) < *(int *)(*pauVar7 + 0x14)) {
      *(short *)(param_1 + 0x6a) = (short)((uint)(*(int *)(*pauVar7 + 0x14) + 0x8000) >> 0x10);
      *(short *)(param_1 + 0x6c) = (short)((uint)(*(int *)(*pauVar7 + 0x18) + 0x8000) >> 0x10);
    }
    if (*(int *)(pauVar7[1] + 0x18) != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x40;
      *(undefined1 (**) [32])(param_1 + 0x2a8) = pauVar7;
      pauVar7 = (undefined1 (*) [32])0x0;
    }
  }
  else {
    local_64 = (*(code *)**(undefined8 **)(lVar2 + 0x48))(local_60,param_2[6],param_2[7],param_2[8])
    ;
    if (local_64 == 0) {
      local_40 = param_1 + 0xd8;
      local_48 = FUN_140049d33;
      local_50 = pauVar7;
      local_64 = (**(code **)(*(longlong *)(lVar2 + 0x48) + 0x10))(local_60);
      (**(code **)(*(longlong *)(lVar2 + 0x48) + 8))(local_60);
    }
    if ((char)local_64 == '\x02') {
      if (((6 < *(uint *)(param_2 + 1)) && (*(byte *)(param_2[7] + 1) < 4)) &&
         (*(uint *)(param_2[7] + 2) == *(uint *)(param_2 + 1))) {
        local_64 = FUN_140049daf(param_1,(longlong)param_2,(longlong)pauVar7);
        goto LAB_140048643;
      }
    }
    else {
LAB_140048643:
      if (local_64 == 0) goto LAB_140048647;
    }
  }
  FUN_140021187(param_2);
LAB_1400486c4:
  if (pauVar7 != (undefined1 (*) [32])0x0) {
    FUN_140049cef(lVar1,(longlong)pauVar7);
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_88)) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_88);
}

