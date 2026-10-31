/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140281564 */

undefined4 FUN_140281564(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_298 [56];
  undefined1 local_260 [56];
  char local_228;
  undefined7 uStack_227;
  undefined8 local_218;
  ulonglong local_210;
  undefined8 local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  char *local_58;
  undefined4 local_48 [8];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    plVar2 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    FUN_140215958(plVar1,param_2,*plVar2);
  }
  if (param_1[3] != 0) {
    pcVar5 = &local_228;
    FUN_14027c19e(plVar1,pcVar5);
    if (7 < local_210) {
      pcVar5 = (char *)CONCAT71(uStack_227,local_228);
    }
    FUN_140215958(&DAT_140629048,pcVar5,local_218);
    FUN_14021331c(&local_228);
    DAT_140629170 = 0;
    local_48[0] = 0;
    FUN_1402841c4(&local_228,plVar1,local_48,(longlong)param_1 + 0x4c,param_1 + 10);
    if (local_228 == '\0') {
      cVar3 = FUN_140284338(&local_228,param_1 + 5);
      if (cVar3 == '\0') {
        local_90 = 0x1f00000041;
        local_88 = "";
        local_80 = 
        "andle recoverable errors.\n- Error recovery is not perfect nor guaranteed! It is a feature to ease development.\n- You not are not supposed to rely on it in the course of a normal application run.\n- Possible usage: facilitate recovery from errors triggered from a scripting language or after specific exceptions handlers.\n- Always ensure that on programmers seat you have at minimum Asserts or Tooltips enabled when making direct imgui API call! Otherwise it would severely hinder your ability to catch and correct mistakes!"
        ;
        FUN_140283ef0(&local_68);
        FUN_14023203a(local_48,&local_68,"p\nSize: %d\nCapacity: %d");
        FUN_140280e42(local_260,local_48);
                    /* WARNING: Subroutine does not return */
        FUN_14047ea80(local_260,&DAT_1405b7880);
      }
    }
    if ((char)param_1[9] == '\x01') {
      FUN_1402843d2(param_1,local_48);
      FUN_140290c0c(&local_218,local_48);
      FUN_14021331c(local_48);
    }
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1,&local_228);
    FUN_14028453c(&local_228);
    return uVar4;
  }
  local_68 = 0x5000000037;
  local_60 = "";
  local_58 = 
  "andle recoverable errors.\n- Error recovery is not perfect nor guaranteed! It is a feature to ease development.\n- You not are not supposed to rely on it in the course of a normal application run.\n- Possible usage: facilitate recovery from errors triggered from a scripting language or after specific exceptions handlers.\n- Always ensure that on programmers seat you have at minimum Asserts or Tooltips enabled when making direct imgui API call! Otherwise it would severely hinder your ability to catch and correct mistakes!"
  ;
  FUN_140283ef0(local_48);
  local_78 = "ing";
  local_70 = 0x25;
  FUN_140283e74(&local_228,&local_78,local_48);
  FUN_140280e42(local_298,&local_228);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_298,&DAT_1405b7880);
}

