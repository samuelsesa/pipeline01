pipeline {
    agent any 
    
    parameters {
      string defaultValue: 'Alfonso', description: 'Nombre del profe', name: 'NAME', trim: true
    }

    stages {
        stage('acceso a variables') {
          steps {
            echo "${currentBuild.number} -> Parmetro NAME = ${params.NAME}"
            }
        }
        stage('Build') {
            steps {
                sh label: '', script: 'make'
            }
        }

        stage('Run') {
            steps {
                sh label: '', script: './a.out'
            }
        }
    }
}