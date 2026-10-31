/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071b5d */

ulonglong FUN_140071b5d(longlong param_1,uint param_2,uint param_3,uint param_4,longlong *param_5,
                       uint *param_6,undefined4 *param_7)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  undefined1 auStackY_a8 [32];
  uint local_78 [2];
  uint local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  if (*(int *)(param_1 + 0x474) - 1U < 2) {
    uVar5 = FUN_1400754f8((longlong *)local_78,param_1,(ulonglong)param_2,(longlong)param_7);
    if ((int)uVar5 == 0) {
      uVar4 = FUN_1400755f1((longlong *)local_78,param_3,0,0,0,(byte)(param_4 >> 0x16) & 1);
      uVar5 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        if ((param_4 & 0x500000) == 0) {
          uVar5 = 0;
          if (*(char *)((longlong)param_6 + 0x1a) == '\a') {
            plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x78);
            FUN_1400813a8((undefined8 *)local_78);
            uVar4 = FUN_1400813c0(plVar2,param_6,local_78,1);
            uVar5 = (ulonglong)uVar4;
            if (uVar4 == 0) {
              *(undefined1 *)((longlong)param_6 + 0x1a) = local_5e;
              param_6[2] = local_70;
              *(undefined2 *)(param_6 + 6) = local_60;
              FUN_14001d4e4(*(longlong *)(param_1 + 0x78),local_68);
              puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0xf0) + 8);
              *puVar1 = *puVar1 | 1;
            }
            else {
              FUN_1400817e3(plVar2,(undefined8 *)local_78);
            }
          }
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = uVar5 & 0xffffffff;
    }
  }
  else {
    uVar5 = 2;
    if (*(int *)(param_1 + 0x474) == 3) {
      iVar3 = FUN_1400759d3(param_1,param_2,param_3,param_5,param_7);
      if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_a8)) {
        return CONCAT44(extraout_var,iVar3);
      }
      goto LAB_140071ce2;
    }
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_a8)) {
    return uVar5;
  }
LAB_140071ce2:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_a8);
}

