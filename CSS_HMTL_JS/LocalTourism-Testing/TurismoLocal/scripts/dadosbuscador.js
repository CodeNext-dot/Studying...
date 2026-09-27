// JSON
const data = {
  "pontosTuristicos": [
    {
      "id": 1,
      "nome": "Praia de Tambaú",
      "cidade": "João Pessoa",
      "imagemPrincipal": "imagens/imagens-dados/id1.jpg",
      "descricaoCurta": "Praia urbana famosa pelo calçadão e vida noturna.",
      "detalhes": {
        "historia": "Tambaú é uma das praias mais tradicionais da cidade, conhecida desde os anos 70 como ponto turístico central.",
        "descricaoCompleta": "Com águas mornas e infraestrutura de bares e restaurantes, é ideal para passeios e eventos culturais.",
        "maps": "praia de tambau joão pessoa",
        "rotas": ["Ônibus urbano", "Táxi/Uber", "Carro particular"],
        "maisImagens": ["imagens/tambau_noite.jpg", "imagens/tambau_dia.jpg"],
        "avaliacao": {
          "media": 4,
          "comentarios": [
            { "usuario": "Ana", "nota": 5, "texto": "Ótima para caminhar e relaxar." },
            { "usuario": "Carlos", "nota": 4, "texto": "Muito movimentada, mas linda." }
          ]
        }
      }
    },
    {
      "id": 2,
      "nome": "Museu de Arte Assis",
      "cidade": "João Pessoa",
      "imagemPrincipal": "imagens/imagens-dados/id2.jpg",
      "descricaoCurta": "Museu com acervo de arte moderna e contemporânea.",
      "detalhes": {
        "historia": "Fundado em 1960, abriga obras de artistas brasileiros renomados.",
        "descricaoCompleta": "O MAC é referência cultural na cidade, com exposições permanentes e temporárias.",
        "maps": "Museu de Arte Assis Chateaubriand joão pessoa",
        "rotas": ["Ônibus urbano", "Táxi/Uber"],
        "maisImagens": ["imagens/mac_exposicao.jpg", "imagens/mac_fachada.jpg"],
        "avaliacao": {
          "media": 4.2,
          "comentarios": [
            { "usuario": "Mariana", "nota": 5, "texto": "Acervo incrível e bem organizado." },
            { "usuario": "João", "nota": 4, "texto": "Boa visita, mas poderia ter mais eventos." }
          ]
        }
      }
    },
    {
      "id": 3,
      "nome": "Farol do Cabo Branco",
      "cidade": "João Pessoa",
      "imagemPrincipal": "imagens/imagens-dados/id3.jpg",
      "descricaoCurta": "Marco geográfico do ponto mais oriental das Américas.",
      "detalhes": {
        "historia": "Construído em 1972, simboliza o extremo oriental do continente americano.",
        "descricaoCompleta": "Localizado em uma falésia, oferece vista panorâmica do litoral e é cartão-postal da cidade.",
        "maps": "Farol do Cabo Branco joão pessoa",
        "rotas": ["Carro particular", "Táxi/Uber"],
        "maisImagens": ["imagens/farol_vista.jpg", "imagens/farol_paisagem.jpg"],
        "avaliacao": {
          "media": 3.8,
          "comentarios": [
            { "usuario": "Pedro", "nota": 5, "texto": "Vista maravilhosa, imperdível." },
            { "usuario": "Lucia", "nota": 5, "texto": "Lugar histórico e muito bonito." }
          ]
        }
      }
    },
    {
      "id": 4,
      "nome": "Parque Sólon de Lucena",
      "cidade": "João Pessoa",
      "imagemPrincipal": "imagens/imagens-dados/id4.jpg",
      "descricaoCurta": "Cartão-postal de João Pessoa conhecido por sua lagoa central e área de lazer arborizada.",
      "detalhes": {
        "historia": "O Parque Solon de Lucena, popularmente chamado de Lagoa, foi inaugurado em 1922 e se tornou um dos espaços públicos mais tradicionais da capital paraibana.",
        "descricaoCompleta": "Localizado no centro da cidade, o parque reúne áreas verdes, pista para caminhada, iluminação noturna e uma grande lagoa central. É um dos principais pontos de encontro da população e recebe eventos culturais e apresentações ao longo do ano.",
        "maps": "Parque Sólon de Lucena joão pessoa",
        "rotas": ["Ônibus urbano", "Táxi/Uber", "Carro particular"],
        "maisImagens": ["imagens/lagoa_noite.jpg", "imagens/lagoa_dia.jpg"],
        "avaliacao": {
          "media": 4.6,
          "comentarios": [
            { "usuario": "Fernanda", "nota": 5, "texto": "Lugar muito bonito à noite, ótimo para passear."},
            { "usuario": "Rafael", "nota": 4, "texto": "Bem localizado e agradável, principalmente após a revitalização."}
          ]
        }
      }
    },
    {
      "id": 5,
      "nome": "Praia do Jacaré",
      "cidade": "Cabedelo",
      "imagemPrincipal": "imagens/imagens-dados/id5.jpg",
      "descricaoCurta": "Famosa pelo pôr do sol ao som do Bolero de Ravel às margens do Rio Paraíba.",
      "detalhes": {
        "historia": "A Praia do Jacaré se tornou um dos destinos turísticos mais conhecidos da Paraíba graças às apresentações do saxofonista Jurandy do Sax, tradição iniciada nos anos 90 durante o pôr do sol.",
        "descricaoCompleta": "Localizada às margens do Rio Paraíba, a Praia do Jacaré atrai visitantes pelo clima tranquilo, passeios de catamarã, bares regionais e pelo tradicional espetáculo do pôr do sol com música ao vivo. O local possui estrutura turística com restaurantes, feirinhas e áreas para contemplação.",
        "maps": "praia do jacaré joão pessoa",
        "rotas": ["Táxi/Uber", "Carro particular"],
        "maisImagens": ["imagens/Jacare_por_do_sol.jpg", "imagens/Jacare_catamara.jpg"],
        "avaliacao": {
          "media": 4.5,
          "comentarios": [
            {"usuario": "Eduardo", "nota": 4, "texto": "Lugar muito bonito e organizado, especialmente no fim da tarde."},
            {"usuario": "Marina", "nota": 5, "texto": "O pôr do sol com música ao vivo é uma experiência incrível."},
          ]
        }
      }
    },
    {
      "id": 6,
      "nome": "Estação Cabo Branco",
      "cidade": "João Pessoa",
      "imagemPrincipal": "imagens/imagens-dados/id6.jpg",
      "descricaoCurta": "Centro cultural projetado por Oscar Niemeyer com exposições e vista para o mar.",
      "detalhes": {
        "historia": "Inaugurada em 2008, a Estação Cabo Branco foi projetada pelo arquiteto Oscar Niemeyer e se tornou um dos principais espaços culturais da capital paraibana.",
        "descricaoCompleta": "O local reúne áreas para exposições, auditórios, espaços científicos e mirantes com vista privilegiada para o litoral de João Pessoa. A arquitetura moderna é um dos grandes destaques do espaço.",
        "maps": "estação cabo branco joão pessoa",
        "rotas": ["Ônibus urbano", "Táxi/Uber", "Carro particular"],
        "maisImagens": ["imagens/estacao_noite.jpg", "imagens/estacao_dia.jpg"],
        "avaliacao": {
          "media": 4.7,
          "comentarios": [
            {"usuario": "Juliana", "nota": 5, "texto": "Arquitetura impressionante e ótimo espaço cultural."},
            {"usuario": "Lucas", "nota": 4, "texto": "Lugar tranquilo e bonito para visitar."},
          ]
        }
      }
    },
    {
      "id": 7,
      "nome": "Ilha de Areia Vermelha",
      "cidade": "Cabedelo",
      "imagemPrincipal": "imagens/imagens-dados/id7.jpg",
      "descricaoCurta": "Banco de areia cercado por águas cristalinas que aparece durante a maré baixa.",
      "detalhes": {
        "historia": "A Areia Vermelha é um dos destinos naturais mais famosos do litoral paraibano e atrai turistas principalmente durante períodos de maré baixa.",
        "descricaoCompleta": "O local oferece águas rasas e transparentes ideais para banho e passeios de catamarã. Barras flutuantes e música ao vivo costumam animar os visitantes nos fins de semana.",
        "maps": "ilha de areia vermelha joão pessoa",
        "rotas": ["Catamarã", "Lancha", "Passeio turístico"],
        "maisImagens": ["imagens/areia_vermelha_mar.jpg", "imagens/areia_vermelha_catarama.jpg"],
        "avaliacao": {
          "media": 4.9,
          "comentarios": [
            {"usuario": "Camila", "nota": 5, "texto": "Água cristalina e passeio incrível."},
            {"usuario": "Bruno", "nota": 5, "texto": "Um dos lugares mais bonitos que visitei na Paraíba."}
          ]
        }
      }
    },
    {
      "id": 8,
      "nome": "Mosteiro de São Bento",
      "cidade": "João Pessoa",
      "imagemPrincipal": "imagens/imagens-dados/id8.jpg",
      "descricaoCurta": "Mosteiro histórico com arquitetura barroca e importante patrimônio religioso da cidade.",
      "detalhes": {
        "historia": "O Mosteiro de São Bento começou a ser construído no século XVI e faz parte do conjunto histórico mais tradicional de João Pessoa.",
        "descricaoCompleta": "Conhecido pelos detalhes em estilo barroco e pela preservação histórica, o mosteiro atrai visitantes interessados em arquitetura, cultura e patrimônio religioso. O espaço transmite um clima silencioso e contemplativo no centro histórico da capital.",
        "maps": "mosteiro de são bento joão pessoa",
        "rotas": ["Táxi/Uber", "Carro particular", "Passeio guiado"],
        "maisImagens": ["imagens/mosteiro_entrada.jpg", "imagens/mosteiro_interno.jpg"],
        "avaliacao": {
          "media": 4.2,
          "comentarios": [
            {"usuario": "Ricardo", "nota": 5, "texto": "Lugar muito bonito e cheio de história."},
            {"usuario": "Patrícia", "nota": 4, "texto": "Arquitetura incrível e ambiente muito tranquilo."}
          ]
        }
      }
    },
    {
      "id": 9,
      "nome": "Praia de Coqueirinho",
      "cidade": "Conde",
      "imagemPrincipal": "imagens/imagens-dados/id9.jpg",
      "descricaoCurta": "Praia paradisíaca conhecida pelas falésias e águas azul-esverdeadas.",
      "detalhes": {
        "historia": "Coqueirinho ganhou destaque nacional por suas paisagens naturais preservadas e estrutura turística voltada ao ecoturismo.",
        "descricaoCompleta": "A praia possui mar calmo, coqueirais e falésias coloridas que atraem turistas durante todo o ano. Passeios de buggy e mirantes fazem parte das atrações mais procuradas.",
        "maps": "praia de coquerinho joão pessoa",
        "rotas": ["Buggy turístico", "Táxi/Uber", "Carro particular"],
        "maisImagens": ["imagens/coqueirinho_falesias.jpg", "imagens/coqueirinho_mar.jpg"],
        "avaliacao": {
          "media": 4.9,
          "comentarios": [
            {"usuario": "Larissa", "nota": 5, "texto": "Praia linda e muito bem preservada."},
            {"usuario": "Thiago", "nota": 5, "texto": "Visual incrível e ótimo passeio de buggy."}
          ]
        }
      }
    },
    {
      "id": 10,
      "nome": "Parque Arruda Câmara",
      "cidade": "João Pessoa",
      "imagemPrincipal": "imagens/imagens-dados/id10.jpg",
      "descricaoCurta": "Parque ecológico urbano conhecido como Bica, com áreas verdes e zoológico.",
      "detalhes": {
        "historia": "Fundado em 1922, o Parque Arruda Câmara é um dos espaços ambientais mais tradicionais de João Pessoa e recebeu o apelido popular de Bica devido às fontes naturais presentes na região.",
        "descricaoCompleta": "O parque reúne trilhas arborizadas, lago, áreas de preservação ambiental e um zoológico com diversas espécies de animais. É um dos principais espaços de lazer e educação ambiental da capital paraibana.",
        "maps": "zoologico da bica joão pessoa",
        "rotas": ["Ônibus urbano", "Táxi/Uber", "Carro particular"],
        "maisImagens": ["imagens/bica_trilha.jpg", "imagens/bica_zoologico.jpg"],
        "avaliacao": {
          "media": 4.1,
          "comentarios": [
            {"usuario": "Marcos", "nota": 5, "texto": "Lugar ótimo para passear em família e contato com a natureza."},
            {"usuario": "Beatriz", "nota": 5, "texto": "Muito arborizado e agradável para caminhadas."}
          ]
        }
      }
    }
  ]
};

