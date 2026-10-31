/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f12e0 */

undefined8 FUN_1400f12e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  
  lVar2 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    lVar1 = FUN_1400d3680(0x58);
    lVar4 = lVar2;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 8);
      if (lVar2 == 0) {
        puVar3 = &DAT_1401728de;
      }
      else {
        puVar3 = *(undefined1 **)(lVar2 + 0x28);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)(lVar2 + 0x30);
        }
      }
      FUN_1400d39b0(local_98,0);
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1400d9d60("bad locale name");
      }
      FUN_1400d3ce0(local_98,puVar3);
      lVar2 = time_get<>(lVar1,local_98,0);
      lVar4 = 1;
    }
    *param_1 = lVar2;
    if (lVar4 != 0) {
      FUN_1400d3da0(local_98);
      if (local_40 != 0) {
        thunk_FUN_1401212e0();
      }
      local_40 = 0;
      if (local_50 != 0) {
        thunk_FUN_1401212e0();
      }
      local_50 = 0;
      if (local_60 != 0) {
        thunk_FUN_1401212e0();
      }
      local_60 = 0;
      if (local_70 != 0) {
        thunk_FUN_1401212e0();
      }
      local_70 = 0;
      if (local_80 != 0) {
        thunk_FUN_1401212e0();
      }
      local_80 = 0;
      if (local_90 != 0) {
        thunk_FUN_1401212e0();
      }
      local_90 = 0;
      FUN_1400d3a00(local_98);
    }
  }
  return 5;
}

