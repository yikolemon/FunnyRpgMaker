/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ded6a */

void FUN_1800ded6a(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_108 [32];
  undefined1 local_e8 [16];
  undefined8 ***local_d8 [2];
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 ***local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char local_78 [8];
  undefined8 *local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804027d0);
  FUN_180001e92(&local_68,
                "\n(function () {\n\tvar result = [];\n\tfor (var i = 0; i < $gameActors._data.length; i++) {\n\t\tvar actor = $gameActors._data[i];\n\t\tif (!actor) continue;\n\t\tresult.push({\n\t\t\tactorId: actor._actorId,\n\t\t\tname: actor._name,\n\t\t\tparamPlus: actor._paramPlus,\n\t\t\thp: actor._hp,\n\t\t\tmp: actor._mp,\n\t\t\ttp: actor._tp,\n\t\t\tmhp: actor.mhp,\n\t\t\tmmp: actor.mmp,\n\t\t\tatk: actor.atk,\n\t\t\tdef: actor.def,\n\t\t\tmat: actor.mat,\n\t\t\tmdf: actor.mdf,\n\t\t\tagi: actor.agi,\n\t\t\tluk: actor.luk,\n\t\t});\n\t}\n\treturn result;\n})();\n"
               );
  FUN_180013de7(local_78,&local_68);
  FUN_180001ef2(&local_68);
  lVar1 = DAT_1804183f0;
  if (local_78[0] != '\x02') goto LAB_1800def8d;
  lVar5 = DAT_1804183e8;
  if (DAT_1804183e8 == DAT_1804183f0) {
code_r0x0001800dee67:
    local_50 = 0x8000000000000000;
    local_60 = 0;
    uStack_58 = *local_70;
    local_90 = (undefined8 *)0x0;
    local_80 = 0x8000000000000000;
    uStack_88 = local_70[1];
  }
  else {
    do {
      FUN_1800137c6(lVar5);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != lVar1);
    DAT_1804183f0 = DAT_1804183e8;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0x8000000000000000;
    if (local_78[0] == '\0') {
      local_50 = 1;
code_r0x0001800deea1:
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      local_80 = 1;
    }
    else {
      if (local_78[0] == '\x02') goto code_r0x0001800dee67;
      if (local_78[0] != '\x01') {
        local_50 = 0;
        goto code_r0x0001800deea1;
      }
      local_90 = (undefined8 *)*local_70;
      local_60 = *local_90;
      uStack_88 = 0;
      local_80 = 0x8000000000000000;
    }
  }
  local_98 = local_78;
  local_68 = local_78;
  while (cVar2 = FUN_18005324c(&local_68,&local_98), cVar2 == '\0') {
    pcVar3 = (char *)FUN_1800e04aa(&local_68);
    if (*pcVar3 == '\x01') {
      local_a8 = "name";
      local_a0 = 4;
      FUN_1800dfa68(local_d8,pcVar3,&local_a8);
      local_b8 = local_d8;
      if (0xf < local_c0) {
        local_b8 = local_d8[0];
      }
      local_b0 = local_c8;
      FUN_18015ace8(local_108,&local_b8);
      FUN_1800e0b1a(local_e8,local_108);
      uVar4 = FUN_1800136a6(pcVar3,"name");
      FUN_1800500c4(uVar4,local_e8);
      FUN_180001ef2(local_108);
      FUN_180001ef2(local_d8);
      FUN_1800e0b9a(&DAT_1804183e8,pcVar3);
    }
    FUN_1800531d0(&local_68);
  }
LAB_1800def8d:
  FUN_1800137c6(local_78);
  FUN_18023d6e0(&DAT_1804027d0);
  return;
}

