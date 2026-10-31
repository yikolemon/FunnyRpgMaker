/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180256d70 */

undefined8 FUN_180256d70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined2 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  undefined1 local_48;
  
  puVar4 = (undefined8 *)0x0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_180239630(0x10);
    puVar5 = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        puVar3 = &DAT_1803861e4;
      }
      else {
        puVar3 = *(undefined1 **)(lVar1 + 0x28);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)(lVar1 + 0x30);
        }
      }
      FUN_18023d240(local_a8,0);
      local_a0 = 0;
      local_98 = 0;
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
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802397f0("bad locale name");
      }
      FUN_18023ccf0(local_a8,puVar3);
      puVar4 = (undefined8 *)0x1;
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = std::
                money_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
                ::vftable;
      puVar5 = puVar2;
    }
    *param_1 = (longlong)puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_18023cdb0(local_a8);
      if (local_50 != 0) {
        thunk_FUN_180290e40();
      }
      local_50 = 0;
      if (local_60 != 0) {
        thunk_FUN_180290e40();
      }
      local_60 = 0;
      if (local_70 != 0) {
        thunk_FUN_180290e40();
      }
      local_70 = 0;
      if (local_80 != 0) {
        thunk_FUN_180290e40();
      }
      local_80 = 0;
      if (local_90 != 0) {
        thunk_FUN_180290e40();
      }
      local_90 = 0;
      if (local_a0 != 0) {
        thunk_FUN_180290e40();
      }
      local_a0 = 0;
      FUN_18023d290(local_a8);
    }
  }
  return 3;
}

