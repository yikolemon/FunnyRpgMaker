/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180269d80 */

undefined8 FUN_180269d80(longlong *param_1,longlong param_2)

{
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this;
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  _Locinfo local_98 [8];
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
  
  lVar1 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    this = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
           FUN_180239630(0x58);
    lVar3 = lVar1;
    if (this != (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        puVar2 = &DAT_1803861e4;
      }
      else {
        puVar2 = *(undefined1 **)(lVar1 + 0x28);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)(lVar1 + 0x30);
        }
      }
      FUN_18023d240(local_98,0);
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
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802397f0("bad locale name");
      }
      FUN_18023ccf0(local_98,puVar2);
      lVar1 = std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
              time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                        (this,local_98,0);
      lVar3 = 1;
    }
    *param_1 = lVar1;
    if (lVar3 != 0) {
      FUN_18023cdb0(local_98);
      if (local_40 != 0) {
        thunk_FUN_180290e40();
      }
      local_40 = 0;
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
      FUN_18023d290(local_98);
    }
  }
  return 5;
}

