/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d5c3f */

void FUN_1400d5c3f(longlong param_1,undefined8 param_2)

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
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)FUN_1400d30d4();
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
    uVar4 = FUN_140015326(&local_30);
    (**(code **)(*plVar2 + 0x48))(plVar2,0,&DAT_140e82210,uVar4);
    if (local_30 == (longlong *)0x0) {
      uVar4 = FUN_1401930f8(2);
      FUN_1401a4ca4("ImGui_ImplDX11_SetWindowSize() failed creating buffers.\n",0x38,1,uVar4);
    }
    else {
      (**(code **)(*(longlong *)*puVar3 + 0x48))((longlong *)*puVar3,local_30,0,plVar1 + 1);
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
}