// pega 3 pontos aleatórios
let pontosAleatorios = [...data.pontosTuristicos]
  .sort(() => Math.random() - 0.5)
  .slice(0, 3);

function renderDivs() {
  pontosAleatorios.forEach((ponto, index) => {
    const div = document.getElementById(`header-imgs-imagens${index + 1}`);
    

    if (div) {
      div.style.backgroundImage = "url('" + ponto.imagemPrincipal + "')";
      div.innerHTML = "";
      

      if (index === 1) {
        const link = document.getElementById(`link-header`);
        link.href = `BlogEx.html?id=${ponto.id}`;
        const p = document.createElement("p");
        p.textContent = ponto.descricaoCurta;
        p.style.textAlign = "center";
        p.style.color = "black";
        p.style.fontWeight = "bold";
        p.style.backgroundColor = "white";
        div.appendChild(p);
      }
    }
  });
}

renderDivs();

document.getElementById("header-imgs-buttondireito").addEventListener("click", () => {
  const primeiro = pontosAleatorios.shift(); // tira o primeiro
  pontosAleatorios.push(primeiro);           // joga no fim
  renderDivs();
});
document.getElementById("header-imgs-buttonesquerdo").addEventListener("click", () => {
  const ultimo = pontosAleatorios.pop();     // tira o último
  pontosAleatorios.unshift(ultimo);          // joga no início
  renderDivs();
});


// Função para criar o HTML de cada item
function criarItem(ponto) {
  return `
    <div class="Item-main">
      <div style="background-image: url(${ponto.imagemPrincipal});">
      </div>
      <h1 style="font-size: 15px; text-align: center;">${ponto.nome}</h1>
      <p>${ponto.descricaoCurta}</p>
      <a href="BlogEx.html?id=${ponto.id}">
        <button>saiba mais</button>
      </a>
    </div>
  `;
}

// Renderizar recomendados (exemplo: avaliação >= 4.5)
function renderRecomendados() {
  const article = document.getElementById("principaisdestaques-article");
  article.innerHTML = "";

  data.pontosTuristicos
    .filter(p => p.detalhes.avaliacao.media >= 4.5)
    .forEach(ponto => {
      article.innerHTML += criarItem(ponto);
    });
}

// Renderizar todos os pontos turísticos
function renderTodos() {
  const div = document.getElementById("explore-article");
  div.innerHTML = "";

  data.pontosTuristicos.forEach(ponto => {
    div.innerHTML += criarItem(ponto);
  });
}

// Chamar as funções
renderRecomendados();
renderTodos();



