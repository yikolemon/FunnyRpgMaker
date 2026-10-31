/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003aa9f */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14003aa9f(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  bool bVar6;
  uint local_30c0 [2];
  undefined8 local_30b8;
  longlong local_10a8 [7];
  longlong *local_1070;
  undefined8 local_68;
  uint local_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (DAT_140f2a250 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_14001679e(&local_58,&DAT_140f2a240,0);
    FUN_140002f76();
    local_68 = 0xffff00000000;
    ppppuVar5 = &local_58;
    if (7 < uStack_40) {
      ppppuVar5 = (undefined8 ****)local_58;
    }
    local_60 = FUN_14018a650(ppppuVar5,local_30c0,3,0xffffffff);
    FUN_140002738(&local_68,local_60,local_30c0);
    uVar2 = local_60;
    local_30b8 = FUN_140002f76();
    local_30c0[0] = uVar2;
    iVar1 = (int)local_68;
    if ((int)local_68 == 0) {
      if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14003cdf3("exists",local_30c0,&local_58);
      }
      bVar6 = false;
    }
    else {
      FUN_140002f76();
      bVar6 = iVar1 != 1;
    }
    FUN_140001056(&local_58);
    if (bVar6) {
      DAT_140f2a368 = FUN_14003c83b();
      if (DAT_140f2a368 - 3U < 0xfffffffe) {
        local_48 = 0;
        uStack_40 = 0;
        local_58 = (undefined8 ****)0x0;
        uStack_50 = 0;
        FUN_140003186(&local_58,
                      *(undefined8 *)
                       ((longlong)&PTR_s_Unknown_1401cd6a0 + (ulonglong)(uint)(DAT_140f2a368 << 4)),
                      *(undefined8 *)(&DAT_1401cd6a8 + (uint)(DAT_140f2a368 << 4)));
        ppppuVar5 = &local_58;
        if (0xf < uStack_40) {
          ppppuVar5 = (undefined8 ****)local_58;
        }
        puVar4 = DAT_140f2a240;
        if (DAT_140f2a258 < 0x10) {
          puVar4 = &DAT_140f2a240;
        }
        FUN_14003c798(local_30c0,3,"%s: %s - %s",&DAT_140ec2115,ppppuVar5,puVar4);
        FUN_14003c732(&DAT_140f2a2d8,local_30c0);
        if (local_1070 != (longlong *)0x0) {
          (**(code **)(*local_1070 + 0x20))(local_1070,local_1070 != local_10a8);
          local_1070 = (longlong *)0x0;
        }
        FUN_14000109c(&local_58);
        DAT_140f2a250 = 0;
        puVar4 = DAT_140f2a240;
        if (DAT_140f2a258 < 0x10) {
          puVar4 = &DAT_140f2a240;
        }
        *(undefined1 *)puVar4 = 0;
        uVar3 = 0;
      }
      else {
        FUN_14003c99c(&DAT_140f2a240);
        uVar3 = 1;
      }
    }
    else {
      puVar4 = &DAT_140f2a240;
      if (0xf < DAT_140f2a258) {
        puVar4 = DAT_140f2a240;
      }
      FUN_14003c798(local_30c0,3,"%s: %s",&DAT_140ec1ef5,puVar4);
      FUN_14003c732(&DAT_140f2a2d8,local_30c0);
      if (local_1070 != (longlong *)0x0) {
        (**(code **)(*local_1070 + 0x20))(local_1070,local_1070 != local_10a8);
      }
      DAT_140f2a250 = 0;
      puVar4 = DAT_140f2a240;
      if (DAT_140f2a258 < 0x10) {
        puVar4 = &DAT_140f2a240;
      }
      *(undefined1 *)puVar4 = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

