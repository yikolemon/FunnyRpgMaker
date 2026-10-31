/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c962f */

void FUN_1801c962f(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_1801c68b0();
  plVar1 = *(longlong **)(param_1 + 0x48);
  if ((longlong *)plVar1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    plVar1[1] = 0;
  }
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    local_40 = 0;
    local_48 = 0;
    (**(code **)(*plVar2 + 0x68))
              (plVar2,0,(longlong)(float)param_2,(longlong)(float)((ulonglong)param_2 >> 0x20));
    plVar2 = (longlong *)*plVar1;
    uVar4 = FUN_1800188ac(&local_30);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,&DAT_180329500,uVar4);
    if (local_30 == (longlong *)0x0) {
      uVar4 = FUN_1802723a4(2);
      FUN_180286a64("ImGui_ImplDX11_SetWindowSize() failed creating buffers.\n",0x38,1,uVar4);
    }
    else {
      (**(code **)(*(longlong *)*puVar3 + 0x48))((longlong *)*puVar3,local_30,0,plVar1 + 1);
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

